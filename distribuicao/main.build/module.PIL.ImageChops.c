/* Generated code for Python module 'PIL$ImageChops'
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



/* The "module_PIL$ImageChops" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageChops;
PyDictObject *moduledict_PIL$ImageChops;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Image;
PyObject *const_str_plain_new;
PyObject *const_str_plain_L;
PyObject *const_str_plain_size;
PyObject *const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_3e0519114973f2ac39322526e664803d;
PyObject *const_str_plain_load;
PyObject *const_str_plain__new;
PyObject *const_str_plain_im;
PyObject *const_str_plain_chop_invert;
PyObject *const_str_digest_881e5269498e4c48826b100a009830eb;
PyObject *const_str_plain_chop_lighter;
PyObject *const_str_digest_d56bce90dd288dd72d96a3c50adf519f;
PyObject *const_str_plain_chop_darker;
PyObject *const_str_digest_33bc49b10e5e621bd5ee606c168eaabc;
PyObject *const_str_plain_chop_difference;
PyObject *const_str_digest_97a904b9dacb992e62f6ca8bf1f10185;
PyObject *const_str_plain_chop_multiply;
PyObject *const_str_digest_69f8f745c7dc0370132456e536ffa2a7;
PyObject *const_str_plain_chop_screen;
PyObject *const_str_digest_5c400ed0aee23cadefe309fe907b7e68;
PyObject *const_str_plain_chop_soft_light;
PyObject *const_str_digest_b32ddab8e4f5f416741cf12d065e251a;
PyObject *const_str_plain_chop_hard_light;
PyObject *const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6;
PyObject *const_str_plain_chop_overlay;
PyObject *const_str_digest_321f227790f71fe728bb95307e9f4d0e;
PyObject *const_str_plain_chop_add;
PyObject *const_str_digest_3dbb099508b211687da619db422010c0;
PyObject *const_str_plain_chop_subtract;
PyObject *const_str_digest_fdedc00709582431734ea0c1ffddc2ec;
PyObject *const_str_plain_chop_add_modulo;
PyObject *const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf;
PyObject *const_str_plain_chop_subtract_modulo;
PyObject *const_str_digest_8d979cda5f860b71742c27e05b3efc83;
PyObject *const_str_plain_chop_and;
PyObject *const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea;
PyObject *const_str_plain_chop_or;
PyObject *const_str_digest_f684c1aead6eef784e5e13eb6e3363ee;
PyObject *const_str_plain_chop_xor;
PyObject *const_str_digest_e76cd5445bf2928483aeb2eb6f888a45;
PyObject *const_str_plain_blend;
PyObject *const_str_digest_055d58bb853926f94ba6b3cec169d02e;
PyObject *const_str_plain_composite;
PyObject *const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3;
PyObject *const_str_plain_offset;
PyObject *const_str_digest_2b67170fc812a1103619b7c9026aaf1c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_dict_3f3d0b0fc718a47be9da2e0d93143ba3;
PyObject *const_str_plain_constant;
PyObject *const_dict_66ab2f018d54b7caf34e75b75d9aea3b;
PyObject *const_str_plain_duplicate;
PyObject *const_str_plain_invert;
PyObject *const_dict_096e6a9a810b9776dfb109a22888611e;
PyObject *const_str_plain_lighter;
PyObject *const_str_plain_darker;
PyObject *const_str_plain_difference;
PyObject *const_str_plain_multiply;
PyObject *const_str_plain_screen;
PyObject *const_str_plain_soft_light;
PyObject *const_str_plain_hard_light;
PyObject *const_str_plain_overlay;
PyObject *const_tuple_float_1_0_int_0_tuple;
PyObject *const_dict_a421e85750d67764f43ce534c5291b2c;
PyObject *const_str_plain_add;
PyObject *const_str_plain_subtract;
PyObject *const_str_plain_add_modulo;
PyObject *const_str_plain_subtract_modulo;
PyObject *const_str_plain_logical_and;
PyObject *const_str_plain_logical_or;
PyObject *const_str_plain_logical_xor;
PyObject *const_dict_ceed0ab2923dec869112c7a2778e7a5a;
PyObject *const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_12e5949b4332bfaf7a8efde803df34a7;
PyObject *const_str_digest_6a926b0689d31da427d8fe0b29954f28;
PyObject *const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603;
PyObject *const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple;
PyObject *const_tuple_str_plain_image1_str_plain_image2_tuple;
PyObject *const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple;
PyObject *const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple;
PyObject *const_tuple_str_plain_image_str_plain_value_tuple;
PyObject *const_tuple_str_plain_image_tuple;
PyObject *const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[88];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageChops"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 88) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 88 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageChops"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91", mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d", mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new", mod_consts.const_str_plain__new);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_invert", mod_consts.const_str_plain_chop_invert);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_invert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb", mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_lighter", mod_consts.const_str_plain_chop_lighter);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_lighter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f", mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_darker", mod_consts.const_str_plain_chop_darker);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_darker);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc", mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_difference", mod_consts.const_str_plain_chop_difference);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_difference);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185", mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_multiply", mod_consts.const_str_plain_chop_multiply);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_multiply);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7", mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_screen", mod_consts.const_str_plain_chop_screen);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_screen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68", mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_soft_light", mod_consts.const_str_plain_chop_soft_light);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_soft_light);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a", mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_hard_light", mod_consts.const_str_plain_chop_hard_light);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_hard_light);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6", mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_overlay", mod_consts.const_str_plain_chop_overlay);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_overlay);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e", mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_add", mod_consts.const_str_plain_chop_add);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3dbb099508b211687da619db422010c0", mod_consts.const_str_digest_3dbb099508b211687da619db422010c0);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dbb099508b211687da619db422010c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_subtract", mod_consts.const_str_plain_chop_subtract);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_subtract);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec", mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_add_modulo", mod_consts.const_str_plain_chop_add_modulo);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_add_modulo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf", mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_subtract_modulo", mod_consts.const_str_plain_chop_subtract_modulo);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_subtract_modulo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83", mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_and", mod_consts.const_str_plain_chop_and);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_and);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea", mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_or", mod_consts.const_str_plain_chop_or);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_or);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee", mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_xor", mod_consts.const_str_plain_chop_xor);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_chop_xor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45", mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blend", mod_consts.const_str_plain_blend);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_blend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e", mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_composite", mod_consts.const_str_plain_composite);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_composite);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3", mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c", mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3", mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_constant);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b", mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duplicate", mod_consts.const_str_plain_duplicate);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_duplicate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e", mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lighter", mod_consts.const_str_plain_lighter);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_lighter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_darker", mod_consts.const_str_plain_darker);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_darker);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_difference", mod_consts.const_str_plain_difference);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_difference);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiply", mod_consts.const_str_plain_multiply);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiply);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_screen", mod_consts.const_str_plain_screen);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_soft_light", mod_consts.const_str_plain_soft_light);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_soft_light);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hard_light", mod_consts.const_str_plain_hard_light);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_hard_light);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overlay", mod_consts.const_str_plain_overlay);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_overlay);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_1_0_int_0_tuple", mod_consts.const_tuple_float_1_0_int_0_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_float_1_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c", mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subtract", mod_consts.const_str_plain_subtract);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_modulo", mod_consts.const_str_plain_add_modulo);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_modulo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subtract_modulo", mod_consts.const_str_plain_subtract_modulo);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_subtract_modulo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_and", mod_consts.const_str_plain_logical_and);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_or", mod_consts.const_str_plain_logical_or);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_or);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_xor", mod_consts.const_str_plain_logical_xor);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_logical_xor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a", mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5", mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7", mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28", mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603", mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple", mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_value_tuple", mod_consts.const_tuple_str_plain_image_str_plain_value_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_value_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple", mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple);
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
void checkModuleConstants_PIL$ImageChops(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91", mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91) && "mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d", mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d) && "mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__new", mod_consts.const_str_plain__new);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__new) && "mod_consts.const_str_plain__new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_invert", mod_consts.const_str_plain_chop_invert);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_invert) && "mod_consts.const_str_plain_chop_invert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb", mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb) && "mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_lighter", mod_consts.const_str_plain_chop_lighter);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_lighter) && "mod_consts.const_str_plain_chop_lighter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f", mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f) && "mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_darker", mod_consts.const_str_plain_chop_darker);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_darker) && "mod_consts.const_str_plain_chop_darker");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc", mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc) && "mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_difference", mod_consts.const_str_plain_chop_difference);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_difference) && "mod_consts.const_str_plain_chop_difference");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185", mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185) && "mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_multiply", mod_consts.const_str_plain_chop_multiply);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_multiply) && "mod_consts.const_str_plain_chop_multiply");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7", mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7) && "mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_screen", mod_consts.const_str_plain_chop_screen);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_screen) && "mod_consts.const_str_plain_chop_screen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68", mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68) && "mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_soft_light", mod_consts.const_str_plain_chop_soft_light);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_soft_light) && "mod_consts.const_str_plain_chop_soft_light");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a", mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a) && "mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_hard_light", mod_consts.const_str_plain_chop_hard_light);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_hard_light) && "mod_consts.const_str_plain_chop_hard_light");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6", mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6) && "mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_overlay", mod_consts.const_str_plain_chop_overlay);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_overlay) && "mod_consts.const_str_plain_chop_overlay");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e", mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e) && "mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_add", mod_consts.const_str_plain_chop_add);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_add) && "mod_consts.const_str_plain_chop_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3dbb099508b211687da619db422010c0", mod_consts.const_str_digest_3dbb099508b211687da619db422010c0);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dbb099508b211687da619db422010c0) && "mod_consts.const_str_digest_3dbb099508b211687da619db422010c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_subtract", mod_consts.const_str_plain_chop_subtract);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_subtract) && "mod_consts.const_str_plain_chop_subtract");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec", mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec) && "mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_add_modulo", mod_consts.const_str_plain_chop_add_modulo);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_add_modulo) && "mod_consts.const_str_plain_chop_add_modulo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf", mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf) && "mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_subtract_modulo", mod_consts.const_str_plain_chop_subtract_modulo);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_subtract_modulo) && "mod_consts.const_str_plain_chop_subtract_modulo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83", mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83) && "mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_and", mod_consts.const_str_plain_chop_and);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_and) && "mod_consts.const_str_plain_chop_and");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea", mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea) && "mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_or", mod_consts.const_str_plain_chop_or);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_or) && "mod_consts.const_str_plain_chop_or");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee", mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee) && "mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chop_xor", mod_consts.const_str_plain_chop_xor);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_chop_xor) && "mod_consts.const_str_plain_chop_xor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45", mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45) && "mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blend", mod_consts.const_str_plain_blend);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_blend) && "mod_consts.const_str_plain_blend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e", mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e) && "mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_composite", mod_consts.const_str_plain_composite);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_composite) && "mod_consts.const_str_plain_composite");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3", mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3) && "mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset) && "mod_consts.const_str_plain_offset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c", mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c) && "mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3", mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3) && "mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_constant) && "mod_consts.const_str_plain_constant");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b", mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b) && "mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duplicate", mod_consts.const_str_plain_duplicate);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_duplicate) && "mod_consts.const_str_plain_duplicate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert) && "mod_consts.const_str_plain_invert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e", mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e) && "mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lighter", mod_consts.const_str_plain_lighter);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_lighter) && "mod_consts.const_str_plain_lighter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_darker", mod_consts.const_str_plain_darker);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_darker) && "mod_consts.const_str_plain_darker");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_difference", mod_consts.const_str_plain_difference);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_difference) && "mod_consts.const_str_plain_difference");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_multiply", mod_consts.const_str_plain_multiply);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiply) && "mod_consts.const_str_plain_multiply");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_screen", mod_consts.const_str_plain_screen);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen) && "mod_consts.const_str_plain_screen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_soft_light", mod_consts.const_str_plain_soft_light);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_soft_light) && "mod_consts.const_str_plain_soft_light");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hard_light", mod_consts.const_str_plain_hard_light);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_hard_light) && "mod_consts.const_str_plain_hard_light");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overlay", mod_consts.const_str_plain_overlay);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_overlay) && "mod_consts.const_str_plain_overlay");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_1_0_int_0_tuple", mod_consts.const_tuple_float_1_0_int_0_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_float_1_0_int_0_tuple) && "mod_consts.const_tuple_float_1_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c", mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c) && "mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subtract", mod_consts.const_str_plain_subtract);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract) && "mod_consts.const_str_plain_subtract");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add_modulo", mod_consts.const_str_plain_add_modulo);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_modulo) && "mod_consts.const_str_plain_add_modulo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subtract_modulo", mod_consts.const_str_plain_subtract_modulo);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_subtract_modulo) && "mod_consts.const_str_plain_subtract_modulo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_and", mod_consts.const_str_plain_logical_and);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_and) && "mod_consts.const_str_plain_logical_and");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_or", mod_consts.const_str_plain_logical_or);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_or) && "mod_consts.const_str_plain_logical_or");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logical_xor", mod_consts.const_str_plain_logical_xor);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_logical_xor) && "mod_consts.const_str_plain_logical_xor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a", mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a) && "mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5", mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5) && "mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7", mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7) && "mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28", mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28) && "mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603", mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603) && "mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple", mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple) && "mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple) && "mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple) && "mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple", mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple) && "mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_value_tuple", mod_consts.const_tuple_str_plain_image_str_plain_value_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_value_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_value_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple) && "mod_consts.const_tuple_str_plain_image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple", mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple");
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
static PyObject *module_var_accessor_PIL$ImageChops$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageChops->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageChops->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageChops->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Image);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Image, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Image);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Image, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageChops$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageChops->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageChops->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageChops->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4ccd8e390a404ce39e28bd3f3f14b411;
static PyCodeObject *code_objects_837db1707aec9c3a6ca8f9dcd1072644;
static PyCodeObject *code_objects_1d715b9d3ff9b08c43d8c04ce3d3b7a0;
static PyCodeObject *code_objects_92bb0d2972c82b994fe1847c85a4da25;
static PyCodeObject *code_objects_e721375be3996a400c72a3e69fe2569b;
static PyCodeObject *code_objects_b19afd8d3d815e450938e3296951e59a;
static PyCodeObject *code_objects_f8c1d325396a4d94670c5025e88999bd;
static PyCodeObject *code_objects_f08e16cf67c92b365b2213b43209d9aa;
static PyCodeObject *code_objects_729018b48323139552115163d8bc2988;
static PyCodeObject *code_objects_9c0e6f13bc98a34ac0e8a2a8a0e8acee;
static PyCodeObject *code_objects_2ec686d42c6540d2d028efc4a72df388;
static PyCodeObject *code_objects_ee56408ca9c550d3e57fac0f4aafb787;
static PyCodeObject *code_objects_dcd7793d4584a2a1befe0913a3cfa1ae;
static PyCodeObject *code_objects_88262b0a0037265daa8648a949aa9418;
static PyCodeObject *code_objects_7c06f116245bdb1f674a7c6439fccc3a;
static PyCodeObject *code_objects_5754eb2ea9c08b0984c58a652b5f7c0b;
static PyCodeObject *code_objects_72a68c01b3b744d9e33b91ff6318689d;
static PyCodeObject *code_objects_9a7b0dedc7a378605a93582cc717f20f;
static PyCodeObject *code_objects_342efbc514acf0c01ac21d34fda10112;
static PyCodeObject *code_objects_c6d7c2f79d101194139307bfabb0212e;
static PyCodeObject *code_objects_bf1ce57a1414859b04836403f0d944d6;
static PyCodeObject *code_objects_99e0011482b04ecd56b8f7b68484d559;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6a926b0689d31da427d8fe0b29954f28); CHECK_OBJECT(module_filename_obj);
code_objects_4ccd8e390a404ce39e28bd3f3f14b411 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603, mod_consts.const_str_digest_c4114e5a91c7c6fb76bf628af1bb6603, NULL, NULL, 0, 0, 0);
code_objects_837db1707aec9c3a6ca8f9dcd1072644 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add, mod_consts.const_str_plain_add, mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, NULL, 4, 0, 0);
code_objects_1d715b9d3ff9b08c43d8c04ce3d3b7a0 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_add_modulo, mod_consts.const_str_plain_add_modulo, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_92bb0d2972c82b994fe1847c85a4da25 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_blend, mod_consts.const_str_plain_blend, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_alpha_tuple, NULL, 3, 0, 0);
code_objects_e721375be3996a400c72a3e69fe2569b = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_composite, mod_consts.const_str_plain_composite, mod_consts.const_tuple_str_plain_image1_str_plain_image2_str_plain_mask_tuple, NULL, 3, 0, 0);
code_objects_b19afd8d3d815e450938e3296951e59a = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_constant, mod_consts.const_str_plain_constant, mod_consts.const_tuple_str_plain_image_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_f8c1d325396a4d94670c5025e88999bd = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_darker, mod_consts.const_str_plain_darker, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_f08e16cf67c92b365b2213b43209d9aa = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_difference, mod_consts.const_str_plain_difference, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_729018b48323139552115163d8bc2988 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_duplicate, mod_consts.const_str_plain_duplicate, mod_consts.const_tuple_str_plain_image_tuple, NULL, 1, 0, 0);
code_objects_9c0e6f13bc98a34ac0e8a2a8a0e8acee = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_hard_light, mod_consts.const_str_plain_hard_light, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_2ec686d42c6540d2d028efc4a72df388 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_invert, mod_consts.const_str_plain_invert, mod_consts.const_tuple_str_plain_image_tuple, NULL, 1, 0, 0);
code_objects_ee56408ca9c550d3e57fac0f4aafb787 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_lighter, mod_consts.const_str_plain_lighter, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_dcd7793d4584a2a1befe0913a3cfa1ae = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_logical_and, mod_consts.const_str_plain_logical_and, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_88262b0a0037265daa8648a949aa9418 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_logical_or, mod_consts.const_str_plain_logical_or, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_7c06f116245bdb1f674a7c6439fccc3a = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_logical_xor, mod_consts.const_str_plain_logical_xor, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_5754eb2ea9c08b0984c58a652b5f7c0b = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_multiply, mod_consts.const_str_plain_multiply, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_72a68c01b3b744d9e33b91ff6318689d = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_offset, mod_consts.const_str_plain_offset, mod_consts.const_tuple_str_plain_image_str_plain_xoffset_str_plain_yoffset_tuple, NULL, 3, 0, 0);
code_objects_9a7b0dedc7a378605a93582cc717f20f = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_overlay, mod_consts.const_str_plain_overlay, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_342efbc514acf0c01ac21d34fda10112 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_screen, mod_consts.const_str_plain_screen, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_c6d7c2f79d101194139307bfabb0212e = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_soft_light, mod_consts.const_str_plain_soft_light, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
code_objects_bf1ce57a1414859b04836403f0d944d6 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_subtract, mod_consts.const_str_plain_subtract, mod_consts.const_tuple_0c6a3415d70b5aa1e1d80eb3983b6941_tuple, NULL, 4, 0, 0);
code_objects_99e0011482b04ecd56b8f7b68484d559 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_subtract_modulo, mod_consts.const_str_plain_subtract_modulo, mod_consts.const_tuple_str_plain_image1_str_plain_image2_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__10_hard_light(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__11_overlay(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__12_add(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__13_subtract(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__14_add_modulo(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__15_subtract_modulo(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__16_logical_and(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__17_logical_or(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__18_logical_xor(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__19_blend(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__1_constant(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__20_composite(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__21_offset(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__2_duplicate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__3_invert(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__4_lighter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__5_darker(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__6_difference(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__7_multiply(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__8_screen(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__9_soft_light(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageChops$$$function__1_constant(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__1_constant;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__1_constant = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__1_constant)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__1_constant);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__1_constant == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__1_constant = MAKE_FUNCTION_FRAME(tstate, code_objects_b19afd8d3d815e450938e3296951e59a, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__1_constant->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__1_constant = cache_frame_frame_PIL$ImageChops$$$function__1_constant;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__1_constant);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__1_constant) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_1 = module_var_accessor_PIL$ImageChops$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_L;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 29;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_PIL$ImageChops$$$function__1_constant->m_frame.f_lineno = 29;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__1_constant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__1_constant->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__1_constant, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__1_constant,
    type_description_1,
    par_image,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__1_constant == cache_frame_frame_PIL$ImageChops$$$function__1_constant) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__1_constant);
    cache_frame_frame_PIL$ImageChops$$$function__1_constant = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__1_constant);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__2_duplicate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__2_duplicate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__2_duplicate = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__2_duplicate)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__2_duplicate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__2_duplicate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__2_duplicate = MAKE_FUNCTION_FRAME(tstate, code_objects_729018b48323139552115163d8bc2988, module_PIL$ImageChops, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__2_duplicate->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__2_duplicate = cache_frame_frame_PIL$ImageChops$$$function__2_duplicate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__2_duplicate);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__2_duplicate) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__2_duplicate->m_frame.f_lineno = 38;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__2_duplicate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__2_duplicate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__2_duplicate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__2_duplicate,
    type_description_1,
    par_image
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__2_duplicate == cache_frame_frame_PIL$ImageChops$$$function__2_duplicate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__2_duplicate);
    cache_frame_frame_PIL$ImageChops$$$function__2_duplicate = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__2_duplicate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__3_invert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__3_invert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__3_invert = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__3_invert)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__3_invert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__3_invert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__3_invert = MAKE_FUNCTION_FRAME(tstate, code_objects_2ec686d42c6540d2d028efc4a72df388, module_PIL$ImageChops, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__3_invert->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__3_invert = cache_frame_frame_PIL$ImageChops$$$function__3_invert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__3_invert);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__3_invert) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageChops$$$function__3_invert->m_frame.f_lineno = 50;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__3_invert->m_frame.f_lineno = 51;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_chop_invert);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 51;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__3_invert->m_frame.f_lineno = 51;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__3_invert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__3_invert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__3_invert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__3_invert,
    type_description_1,
    par_image
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__3_invert == cache_frame_frame_PIL$ImageChops$$$function__3_invert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__3_invert);
    cache_frame_frame_PIL$ImageChops$$$function__3_invert = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__3_invert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__4_lighter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__4_lighter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__4_lighter = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__4_lighter)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__4_lighter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__4_lighter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__4_lighter = MAKE_FUNCTION_FRAME(tstate, code_objects_ee56408ca9c550d3e57fac0f4aafb787, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__4_lighter->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__4_lighter = cache_frame_frame_PIL$ImageChops$$$function__4_lighter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__4_lighter);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__4_lighter) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__4_lighter->m_frame.f_lineno = 64;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__4_lighter->m_frame.f_lineno = 65;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_lighter);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__4_lighter->m_frame.f_lineno = 66;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 66;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__4_lighter->m_frame.f_lineno = 66;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__4_lighter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__4_lighter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__4_lighter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__4_lighter,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__4_lighter == cache_frame_frame_PIL$ImageChops$$$function__4_lighter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__4_lighter);
    cache_frame_frame_PIL$ImageChops$$$function__4_lighter = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__4_lighter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__5_darker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__5_darker;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__5_darker = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__5_darker)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__5_darker);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__5_darker == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__5_darker = MAKE_FUNCTION_FRAME(tstate, code_objects_f8c1d325396a4d94670c5025e88999bd, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__5_darker->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__5_darker = cache_frame_frame_PIL$ImageChops$$$function__5_darker;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__5_darker);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__5_darker) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__5_darker->m_frame.f_lineno = 79;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__5_darker->m_frame.f_lineno = 80;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_darker);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__5_darker->m_frame.f_lineno = 81;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__5_darker->m_frame.f_lineno = 81;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__5_darker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__5_darker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__5_darker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__5_darker,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__5_darker == cache_frame_frame_PIL$ImageChops$$$function__5_darker) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__5_darker);
    cache_frame_frame_PIL$ImageChops$$$function__5_darker = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__5_darker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__6_difference(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__6_difference;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__6_difference = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__6_difference)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__6_difference);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__6_difference == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__6_difference = MAKE_FUNCTION_FRAME(tstate, code_objects_f08e16cf67c92b365b2213b43209d9aa, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__6_difference->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__6_difference = cache_frame_frame_PIL$ImageChops$$$function__6_difference;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__6_difference);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__6_difference) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__6_difference->m_frame.f_lineno = 94;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__6_difference->m_frame.f_lineno = 95;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_difference);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__6_difference->m_frame.f_lineno = 96;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__6_difference->m_frame.f_lineno = 96;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__6_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__6_difference->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__6_difference, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__6_difference,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__6_difference == cache_frame_frame_PIL$ImageChops$$$function__6_difference) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__6_difference);
    cache_frame_frame_PIL$ImageChops$$$function__6_difference = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__6_difference);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__7_multiply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__7_multiply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__7_multiply = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__7_multiply)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__7_multiply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__7_multiply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__7_multiply = MAKE_FUNCTION_FRAME(tstate, code_objects_5754eb2ea9c08b0984c58a652b5f7c0b, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__7_multiply->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__7_multiply = cache_frame_frame_PIL$ImageChops$$$function__7_multiply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__7_multiply);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__7_multiply) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__7_multiply->m_frame.f_lineno = 111;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__7_multiply->m_frame.f_lineno = 112;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_multiply);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__7_multiply->m_frame.f_lineno = 113;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__7_multiply->m_frame.f_lineno = 113;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__7_multiply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__7_multiply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__7_multiply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__7_multiply,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__7_multiply == cache_frame_frame_PIL$ImageChops$$$function__7_multiply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__7_multiply);
    cache_frame_frame_PIL$ImageChops$$$function__7_multiply = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__7_multiply);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__8_screen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__8_screen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__8_screen = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__8_screen)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__8_screen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__8_screen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__8_screen = MAKE_FUNCTION_FRAME(tstate, code_objects_342efbc514acf0c01ac21d34fda10112, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__8_screen->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__8_screen = cache_frame_frame_PIL$ImageChops$$$function__8_screen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__8_screen);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__8_screen) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__8_screen->m_frame.f_lineno = 125;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__8_screen->m_frame.f_lineno = 126;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_screen);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__8_screen->m_frame.f_lineno = 127;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__8_screen->m_frame.f_lineno = 127;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__8_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__8_screen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__8_screen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__8_screen,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__8_screen == cache_frame_frame_PIL$ImageChops$$$function__8_screen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__8_screen);
    cache_frame_frame_PIL$ImageChops$$$function__8_screen = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__8_screen);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__9_soft_light(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__9_soft_light;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__9_soft_light = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__9_soft_light)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__9_soft_light);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__9_soft_light == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__9_soft_light = MAKE_FUNCTION_FRAME(tstate, code_objects_c6d7c2f79d101194139307bfabb0212e, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__9_soft_light->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__9_soft_light = cache_frame_frame_PIL$ImageChops$$$function__9_soft_light;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__9_soft_light);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__9_soft_light) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__9_soft_light->m_frame.f_lineno = 137;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__9_soft_light->m_frame.f_lineno = 138;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_soft_light);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__9_soft_light->m_frame.f_lineno = 139;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__9_soft_light->m_frame.f_lineno = 139;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__9_soft_light, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__9_soft_light->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__9_soft_light, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__9_soft_light,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__9_soft_light == cache_frame_frame_PIL$ImageChops$$$function__9_soft_light) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__9_soft_light);
    cache_frame_frame_PIL$ImageChops$$$function__9_soft_light = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__9_soft_light);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__10_hard_light(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__10_hard_light;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__10_hard_light = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__10_hard_light)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__10_hard_light);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__10_hard_light == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__10_hard_light = MAKE_FUNCTION_FRAME(tstate, code_objects_9c0e6f13bc98a34ac0e8a2a8a0e8acee, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__10_hard_light->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__10_hard_light = cache_frame_frame_PIL$ImageChops$$$function__10_hard_light;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__10_hard_light);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__10_hard_light) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__10_hard_light->m_frame.f_lineno = 149;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__10_hard_light->m_frame.f_lineno = 150;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_hard_light);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__10_hard_light->m_frame.f_lineno = 151;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__10_hard_light->m_frame.f_lineno = 151;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__10_hard_light, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__10_hard_light->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__10_hard_light, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__10_hard_light,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__10_hard_light == cache_frame_frame_PIL$ImageChops$$$function__10_hard_light) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__10_hard_light);
    cache_frame_frame_PIL$ImageChops$$$function__10_hard_light = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__10_hard_light);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__11_overlay(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__11_overlay;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__11_overlay = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__11_overlay)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__11_overlay);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__11_overlay == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__11_overlay = MAKE_FUNCTION_FRAME(tstate, code_objects_9a7b0dedc7a378605a93582cc717f20f, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__11_overlay->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__11_overlay = cache_frame_frame_PIL$ImageChops$$$function__11_overlay;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__11_overlay);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__11_overlay) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__11_overlay->m_frame.f_lineno = 161;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__11_overlay->m_frame.f_lineno = 162;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_overlay);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__11_overlay->m_frame.f_lineno = 163;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__11_overlay->m_frame.f_lineno = 163;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__11_overlay, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__11_overlay->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__11_overlay, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__11_overlay,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__11_overlay == cache_frame_frame_PIL$ImageChops$$$function__11_overlay) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__11_overlay);
    cache_frame_frame_PIL$ImageChops$$$function__11_overlay = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__11_overlay);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__12_add(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
PyObject *par_scale = python_pars[2];
PyObject *par_offset = python_pars[3];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__12_add;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__12_add = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__12_add)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__12_add);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__12_add == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__12_add = MAKE_FUNCTION_FRAME(tstate, code_objects_837db1707aec9c3a6ca8f9dcd1072644, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__12_add->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__12_add = cache_frame_frame_PIL$ImageChops$$$function__12_add;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__12_add);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__12_add) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__12_add->m_frame.f_lineno = 178;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__12_add->m_frame.f_lineno = 179;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_add);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scale);
tmp_args_element_value_3 = par_scale;
CHECK_OBJECT(par_offset);
tmp_args_element_value_4 = par_offset;
frame_frame_PIL$ImageChops$$$function__12_add->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__12_add->m_frame.f_lineno = 180;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__12_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__12_add->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__12_add, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__12_add,
    type_description_1,
    par_image1,
    par_image2,
    par_scale,
    par_offset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__12_add == cache_frame_frame_PIL$ImageChops$$$function__12_add) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__12_add);
    cache_frame_frame_PIL$ImageChops$$$function__12_add = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__12_add);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_scale);
Py_DECREF(par_scale);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_scale);
Py_DECREF(par_scale);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__13_subtract(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
PyObject *par_scale = python_pars[2];
PyObject *par_offset = python_pars[3];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__13_subtract;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__13_subtract = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__13_subtract)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__13_subtract);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__13_subtract == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__13_subtract = MAKE_FUNCTION_FRAME(tstate, code_objects_bf1ce57a1414859b04836403f0d944d6, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__13_subtract->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__13_subtract = cache_frame_frame_PIL$ImageChops$$$function__13_subtract;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__13_subtract);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__13_subtract) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__13_subtract->m_frame.f_lineno = 195;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__13_subtract->m_frame.f_lineno = 196;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 197;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_subtract);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 197;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 197;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_scale);
tmp_args_element_value_3 = par_scale;
CHECK_OBJECT(par_offset);
tmp_args_element_value_4 = par_offset;
frame_frame_PIL$ImageChops$$$function__13_subtract->m_frame.f_lineno = 197;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 197;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__13_subtract->m_frame.f_lineno = 197;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__13_subtract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__13_subtract->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__13_subtract, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__13_subtract,
    type_description_1,
    par_image1,
    par_image2,
    par_scale,
    par_offset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__13_subtract == cache_frame_frame_PIL$ImageChops$$$function__13_subtract) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__13_subtract);
    cache_frame_frame_PIL$ImageChops$$$function__13_subtract = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__13_subtract);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_scale);
Py_DECREF(par_scale);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_scale);
Py_DECREF(par_scale);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__14_add_modulo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__14_add_modulo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo = MAKE_FUNCTION_FRAME(tstate, code_objects_1d715b9d3ff9b08c43d8c04ce3d3b7a0, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__14_add_modulo = cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__14_add_modulo);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__14_add_modulo) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_frame.f_lineno = 208;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_frame.f_lineno = 209;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_add_modulo);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_frame.f_lineno = 210;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_frame.f_lineno = 210;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__14_add_modulo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__14_add_modulo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__14_add_modulo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__14_add_modulo,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__14_add_modulo == cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo);
    cache_frame_frame_PIL$ImageChops$$$function__14_add_modulo = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__14_add_modulo);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__15_subtract_modulo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__15_subtract_modulo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo = MAKE_FUNCTION_FRAME(tstate, code_objects_99e0011482b04ecd56b8f7b68484d559, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__15_subtract_modulo = cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__15_subtract_modulo);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__15_subtract_modulo) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_frame.f_lineno = 221;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_frame.f_lineno = 222;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_subtract_modulo);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_frame.f_lineno = 223;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_frame.f_lineno = 223;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__15_subtract_modulo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__15_subtract_modulo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__15_subtract_modulo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__15_subtract_modulo,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__15_subtract_modulo == cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo);
    cache_frame_frame_PIL$ImageChops$$$function__15_subtract_modulo = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__15_subtract_modulo);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__16_logical_and(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__16_logical_and;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__16_logical_and = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__16_logical_and)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__16_logical_and);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__16_logical_and == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__16_logical_and = MAKE_FUNCTION_FRAME(tstate, code_objects_dcd7793d4584a2a1befe0913a3cfa1ae, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__16_logical_and->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__16_logical_and = cache_frame_frame_PIL$ImageChops$$$function__16_logical_and;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__16_logical_and);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__16_logical_and) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__16_logical_and->m_frame.f_lineno = 239;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__16_logical_and->m_frame.f_lineno = 240;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_and);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__16_logical_and->m_frame.f_lineno = 241;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 241;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__16_logical_and->m_frame.f_lineno = 241;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__16_logical_and, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__16_logical_and->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__16_logical_and, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__16_logical_and,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__16_logical_and == cache_frame_frame_PIL$ImageChops$$$function__16_logical_and) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__16_logical_and);
    cache_frame_frame_PIL$ImageChops$$$function__16_logical_and = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__16_logical_and);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__17_logical_or(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__17_logical_or;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__17_logical_or = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__17_logical_or)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__17_logical_or);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__17_logical_or == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__17_logical_or = MAKE_FUNCTION_FRAME(tstate, code_objects_88262b0a0037265daa8648a949aa9418, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__17_logical_or->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__17_logical_or = cache_frame_frame_PIL$ImageChops$$$function__17_logical_or;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__17_logical_or);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__17_logical_or) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__17_logical_or->m_frame.f_lineno = 254;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__17_logical_or->m_frame.f_lineno = 255;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_or);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__17_logical_or->m_frame.f_lineno = 256;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 256;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__17_logical_or->m_frame.f_lineno = 256;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__17_logical_or, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__17_logical_or->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__17_logical_or, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__17_logical_or,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__17_logical_or == cache_frame_frame_PIL$ImageChops$$$function__17_logical_or) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__17_logical_or);
    cache_frame_frame_PIL$ImageChops$$$function__17_logical_or = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__17_logical_or);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__18_logical_xor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__18_logical_xor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor = MAKE_FUNCTION_FRAME(tstate, code_objects_7c06f116245bdb1f674a7c6439fccc3a, module_PIL$ImageChops, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__18_logical_xor = cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__18_logical_xor);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__18_logical_xor) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image1);
tmp_called_instance_1 = par_image1;
frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_frame.f_lineno = 269;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image2);
tmp_called_instance_2 = par_image2;
frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_frame.f_lineno = 270;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image1);
tmp_expression_value_1 = par_image1;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_expression_value_3 = par_image1;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_chop_xor);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image2);
tmp_expression_value_4 = par_image2;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_im);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_frame.f_lineno = 271;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 271;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_frame.f_lineno = 271;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__18_logical_xor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__18_logical_xor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__18_logical_xor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__18_logical_xor,
    type_description_1,
    par_image1,
    par_image2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__18_logical_xor == cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor);
    cache_frame_frame_PIL$ImageChops$$$function__18_logical_xor = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__18_logical_xor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__19_blend(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
PyObject *par_alpha = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__19_blend;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__19_blend = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__19_blend)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__19_blend);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__19_blend == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__19_blend = MAKE_FUNCTION_FRAME(tstate, code_objects_92bb0d2972c82b994fe1847c85a4da25, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__19_blend->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__19_blend = cache_frame_frame_PIL$ImageChops$$$function__19_blend;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__19_blend);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__19_blend) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_PIL$ImageChops$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_args_element_value_1 = par_image1;
CHECK_OBJECT(par_image2);
tmp_args_element_value_2 = par_image2;
CHECK_OBJECT(par_alpha);
tmp_args_element_value_3 = par_alpha;
frame_frame_PIL$ImageChops$$$function__19_blend->m_frame.f_lineno = 281;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_blend,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__19_blend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__19_blend->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__19_blend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__19_blend,
    type_description_1,
    par_image1,
    par_image2,
    par_alpha
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__19_blend == cache_frame_frame_PIL$ImageChops$$$function__19_blend) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__19_blend);
    cache_frame_frame_PIL$ImageChops$$$function__19_blend = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__19_blend);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_alpha);
Py_DECREF(par_alpha);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_alpha);
Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__20_composite(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image1 = python_pars[0];
PyObject *par_image2 = python_pars[1];
PyObject *par_mask = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__20_composite;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__20_composite = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__20_composite)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__20_composite);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__20_composite == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__20_composite = MAKE_FUNCTION_FRAME(tstate, code_objects_e721375be3996a400c72a3e69fe2569b, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__20_composite->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__20_composite = cache_frame_frame_PIL$ImageChops$$$function__20_composite;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__20_composite);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__20_composite) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_PIL$ImageChops$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image1);
tmp_args_element_value_1 = par_image1;
CHECK_OBJECT(par_image2);
tmp_args_element_value_2 = par_image2;
CHECK_OBJECT(par_mask);
tmp_args_element_value_3 = par_mask;
frame_frame_PIL$ImageChops$$$function__20_composite->m_frame.f_lineno = 293;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_composite,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__20_composite, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__20_composite->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__20_composite, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__20_composite,
    type_description_1,
    par_image1,
    par_image2,
    par_mask
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__20_composite == cache_frame_frame_PIL$ImageChops$$$function__20_composite) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__20_composite);
    cache_frame_frame_PIL$ImageChops$$$function__20_composite = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__20_composite);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image1);
Py_DECREF(par_image1);
CHECK_OBJECT(par_image2);
Py_DECREF(par_image2);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageChops$$$function__21_offset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_xoffset = python_pars[1];
PyObject *par_yoffset = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops$$$function__21_offset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageChops$$$function__21_offset = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_yoffset);
tmp_cmp_expr_left_1 = par_yoffset;
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
CHECK_OBJECT(par_xoffset);
tmp_assign_source_1 = par_xoffset;
{
    PyObject *old = par_yoffset;
    assert(old != NULL);
    par_yoffset = tmp_assign_source_1;
    Py_INCREF(par_yoffset);
    Py_DECREF(old);
}

}
branch_no_1:;
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageChops$$$function__21_offset)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageChops$$$function__21_offset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageChops$$$function__21_offset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageChops$$$function__21_offset = MAKE_FUNCTION_FRAME(tstate, code_objects_72a68c01b3b744d9e33b91ff6318689d, module_PIL$ImageChops, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageChops$$$function__21_offset->m_type_description == NULL);
frame_frame_PIL$ImageChops$$$function__21_offset = cache_frame_frame_PIL$ImageChops$$$function__21_offset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops$$$function__21_offset);
assert(Py_REFCNT(frame_frame_PIL$ImageChops$$$function__21_offset) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageChops$$$function__21_offset->m_frame.f_lineno = 310;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_xoffset);
tmp_args_element_value_2 = par_xoffset;
CHECK_OBJECT(par_yoffset);
tmp_args_element_value_3 = par_yoffset;
frame_frame_PIL$ImageChops$$$function__21_offset->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_offset,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageChops$$$function__21_offset->m_frame.f_lineno = 311;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops$$$function__21_offset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops$$$function__21_offset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops$$$function__21_offset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageChops$$$function__21_offset,
    type_description_1,
    par_image,
    par_xoffset,
    par_yoffset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageChops$$$function__21_offset == cache_frame_frame_PIL$ImageChops$$$function__21_offset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageChops$$$function__21_offset);
    cache_frame_frame_PIL$ImageChops$$$function__21_offset = NULL;
}

assertFrameObject(frame_frame_PIL$ImageChops$$$function__21_offset);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_yoffset);
CHECK_OBJECT(par_yoffset);
Py_DECREF(par_yoffset);
par_yoffset = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_yoffset);
CHECK_OBJECT(par_yoffset);
Py_DECREF(par_yoffset);
par_yoffset = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_xoffset);
Py_DECREF(par_xoffset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_xoffset);
Py_DECREF(par_xoffset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__10_hard_light(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__10_hard_light,
        mod_consts.const_str_plain_hard_light,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9c0e6f13bc98a34ac0e8a2a8a0e8acee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_31c173936d1bbfb5c0ec2cdb08d680f6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__11_overlay(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__11_overlay,
        mod_consts.const_str_plain_overlay,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9a7b0dedc7a378605a93582cc717f20f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_321f227790f71fe728bb95307e9f4d0e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__12_add(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__12_add,
        mod_consts.const_str_plain_add,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_837db1707aec9c3a6ca8f9dcd1072644,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_3dbb099508b211687da619db422010c0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__13_subtract(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__13_subtract,
        mod_consts.const_str_plain_subtract,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf1ce57a1414859b04836403f0d944d6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_fdedc00709582431734ea0c1ffddc2ec,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__14_add_modulo(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__14_add_modulo,
        mod_consts.const_str_plain_add_modulo,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1d715b9d3ff9b08c43d8c04ce3d3b7a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_07dc2389d37d4f3c34a5fc60150d5ecf,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__15_subtract_modulo(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__15_subtract_modulo,
        mod_consts.const_str_plain_subtract_modulo,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_99e0011482b04ecd56b8f7b68484d559,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_8d979cda5f860b71742c27e05b3efc83,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__16_logical_and(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__16_logical_and,
        mod_consts.const_str_plain_logical_and,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dcd7793d4584a2a1befe0913a3cfa1ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_d470fd3b2011ea88a3b6ac0d5cd9eaea,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__17_logical_or(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__17_logical_or,
        mod_consts.const_str_plain_logical_or,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_88262b0a0037265daa8648a949aa9418,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_f684c1aead6eef784e5e13eb6e3363ee,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__18_logical_xor(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__18_logical_xor,
        mod_consts.const_str_plain_logical_xor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7c06f116245bdb1f674a7c6439fccc3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_e76cd5445bf2928483aeb2eb6f888a45,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__19_blend(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__19_blend,
        mod_consts.const_str_plain_blend,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_92bb0d2972c82b994fe1847c85a4da25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_055d58bb853926f94ba6b3cec169d02e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__1_constant(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__1_constant,
        mod_consts.const_str_plain_constant,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b19afd8d3d815e450938e3296951e59a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_93f62a0c914eb6b09ed1ec3d5640bb91,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__20_composite(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__20_composite,
        mod_consts.const_str_plain_composite,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e721375be3996a400c72a3e69fe2569b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_0c3ec906cec1a00c2449f75cc4c89bd3,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__21_offset(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__21_offset,
        mod_consts.const_str_plain_offset,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_72a68c01b3b744d9e33b91ff6318689d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_2b67170fc812a1103619b7c9026aaf1c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__2_duplicate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__2_duplicate,
        mod_consts.const_str_plain_duplicate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_729018b48323139552115163d8bc2988,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_3e0519114973f2ac39322526e664803d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__3_invert(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__3_invert,
        mod_consts.const_str_plain_invert,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2ec686d42c6540d2d028efc4a72df388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_881e5269498e4c48826b100a009830eb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__4_lighter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__4_lighter,
        mod_consts.const_str_plain_lighter,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee56408ca9c550d3e57fac0f4aafb787,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_d56bce90dd288dd72d96a3c50adf519f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__5_darker(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__5_darker,
        mod_consts.const_str_plain_darker,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f8c1d325396a4d94670c5025e88999bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_33bc49b10e5e621bd5ee606c168eaabc,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__6_difference(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__6_difference,
        mod_consts.const_str_plain_difference,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f08e16cf67c92b365b2213b43209d9aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_97a904b9dacb992e62f6ca8bf1f10185,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__7_multiply(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__7_multiply,
        mod_consts.const_str_plain_multiply,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5754eb2ea9c08b0984c58a652b5f7c0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_69f8f745c7dc0370132456e536ffa2a7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__8_screen(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__8_screen,
        mod_consts.const_str_plain_screen,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_342efbc514acf0c01ac21d34fda10112,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_5c400ed0aee23cadefe309fe907b7e68,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageChops$$$function__9_soft_light(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageChops$$$function__9_soft_light,
        mod_consts.const_str_plain_soft_light,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c6d7c2f79d101194139307bfabb0212e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageChops,
        mod_consts.const_str_digest_b32ddab8e4f5f416741cf12d065e251a,
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

static function_impl_code const function_table_PIL$ImageChops[] = {
impl_PIL$ImageChops$$$function__1_constant,
impl_PIL$ImageChops$$$function__2_duplicate,
impl_PIL$ImageChops$$$function__3_invert,
impl_PIL$ImageChops$$$function__4_lighter,
impl_PIL$ImageChops$$$function__5_darker,
impl_PIL$ImageChops$$$function__6_difference,
impl_PIL$ImageChops$$$function__7_multiply,
impl_PIL$ImageChops$$$function__8_screen,
impl_PIL$ImageChops$$$function__9_soft_light,
impl_PIL$ImageChops$$$function__10_hard_light,
impl_PIL$ImageChops$$$function__11_overlay,
impl_PIL$ImageChops$$$function__12_add,
impl_PIL$ImageChops$$$function__13_subtract,
impl_PIL$ImageChops$$$function__14_add_modulo,
impl_PIL$ImageChops$$$function__15_subtract_modulo,
impl_PIL$ImageChops$$$function__16_logical_and,
impl_PIL$ImageChops$$$function__17_logical_or,
impl_PIL$ImageChops$$$function__18_logical_xor,
impl_PIL$ImageChops$$$function__19_blend,
impl_PIL$ImageChops$$$function__20_composite,
impl_PIL$ImageChops$$$function__21_offset,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageChops);
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
        module_PIL$ImageChops,
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
        function_table_PIL$ImageChops,
        sizeof(function_table_PIL$ImageChops) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageChops";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageChops(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageChops");

    // Store the module for future use.
    module_PIL$ImageChops = module;

    moduledict_PIL$ImageChops = MODULE_DICT(module_PIL$ImageChops);

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
        PRINT_STRING("PIL$ImageChops: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageChops: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageChops: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageChops" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageChops\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageChops,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageChops,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageChops,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageChops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageChops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageChops);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageChops);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_PIL$ImageChops;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageChops = MAKE_MODULE_FRAME(code_objects_4ccd8e390a404ce39e28bd3f3f14b411, module_PIL$ImageChops);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageChops);
assert(Py_REFCNT(frame_frame_PIL$ImageChops) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageChops$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageChops$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
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
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageChops;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageChops->m_frame.f_lineno = 20;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageChops,
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


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageChops, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageChops->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageChops, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageChops);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3f3d0b0fc718a47be9da2e0d93143ba3);

tmp_assign_source_7 = MAKE_FUNCTION_PIL$ImageChops$$$function__1_constant(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_constant, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_8 = MAKE_FUNCTION_PIL$ImageChops$$$function__2_duplicate(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_duplicate, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_9 = MAKE_FUNCTION_PIL$ImageChops$$$function__3_invert(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_invert, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_10 = MAKE_FUNCTION_PIL$ImageChops$$$function__4_lighter(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_lighter, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_11 = MAKE_FUNCTION_PIL$ImageChops$$$function__5_darker(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_darker, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_12 = MAKE_FUNCTION_PIL$ImageChops$$$function__6_difference(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_difference, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_13 = MAKE_FUNCTION_PIL$ImageChops$$$function__7_multiply(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_multiply, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageChops$$$function__8_screen(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_screen, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_15 = MAKE_FUNCTION_PIL$ImageChops$$$function__9_soft_light(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_soft_light, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_16 = MAKE_FUNCTION_PIL$ImageChops$$$function__10_hard_light(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_hard_light, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_17 = MAKE_FUNCTION_PIL$ImageChops$$$function__11_overlay(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_overlay, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_12;
tmp_defaults_1 = mod_consts.const_tuple_float_1_0_int_0_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_18 = MAKE_FUNCTION_PIL$ImageChops$$$function__12_add(tstate, tmp_defaults_1, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_add, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_13;
tmp_defaults_2 = mod_consts.const_tuple_float_1_0_int_0_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_a421e85750d67764f43ce534c5291b2c);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$ImageChops$$$function__13_subtract(tstate, tmp_defaults_2, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_subtract, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$ImageChops$$$function__14_add_modulo(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_add_modulo, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$ImageChops$$$function__15_subtract_modulo(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_subtract_modulo, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_22 = MAKE_FUNCTION_PIL$ImageChops$$$function__16_logical_and(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_logical_and, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageChops$$$function__17_logical_or(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_logical_or, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_096e6a9a810b9776dfb109a22888611e);

tmp_assign_source_24 = MAKE_FUNCTION_PIL$ImageChops$$$function__18_logical_xor(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_logical_xor, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_ceed0ab2923dec869112c7a2778e7a5a);

tmp_assign_source_25 = MAKE_FUNCTION_PIL$ImageChops$$$function__19_blend(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_blend, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_d22f608e5b99b5e425c5fe80e7e3a7e5);

tmp_assign_source_26 = MAKE_FUNCTION_PIL$ImageChops$$$function__20_composite(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_composite, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_21;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_12e5949b4332bfaf7a8efde803df34a7);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_27 = MAKE_FUNCTION_PIL$ImageChops$$$function__21_offset(tstate, tmp_defaults_3, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_PIL$ImageChops, (Nuitka_StringObject *)mod_consts.const_str_plain_offset, tmp_assign_source_27);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageChops", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageChops" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageChops);
    return module_PIL$ImageChops;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageChops, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageChops", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
