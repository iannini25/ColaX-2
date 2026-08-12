/* Generated code for Python module 'PIL$ImageSequence'
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



/* The "module_PIL$ImageSequence" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageSequence;
PyDictObject *moduledict_PIL$ImageSequence;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_seek;
PyObject *const_str_digest_3cb1b4ccfe4b7d388e128f8521820403;
PyObject *const_str_plain_im;
PyObject *const_str_plain__min_frame;
PyObject *const_str_plain_position;
PyObject *const_str_digest_d201917a91bbb0ae7caf133e339aff38;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_ims;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_func;
PyObject *const_str_digest_06d4449398947512f245f9bcb0b75059;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2;
PyObject *const_str_digest_4142f27496789f33ba7a6e78b5942254;
PyObject *const_int_pos_26;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_2d79bb1196e0f4c20b263b2408e5c18f;
PyObject *const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3;
PyObject *const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_47fc739cd0e822fac5b4ee6de271e208;
PyObject *const_dict_8c411aaf975766eb2524b9981a081ffa;
PyObject *const_str_digest_b966d7d88e5fbf446a7658cc2f969216;
PyObject *const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d;
PyObject *const_str_plain___next__;
PyObject *const_str_digest_e43c65991ffc06c9073a4148287bde4e;
PyObject *const_tuple_str_plain_im_str_plain_position_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_83e0721c9585357a106383ec06ae3ce2;
PyObject *const_str_plain_all_frames;
PyObject *const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0;
PyObject *const_str_digest_a885e51016ff4c58cfc055e628ff06af;
PyObject *const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple;
PyObject *const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[44];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageSequence"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 44) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 44 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageSequence"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403", mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__min_frame", mod_consts.const_str_plain__min_frame);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__min_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_position", mod_consts.const_str_plain_position);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_position);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38", mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_func", mod_consts.const_str_plain_func);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059", mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2", mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254", mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f", mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3", mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a", mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208", mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa", mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216", mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d", mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___next__", mod_consts.const_str_plain___next__);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___next__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e", mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_position_tuple", mod_consts.const_tuple_str_plain_im_str_plain_position_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_position_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2", mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_all_frames", mod_consts.const_str_plain_all_frames);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_all_frames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0", mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af", mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple", mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple);
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
void checkModuleConstants_PIL$ImageSequence(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403", mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403) && "mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__min_frame", mod_consts.const_str_plain__min_frame);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__min_frame) && "mod_consts.const_str_plain__min_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_position", mod_consts.const_str_plain_position);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_position) && "mod_consts.const_str_plain_position");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38", mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38) && "mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ims) && "mod_consts.const_str_plain_ims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator) && "mod_consts.const_str_plain_Iterator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_func", mod_consts.const_str_plain_func);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_func) && "mod_consts.const_str_plain_func");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059", mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059) && "mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2", mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2) && "mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254", mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254) && "mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_26", mod_consts.const_int_pos_26);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_26) && "mod_consts.const_int_pos_26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f", mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f) && "mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3", mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3) && "mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a", mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a) && "mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208", mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208) && "mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa", mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa) && "mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216", mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216) && "mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d", mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d) && "mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___next__", mod_consts.const_str_plain___next__);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___next__) && "mod_consts.const_str_plain___next__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e", mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e) && "mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_position_tuple", mod_consts.const_tuple_str_plain_im_str_plain_position_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_position_tuple) && "mod_consts.const_tuple_str_plain_im_str_plain_position_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2", mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2) && "mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_all_frames", mod_consts.const_str_plain_all_frames);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_all_frames) && "mod_consts.const_str_plain_all_frames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0", mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0) && "mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af", mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af) && "mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple", mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple) && "mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_PIL$ImageSequence$Iterator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageSequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageSequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageSequence->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Iterator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Iterator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageSequence$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageSequence->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageSequence->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageSequence->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_762254902dd44eba8238549c4d5138bb;
static PyCodeObject *code_objects_9ea50d338019f53f0a1b7ef212068114;
static PyCodeObject *code_objects_8a1b1784b02ff4e22ee05682381ddfd6;
static PyCodeObject *code_objects_a1ad826175efc52adc1d22d248a6728d;
static PyCodeObject *code_objects_0b8c993d1b571cefd21d705439322712;
static PyCodeObject *code_objects_1c34ca587e8d3e84888d20e947599668;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f2eb2749f7ae545c91de5e2ce634eda0); CHECK_OBJECT(module_filename_obj);
code_objects_762254902dd44eba8238549c4d5138bb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af, mod_consts.const_str_digest_a885e51016ff4c58cfc055e628ff06af, NULL, NULL, 0, 0, 0);
code_objects_9ea50d338019f53f0a1b7ef212068114 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getitem__, mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208, mod_consts.const_tuple_str_plain_self_str_plain_ix_str_plain_e_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_8a1b1784b02ff4e22ee05682381ddfd6 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_a1ad826175efc52adc1d22d248a6728d = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0b8c993d1b571cefd21d705439322712 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___next__, mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e, mod_consts.const_tuple_str_plain_self_str_plain_e_str_plain_msg_tuple, NULL, 1, 0, 0);
code_objects_1c34ca587e8d3e84888d20e947599668 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_all_frames, mod_consts.const_str_plain_all_frames, mod_consts.const_tuple_596c8e151879f027474a8a796c8d3a9d_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__2___getitem__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__4___next__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__5_all_frames(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageSequence$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageSequence$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageSequence$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageSequence$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageSequence$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageSequence$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageSequence$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8a1b1784b02ff4e22ee05682381ddfd6, module_PIL$ImageSequence, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageSequence$$$function__1___init__->m_type_description == NULL);
frame_frame_PIL$ImageSequence$$$function__1___init__ = cache_frame_frame_PIL$ImageSequence$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageSequence$$$function__1___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageSequence$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_seek);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3cb1b4ccfe4b7d388e128f8521820403;
frame_frame_PIL$ImageSequence$$$function__1___init__->m_frame.f_lineno = 41;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 41;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_im);
tmp_ass_attr_value_1 = par_im;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_im, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = mod_consts.const_str_plain__min_frame;
tmp_default_value_1 = const_int_0;
tmp_ass_attr_value_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_position, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageSequence$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageSequence$$$function__1___init__,
    type_description_1,
    par_self,
    par_im,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageSequence$$$function__1___init__ == cache_frame_frame_PIL$ImageSequence$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageSequence$$$function__1___init__);
    cache_frame_frame_PIL$ImageSequence$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageSequence$$$function__1___init__);

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
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_im);
Py_DECREF(par_im);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageSequence$$$function__2___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ix = python_pars[1];
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageSequence$$$function__2___getitem__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9ea50d338019f53f0a1b7ef212068114, module_PIL$ImageSequence, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_type_description == NULL);
frame_frame_PIL$ImageSequence$$$function__2___getitem__ = cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageSequence$$$function__2___getitem__);
assert(Py_REFCNT(frame_frame_PIL$ImageSequence$$$function__2___getitem__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooN";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_ix);
tmp_args_element_value_1 = par_ix;
frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_frame.f_lineno = 47;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_seek, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooN";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__2___getitem__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__2___getitem__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_EOFError;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_1;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38;
frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_frame.f_lineno = 51;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_IndexError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 51;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooN";
goto try_except_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 46;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_frame)) {
        frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooN";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__2___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageSequence$$$function__2___getitem__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__2___getitem__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageSequence$$$function__2___getitem__,
    type_description_1,
    par_self,
    par_ix,
    var_e,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageSequence$$$function__2___getitem__ == cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__);
    cache_frame_frame_PIL$ImageSequence$$$function__2___getitem__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageSequence$$$function__2___getitem__);

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
CHECK_OBJECT(par_ix);
Py_DECREF(par_ix);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ix);
Py_DECREF(par_ix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageSequence$$$function__3___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_PIL$ImageSequence$$$function__4___next__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_e = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageSequence$$$function__4___next__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageSequence$$$function__4___next__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageSequence$$$function__4___next__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageSequence$$$function__4___next__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageSequence$$$function__4___next__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageSequence$$$function__4___next__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0b8c993d1b571cefd21d705439322712, module_PIL$ImageSequence, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageSequence$$$function__4___next__->m_type_description == NULL);
frame_frame_PIL$ImageSequence$$$function__4___next__ = cache_frame_frame_PIL$ImageSequence$$$function__4___next__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageSequence$$$function__4___next__);
assert(Py_REFCNT(frame_frame_PIL$ImageSequence$$$function__4___next__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_position);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 58;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
frame_frame_PIL$ImageSequence$$$function__4___next__->m_frame.f_lineno = 58;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_position);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_position, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooN";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_im);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooN";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__4___next__, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__4___next__, exception_keeper_lineno_2);
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
tmp_cmp_expr_right_1 = PyExc_EOFError;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_3;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d201917a91bbb0ae7caf133e339aff38;
frame_frame_PIL$ImageSequence$$$function__4___next__->m_frame.f_lineno = 63;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_StopIteration, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 63;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooN";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 57;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageSequence$$$function__4___next__->m_frame)) {
        frame_frame_PIL$ImageSequence$$$function__4___next__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooN";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__4___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageSequence$$$function__4___next__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__4___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageSequence$$$function__4___next__,
    type_description_1,
    par_self,
    var_e,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageSequence$$$function__4___next__ == cache_frame_frame_PIL$ImageSequence$$$function__4___next__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageSequence$$$function__4___next__);
    cache_frame_frame_PIL$ImageSequence$$$function__4___next__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageSequence$$$function__4___next__);

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


static PyObject *impl_PIL$ImageSequence$$$function__5_all_frames(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *var_ims = NULL;
PyObject *var_imSequence = NULL;
PyObject *var_current = NULL;
PyObject *outline_0_var_im_frame = NULL;
PyObject *outline_1_var_im = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageSequence$$$function__5_all_frames;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames = MAKE_FUNCTION_FRAME(tstate, code_objects_1c34ca587e8d3e84888d20e947599668, module_PIL$ImageSequence, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_type_description == NULL);
frame_frame_PIL$ImageSequence$$$function__5_all_frames = cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageSequence$$$function__5_all_frames);
assert(Py_REFCNT(frame_frame_PIL$ImageSequence$$$function__5_all_frames) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_im);
tmp_isinstance_inst_1 = par_im;
tmp_isinstance_cls_1 = (PyObject *)&PyList_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_im);
tmp_list_element_1 = par_im;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
{
    PyObject *old = par_im;
    assert(old != NULL);
    par_im = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_ims;
    var_ims = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_im);
tmp_iter_arg_1 = par_im;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 82;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_imSequence;
    var_imSequence = tmp_assign_source_5;
    Py_INCREF(var_imSequence);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_imSequence);
tmp_called_instance_1 = var_imSequence;
frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame.f_lineno = 83;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_current;
    var_current = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_ims;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageSequence$Iterator(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Iterator);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_imSequence);
tmp_args_element_value_1 = var_imSequence;
frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame.f_lineno = 85;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 85;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_im_frame;
    outline_0_var_im_frame = tmp_assign_source_11;
    Py_INCREF(outline_0_var_im_frame);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_im_frame);
tmp_expression_value_1 = outline_0_var_im_frame;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame.f_lineno = 85;
tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iadd_expr_right_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iadd_expr_right_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_im_frame);
outline_0_var_im_frame = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_im_frame);
outline_0_var_im_frame = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 85;
goto try_except_handler_2;
outline_result_1:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_iadd_expr_left_1;
var_ims = tmp_assign_source_7;

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_imSequence);
tmp_called_instance_2 = var_imSequence;
CHECK_OBJECT(var_current);
tmp_args_element_value_2 = var_current;
frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame.f_lineno = 87;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_seek, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_func);
tmp_truth_name_1 = CHECK_IF_TRUE(par_func);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
if (var_ims == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_iter_arg_3 = var_ims;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_listcomp_2__$0;
    tmp_listcomp_2__$0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_2__contraction;
    tmp_listcomp_2__contraction = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_3 = tmp_listcomp_2__$0;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 88;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_15 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_im;
    outline_1_var_im = tmp_assign_source_15;
    Py_INCREF(outline_1_var_im);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
if (par_func == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}

tmp_called_value_3 = par_func;
CHECK_OBJECT(outline_1_var_im);
tmp_args_element_value_3 = outline_1_var_im;
frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame.f_lineno = 88;
tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_return_value = tmp_listcomp_2__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_1_var_im);
outline_1_var_im = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_im);
outline_1_var_im = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 88;
goto frame_exception_exit_1;
outline_result_2:;
goto condexpr_end_1;
condexpr_false_1:;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_ims;
Py_INCREF(tmp_return_value);
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence$$$function__5_all_frames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageSequence$$$function__5_all_frames->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence$$$function__5_all_frames, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageSequence$$$function__5_all_frames,
    type_description_1,
    par_im,
    par_func,
    var_ims,
    var_imSequence,
    var_current
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageSequence$$$function__5_all_frames == cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames);
    cache_frame_frame_PIL$ImageSequence$$$function__5_all_frames = NULL;
}

assertFrameObject(frame_frame_PIL$ImageSequence$$$function__5_all_frames);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_im);
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
par_im = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_imSequence);
var_imSequence = NULL;
Py_XDECREF(var_current);
var_current = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_im);
par_im = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_imSequence);
var_imSequence = NULL;
Py_XDECREF(var_current);
var_current = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageSequence$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bad2a30774b7d8d049b9dcf4fcf2bbe3,
#endif
        code_objects_8a1b1784b02ff4e22ee05682381ddfd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageSequence,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__2___getitem__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageSequence$$$function__2___getitem__,
        mod_consts.const_str_plain___getitem__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47fc739cd0e822fac5b4ee6de271e208,
#endif
        code_objects_9ea50d338019f53f0a1b7ef212068114,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageSequence,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__3___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageSequence$$$function__3___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b966d7d88e5fbf446a7658cc2f969216,
#endif
        code_objects_a1ad826175efc52adc1d22d248a6728d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageSequence,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__4___next__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageSequence$$$function__4___next__,
        mod_consts.const_str_plain___next__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e43c65991ffc06c9073a4148287bde4e,
#endif
        code_objects_0b8c993d1b571cefd21d705439322712,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageSequence,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageSequence$$$function__5_all_frames(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageSequence$$$function__5_all_frames,
        mod_consts.const_str_plain_all_frames,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1c34ca587e8d3e84888d20e947599668,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageSequence,
        mod_consts.const_str_digest_06d4449398947512f245f9bcb0b75059,
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

static function_impl_code const function_table_PIL$ImageSequence[] = {
impl_PIL$ImageSequence$$$function__1___init__,
impl_PIL$ImageSequence$$$function__2___getitem__,
impl_PIL$ImageSequence$$$function__3___iter__,
impl_PIL$ImageSequence$$$function__4___next__,
impl_PIL$ImageSequence$$$function__5_all_frames,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageSequence);
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
        module_PIL$ImageSequence,
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
        function_table_PIL$ImageSequence,
        sizeof(function_table_PIL$ImageSequence) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageSequence";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageSequence(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageSequence");

    // Store the module for future use.
    module_PIL$ImageSequence = module;

    moduledict_PIL$ImageSequence = MODULE_DICT(module_PIL$ImageSequence);

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
        PRINT_STRING("PIL$ImageSequence: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageSequence: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageSequence: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageSequence" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageSequence\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageSequence,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageSequence,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageSequence,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageSequence,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageSequence,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageSequence);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageSequence);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageSequence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$ImageSequence$$$class__1_Iterator_26 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageSequence = MAKE_MODULE_FRAME(code_objects_762254902dd44eba8238549c4d5138bb, module_PIL$ImageSequence);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageSequence);
assert(Py_REFCNT(frame_frame_PIL$ImageSequence) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageSequence$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageSequence$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageSequence;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageSequence->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageSequence,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Image);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ImageSequence$$$class__1_Iterator_26 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_4ea8621d6fee43b8d49d661b3e1707f2;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_4142f27496789f33ba7a6e78b5942254;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Iterator;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_26;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageSequence$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_90f76f3934a9b26ef4c7e58dc3ac7d6a);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageSequence$$$function__2___getitem__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, mod_consts.const_str_plain___getitem__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8c411aaf975766eb2524b9981a081ffa);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageSequence$$$function__3___iter__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageSequence$$$function__4___next__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, mod_consts.const_str_plain___next__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_im_str_plain_position_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageSequence$$$class__1_Iterator_26, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_2;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_2 = mod_consts.const_str_plain_Iterator;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_PIL$ImageSequence$$$class__1_Iterator_26;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_2, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_3;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_10 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_10);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_PIL$ImageSequence$$$class__1_Iterator_26);
locals_PIL$ImageSequence$$$class__1_Iterator_26 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageSequence$$$class__1_Iterator_26);
locals_PIL$ImageSequence$$$class__1_Iterator_26 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 26;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_10);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageSequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageSequence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageSequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageSequence);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_83e0721c9585357a106383ec06ae3ce2);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_12 = MAKE_FUNCTION_PIL$ImageSequence$$$function__5_all_frames(tstate, tmp_defaults_1, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)mod_consts.const_str_plain_all_frames, tmp_assign_source_12);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageSequence", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageSequence" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageSequence);
    return module_PIL$ImageSequence;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageSequence, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageSequence", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
