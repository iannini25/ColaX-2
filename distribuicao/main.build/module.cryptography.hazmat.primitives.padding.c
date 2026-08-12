/* Generated code for Python module 'cryptography$hazmat$primitives$padding'
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



/* The "module_cryptography$hazmat$primitives$padding" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$padding;
PyDictObject *moduledict_cryptography$hazmat$primitives$padding;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_pos_2040;
PyObject *const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a;
PyObject *const_int_pos_8;
PyObject *const_str_digest_8389571181597459a9e60985c9f0b488;
PyObject *const_str_plain__byte_padding_check;
PyObject *const_str_plain_block_size;
PyObject *const_str_plain_PKCS7PaddingContext;
PyObject *const_str_plain_PKCS7UnpaddingContext;
PyObject *const_str_plain_ANSIX923PaddingContext;
PyObject *const_str_plain_ANSIX923UnpaddingContext;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_cryptography;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_plain_utils;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_aa3fbde230457407f765c54829663d73_tuple;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_PaddingContext_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_8c688724922a589bac7915c01ba838d1;
PyObject *const_str_plain_PaddingContext;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_9cf6f2cbfd53f297b0838f300fdc173f;
PyObject *const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991;
PyObject *const_str_plain_update;
PyObject *const_str_digest_e8809a86847a89e582fb59fb40971a7a;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5;
PyObject *const_str_plain_finalize;
PyObject *const_str_digest_36c8e4ab5b69655a3a1267021d4f3593;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_5e60f8f3317b8caa3a38f436c6476390;
PyObject *const_str_plain_PKCS7;
PyObject *const_int_pos_40;
PyObject *const_dict_65486c9c5ce25dd95550668f81898a88;
PyObject *const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc;
PyObject *const_dict_d38aae84c49864e4fcba17ad6e17f144;
PyObject *const_str_plain_padder;
PyObject *const_str_digest_dcfe412922e160cc43acbf5b064189c0;
PyObject *const_str_plain_unpadder;
PyObject *const_str_digest_c9a456844228dfe49c602b83528112ec;
PyObject *const_tuple_str_plain_block_size_tuple;
PyObject *const_str_plain_ANSIX923;
PyObject *const_int_pos_56;
PyObject *const_str_digest_74fccde0023a21272300f824bd234427;
PyObject *const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36;
PyObject *const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc;
PyObject *const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97;
PyObject *const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_block_size_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[62];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.padding"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 62) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 62 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.primitives.padding"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2040", mod_consts.const_int_pos_2040);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_pos_2040);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a", mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488", mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__byte_padding_check", mod_consts.const_str_plain__byte_padding_check);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__byte_padding_check);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_block_size", mod_consts.const_str_plain_block_size);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_block_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7PaddingContext", mod_consts.const_str_plain_PKCS7PaddingContext);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7PaddingContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7UnpaddingContext", mod_consts.const_str_plain_PKCS7UnpaddingContext);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7UnpaddingContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923PaddingContext", mod_consts.const_str_plain_ANSIX923PaddingContext);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923PaddingContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923UnpaddingContext", mod_consts.const_str_plain_ANSIX923UnpaddingContext);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923UnpaddingContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple", mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple", mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1", mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PaddingContext", mod_consts.const_str_plain_PaddingContext);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_PaddingContext);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f", mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991", mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a", mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5", mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finalize", mod_consts.const_str_plain_finalize);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_finalize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593", mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390", mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7", mod_consts.const_str_plain_PKCS7);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40", mod_consts.const_int_pos_40);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_int_pos_40);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88", mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc", mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144", mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padder", mod_consts.const_str_plain_padder);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_padder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0", mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpadder", mod_consts.const_str_plain_unpadder);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpadder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec", mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_block_size_tuple", mod_consts.const_tuple_str_plain_block_size_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_size_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923", mod_consts.const_str_plain_ANSIX923);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_56", mod_consts.const_int_pos_56);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_int_pos_56);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_74fccde0023a21272300f824bd234427", mod_consts.const_str_digest_74fccde0023a21272300f824bd234427);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_74fccde0023a21272300f824bd234427);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36", mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc", mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97", mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c", mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple", mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
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
void checkModuleConstants_cryptography$hazmat$primitives$padding(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2040", mod_consts.const_int_pos_2040);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_pos_2040) && "mod_consts.const_int_pos_2040");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a", mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a) && "mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488", mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488) && "mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__byte_padding_check", mod_consts.const_str_plain__byte_padding_check);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__byte_padding_check) && "mod_consts.const_str_plain__byte_padding_check");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_block_size", mod_consts.const_str_plain_block_size);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_block_size) && "mod_consts.const_str_plain_block_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7PaddingContext", mod_consts.const_str_plain_PKCS7PaddingContext);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7PaddingContext) && "mod_consts.const_str_plain_PKCS7PaddingContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7UnpaddingContext", mod_consts.const_str_plain_PKCS7UnpaddingContext);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7UnpaddingContext) && "mod_consts.const_str_plain_PKCS7UnpaddingContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923PaddingContext", mod_consts.const_str_plain_ANSIX923PaddingContext);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923PaddingContext) && "mod_consts.const_str_plain_ANSIX923PaddingContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923UnpaddingContext", mod_consts.const_str_plain_ANSIX923UnpaddingContext);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923UnpaddingContext) && "mod_consts.const_str_plain_ANSIX923UnpaddingContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc) && "mod_consts.const_str_plain_abc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography) && "mod_consts.const_str_plain_cryptography");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e) && "mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple", mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple) && "mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass) && "mod_consts.const_str_plain_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta) && "mod_consts.const_str_plain_ABCMeta");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple", mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1", mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1) && "mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PaddingContext", mod_consts.const_str_plain_PaddingContext);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_PaddingContext) && "mod_consts.const_str_plain_PaddingContext");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod) && "mod_consts.const_str_plain_abstractmethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f", mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f) && "mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991", mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991) && "mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_update) && "mod_consts.const_str_plain_update");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a", mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a) && "mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053) && "mod_consts.const_dict_2366cb3246e451cebe4ed21878030053");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5", mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5) && "mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finalize", mod_consts.const_str_plain_finalize);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_finalize) && "mod_consts.const_str_plain_finalize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593", mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593) && "mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390", mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390) && "mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7", mod_consts.const_str_plain_PKCS7);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7) && "mod_consts.const_str_plain_PKCS7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_40", mod_consts.const_int_pos_40);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_int_pos_40) && "mod_consts.const_int_pos_40");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88", mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88) && "mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc", mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc) && "mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144", mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144) && "mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padder", mod_consts.const_str_plain_padder);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_padder) && "mod_consts.const_str_plain_padder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0", mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0) && "mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpadder", mod_consts.const_str_plain_unpadder);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpadder) && "mod_consts.const_str_plain_unpadder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec", mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec) && "mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_block_size_tuple", mod_consts.const_tuple_str_plain_block_size_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_block_size_tuple) && "mod_consts.const_tuple_str_plain_block_size_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ANSIX923", mod_consts.const_str_plain_ANSIX923);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSIX923) && "mod_consts.const_str_plain_ANSIX923");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_56", mod_consts.const_int_pos_56);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_int_pos_56) && "mod_consts.const_int_pos_56");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_74fccde0023a21272300f824bd234427", mod_consts.const_str_digest_74fccde0023a21272300f824bd234427);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_74fccde0023a21272300f824bd234427) && "mod_consts.const_str_digest_74fccde0023a21272300f824bd234427");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36", mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36) && "mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc", mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc) && "mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97", mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97) && "mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c", mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c) && "mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple", mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923PaddingContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923PaddingContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIX923PaddingContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIX923PaddingContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIX923PaddingContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIX923PaddingContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923PaddingContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923PaddingContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923PaddingContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923UnpaddingContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923UnpaddingContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIX923UnpaddingContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIX923UnpaddingContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSIX923UnpaddingContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSIX923UnpaddingContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923UnpaddingContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923UnpaddingContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923UnpaddingContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7PaddingContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7PaddingContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS7PaddingContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS7PaddingContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS7PaddingContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS7PaddingContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7PaddingContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7PaddingContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7PaddingContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7UnpaddingContext(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7UnpaddingContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS7UnpaddingContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS7UnpaddingContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS7UnpaddingContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS7UnpaddingContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7UnpaddingContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7UnpaddingContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7UnpaddingContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$PaddingContext(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PaddingContext);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PaddingContext);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PaddingContext, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PaddingContext);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PaddingContext, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PaddingContext);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PaddingContext);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PaddingContext);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$_byte_padding_check(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain__byte_padding_check);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__byte_padding_check);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__byte_padding_check, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__byte_padding_check);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__byte_padding_check, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain__byte_padding_check);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain__byte_padding_check);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__byte_padding_check);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$padding$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$padding->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$padding->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$padding->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9e719016680556f8dec4212805a3691d;
static PyCodeObject *code_objects_019d8e06120afdbd50e04deb60221d48;
static PyCodeObject *code_objects_373ab870ff5c5c8d5de4869f0e679858;
static PyCodeObject *code_objects_24e400382133326a8c4a01eec2f7bf59;
static PyCodeObject *code_objects_4ef87f2cf753b8b3fad0d1033742cb41;
static PyCodeObject *code_objects_208b27f948166d4d8d39c0fe821da920;
static PyCodeObject *code_objects_1e44a64dd29294da37ce4e4759345254;
static PyCodeObject *code_objects_6944beb1b7194997a92fbb175ddc5310;
static PyCodeObject *code_objects_b6a933ad601a4ab142a0d8fd7c9d2904;
static PyCodeObject *code_objects_54183767ecf17a1414daa036fb8b5b9c;
static PyCodeObject *code_objects_6c25cc0253a0d160a58d6c1aafd94d20;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3ebfdf079e3d00e3feb6247bca7c1b97); CHECK_OBJECT(module_filename_obj);
code_objects_9e719016680556f8dec4212805a3691d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c, mod_consts.const_str_digest_1d1a1f2ad7057ac22753dbefe5d29f2c, NULL, NULL, 0, 0, 0);
code_objects_019d8e06120afdbd50e04deb60221d48 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PaddingContext, mod_consts.const_str_plain_PaddingContext, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_373ab870ff5c5c8d5de4869f0e679858 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_74fccde0023a21272300f824bd234427, mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple, NULL, 2, 0, 0);
code_objects_24e400382133326a8c4a01eec2f7bf59 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc, mod_consts.const_tuple_str_plain_self_str_plain_block_size_tuple, NULL, 2, 0, 0);
code_objects_4ef87f2cf753b8b3fad0d1033742cb41 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__byte_padding_check, mod_consts.const_str_plain__byte_padding_check, mod_consts.const_tuple_str_plain_block_size_tuple, NULL, 1, 0, 0);
code_objects_208b27f948166d4d8d39c0fe821da920 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_finalize, mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1e44a64dd29294da37ce4e4759345254 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_padder, mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6944beb1b7194997a92fbb175ddc5310 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_padder, mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b6a933ad601a4ab142a0d8fd7c9d2904 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unpadder, mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_54183767ecf17a1414daa036fb8b5b9c = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unpadder, mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6c25cc0253a0d160a58d6c1aafd94d20 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__1_update(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__2_finalize(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__5_padder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__6_unpadder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__7___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__8_padder(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__9_unpadder(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_block_size = python_pars[0];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check = MAKE_FUNCTION_FRAME(tstate, code_objects_4ef87f2cf753b8b3fad0d1033742cb41, module_cryptography$hazmat$primitives$padding, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_block_size);
tmp_assign_source_1 = par_block_size;
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
    Py_INCREF(tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto try_except_handler_1;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_1;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_2040;
tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_44fdde2465e9daa1d6c7b9110fcd076a;
frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check->m_frame.f_lineno = 34;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 34;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(par_block_size);
tmp_mod_expr_left_1 = par_block_size;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_8;
tmp_cmp_expr_left_3 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_8389571181597459a9e60985c9f0b488;
frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check->m_frame.f_lineno = 37;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check,
    type_description_1,
    par_block_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check);

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
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_block_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_24e400382133326a8c4a01eec2f7bf59, module_cryptography$hazmat$primitives$padding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$_byte_padding_check(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__byte_padding_check);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_block_size);
tmp_args_element_value_1 = par_block_size;
frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__->m_frame.f_lineno = 42;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_block_size);
tmp_ass_attr_value_1 = par_block_size;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_block_size, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__,
    type_description_1,
    par_self,
    par_block_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__4___init__);

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
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__5_padder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder = MAKE_FUNCTION_FRAME(tstate, code_objects_6944beb1b7194997a92fbb175ddc5310, module_cryptography$hazmat$primitives$padding, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7PaddingContext(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS7PaddingContext);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_block_size);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder->m_frame.f_lineno = 46;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__5_padder);

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


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__6_unpadder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder = MAKE_FUNCTION_FRAME(tstate, code_objects_54183767ecf17a1414daa036fb8b5b9c, module_cryptography$hazmat$primitives$padding, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7UnpaddingContext(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS7UnpaddingContext);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_block_size);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder->m_frame.f_lineno = 49;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__6_unpadder);

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


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_block_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_373ab870ff5c5c8d5de4869f0e679858, module_cryptography$hazmat$primitives$padding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$_byte_padding_check(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__byte_padding_check);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_block_size);
tmp_args_element_value_1 = par_block_size;
frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__->m_frame.f_lineno = 58;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_block_size);
tmp_ass_attr_value_1 = par_block_size;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_block_size, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__,
    type_description_1,
    par_self,
    par_block_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__7___init__);

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
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_block_size);
Py_DECREF(par_block_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__8_padder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder = MAKE_FUNCTION_FRAME(tstate, code_objects_1e44a64dd29294da37ce4e4759345254, module_cryptography$hazmat$primitives$padding, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923PaddingContext(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ANSIX923PaddingContext);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_block_size);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder->m_frame.f_lineno = 62;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__8_padder);

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


static PyObject *impl_cryptography$hazmat$primitives$padding$$$function__9_unpadder(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder = MAKE_FUNCTION_FRAME(tstate, code_objects_b6a933ad601a4ab142a0d8fd7c9d2904, module_cryptography$hazmat$primitives$padding, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder = cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923UnpaddingContext(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ANSIX923UnpaddingContext);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_block_size);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder->m_frame.f_lineno = 65;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder == cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder);
    cache_frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$function__9_unpadder);

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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__1_update(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e8809a86847a89e582fb59fb40971a7a,
#endif
        code_objects_6c25cc0253a0d160a58d6c1aafd94d20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_digest_6a7bd7ba19b26f3f79c2f4295759e991,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__2_finalize(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_finalize,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_36c8e4ab5b69655a3a1267021d4f3593,
#endif
        code_objects_208b27f948166d4d8d39c0fe821da920,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_digest_8fd961e6e36f135947c3aa7ea7ba46e5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check,
        mod_consts.const_str_plain__byte_padding_check,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4ef87f2cf753b8b3fad0d1033742cb41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_751aa7baa9a765ae2c02f63314c2b2cc,
#endif
        code_objects_24e400382133326a8c4a01eec2f7bf59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__5_padder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__5_padder,
        mod_consts.const_str_plain_padder,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dcfe412922e160cc43acbf5b064189c0,
#endif
        code_objects_6944beb1b7194997a92fbb175ddc5310,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__6_unpadder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__6_unpadder,
        mod_consts.const_str_plain_unpadder,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c9a456844228dfe49c602b83528112ec,
#endif
        code_objects_54183767ecf17a1414daa036fb8b5b9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__7___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74fccde0023a21272300f824bd234427,
#endif
        code_objects_373ab870ff5c5c8d5de4869f0e679858,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__8_padder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__8_padder,
        mod_consts.const_str_plain_padder,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fa8860a5a0d7a83e112a4ad92cb0ec36,
#endif
        code_objects_1e44a64dd29294da37ce4e4759345254,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__9_unpadder(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$padding$$$function__9_unpadder,
        mod_consts.const_str_plain_unpadder,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6af95dbfbd5d5141fd74f5bfaf00f5dc,
#endif
        code_objects_b6a933ad601a4ab142a0d8fd7c9d2904,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$padding,
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

static function_impl_code const function_table_cryptography$hazmat$primitives$padding[] = {
impl_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check,
impl_cryptography$hazmat$primitives$padding$$$function__4___init__,
impl_cryptography$hazmat$primitives$padding$$$function__5_padder,
impl_cryptography$hazmat$primitives$padding$$$function__6_unpadder,
impl_cryptography$hazmat$primitives$padding$$$function__7___init__,
impl_cryptography$hazmat$primitives$padding$$$function__8_padder,
impl_cryptography$hazmat$primitives$padding$$$function__9_unpadder,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$padding);
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
        module_cryptography$hazmat$primitives$padding,
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
        function_table_cryptography$hazmat$primitives$padding,
        sizeof(function_table_cryptography$hazmat$primitives$padding) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.padding";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$padding(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$padding");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$padding = module;

    moduledict_cryptography$hazmat$primitives$padding = MODULE_DICT(module_cryptography$hazmat$primitives$padding);

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
        PRINT_STRING("cryptography$hazmat$primitives$padding: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$padding: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$padding: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.padding" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$padding\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$primitives$padding,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$padding,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$padding,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$padding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$padding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$padding);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$padding);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$padding = MAKE_MODULE_FRAME(code_objects_9e719016680556f8dec4212805a3691d, module_cryptography$hazmat$primitives$padding);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$primitives$padding$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$primitives$padding$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$padding;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$padding;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_utils, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$padding;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_aa3fbde230457407f765c54829663d73_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 10;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_plain_ANSIX923PaddingContext,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ANSIX923PaddingContext);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923PaddingContext, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_plain_ANSIX923UnpaddingContext,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ANSIX923UnpaddingContext);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923UnpaddingContext, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_plain_PKCS7PaddingContext,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PKCS7PaddingContext);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7PaddingContext, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$hazmat$primitives$padding,
        mod_consts.const_str_plain_PKCS7UnpaddingContext,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_PKCS7UnpaddingContext);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7UnpaddingContext, tmp_assign_source_12);
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$padding$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto try_except_handler_2;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
tmp_assign_source_13 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_14 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_14 == NULL) {
    tmp_assign_source_14 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_14);
}
assert(!(tmp_assign_source_14 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_14);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_14;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_PaddingContext_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 18;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 18;

    goto try_except_handler_2;
}
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 18;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 18;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
branch_end_2:;
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_PaddingContext;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2 = MAKE_CLASS_FRAME(tstate, code_objects_019d8e06120afdbd50e04deb60221d48, module_cryptography$hazmat$primitives$padding, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2, locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$padding$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9cf6f2cbfd53f297b0838f300fdc173f);

tmp_args_element_value_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__1_update(tstate, tmp_annotations_1);

frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2->m_frame.f_lineno = 19;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$primitives$padding$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_args_element_value_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__2_finalize(tstate, tmp_annotations_2);

frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2->m_frame.f_lineno = 25;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain_finalize, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_1 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_PaddingContext;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_4 = locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_1, tmp_dict_arg_value_4);
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_17 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_17);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18);
locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18);
locals_cryptography$hazmat$primitives$padding$$$class__1_PaddingContext_18 = NULL;
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
exception_lineno = 18;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PaddingContext, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_5e60f8f3317b8caa3a38f436c6476390);

tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__3__byte_padding_check(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain__byte_padding_check, tmp_assign_source_19);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_PKCS7;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_40;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__4___init__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__5_padder(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, mod_consts.const_str_plain_padder, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__6_unpadder(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, mod_consts.const_str_plain_unpadder, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_block_size_tuple;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
tmp_name_value_6 = mod_consts.const_str_plain_PKCS7;
tmp_bases_value_2 = const_tuple_empty;
tmp_dict_arg_value_5 = locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_2, tmp_dict_arg_value_5);
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_22 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40);
locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40);
locals_cryptography$hazmat$primitives$padding$$$class__2_PKCS7_40 = NULL;
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
exception_lineno = 40;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS7, tmp_assign_source_22);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$padding$PaddingContext(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PaddingContext);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_register);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7PaddingContext(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS7PaddingContext);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 52;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 52;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
tmp_expression_value_8 = module_var_accessor_cryptography$hazmat$primitives$padding$PaddingContext(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PaddingContext);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_register);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_cryptography$hazmat$primitives$padding$PKCS7UnpaddingContext(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS7UnpaddingContext);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 53;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 53;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_8c688724922a589bac7915c01ba838d1;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ANSIX923;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_56;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_65486c9c5ce25dd95550668f81898a88);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__7___init__(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__8_padder(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, mod_consts.const_str_plain_padder, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_d38aae84c49864e4fcba17ad6e17f144);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$padding$$$function__9_unpadder(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, mod_consts.const_str_plain_unpadder, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_block_size_tuple;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
tmp_name_value_7 = mod_consts.const_str_plain_ANSIX923;
tmp_bases_value_3 = const_tuple_empty;
tmp_dict_arg_value_6 = locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_3, tmp_dict_arg_value_6);
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_10;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_26 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56);
locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56);
locals_cryptography$hazmat$primitives$padding$$$class__3_ANSIX923_56 = NULL;
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
exception_lineno = 56;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSIX923, tmp_assign_source_26);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$primitives$padding$PaddingContext(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PaddingContext);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_register);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923PaddingContext(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ANSIX923PaddingContext);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 68;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 68;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$primitives$padding$PaddingContext(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PaddingContext);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_register);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_cryptography$hazmat$primitives$padding$ANSIX923UnpaddingContext(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ANSIX923UnpaddingContext);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$padding->m_frame.f_lineno = 69;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$padding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$padding->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$padding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$padding);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$padding", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.padding" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$padding);
    return module_cryptography$hazmat$primitives$padding;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$padding, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$padding", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
