/* Generated code for Python module 'PIL$PixarImagePlugin'
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



/* The "module_PIL$PixarImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$PixarImagePlugin;
PyDictObject *moduledict_PIL$PixarImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_startswith;
PyObject *const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple;
PyObject *const_str_plain_fp;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_str_plain__accept;
PyObject *const_str_digest_dcfdb0c7485ce51b65047355aac46cae;
PyObject *const_tuple_int_pos_508_tuple;
PyObject *const_str_plain_i16;
PyObject *const_int_pos_418;
PyObject *const_int_pos_416;
PyObject *const_str_plain__size;
PyObject *const_int_pos_424;
PyObject *const_int_pos_426;
PyObject *const_tuple_int_pos_14_int_pos_2_tuple;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain__mode;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_raw;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_size;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_tile;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain__binary;
PyObject *const_tuple_str_plain_i16le_tuple;
PyObject *const_str_plain_i16le;
PyObject *const_dict_38f5e37decacb42d0c9efbc0c4d3adea;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_PixarImageFile;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_b934314efa61fe9eb5cd227ea1149420;
PyObject *const_int_pos_38;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_PIXAR;
PyObject *const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0;
PyObject *const_str_plain_format_description;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__open;
PyObject *const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399;
PyObject *const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_register_open;
PyObject *const_str_plain_register_extension;
PyObject *const_str_digest_06d6985486df1ea04ca022b75400fbb9;
PyObject *const_str_digest_ee8a8160f2e16e445187098385b20faa;
PyObject *const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_prefix_tuple;
PyObject *const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[58];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.PixarImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 58) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 58 values, got %d\n",
                    UN_TRANSLATE("PIL.PixarImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple", mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae", mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_508_tuple", mod_consts.const_tuple_int_pos_508_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_508_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_418", mod_consts.const_int_pos_418);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_418);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_416", mod_consts.const_int_pos_416);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_416);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_424", mod_consts.const_int_pos_424);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_424);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_426", mod_consts.const_int_pos_426);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_426);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_14_int_pos_2_tuple", mod_consts.const_tuple_int_pos_14_int_pos_2_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_14_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PixarImageFile", mod_consts.const_str_plain_PixarImageFile);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_PixarImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420", mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PIXAR", mod_consts.const_str_plain_PIXAR);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_PIXAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0", mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399", mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple", mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9", mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa", mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d", mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple);
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
void checkModuleConstants_PIL$PixarImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple", mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple) && "mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__accept) && "mod_consts.const_str_plain__accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae", mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae) && "mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_508_tuple", mod_consts.const_tuple_int_pos_508_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_508_tuple) && "mod_consts.const_tuple_int_pos_508_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16) && "mod_consts.const_str_plain_i16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_418", mod_consts.const_int_pos_418);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_418) && "mod_consts.const_int_pos_418");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_416", mod_consts.const_int_pos_416);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_416) && "mod_consts.const_int_pos_416");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_424", mod_consts.const_int_pos_424);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_424) && "mod_consts.const_int_pos_424");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_426", mod_consts.const_int_pos_426);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_426) && "mod_consts.const_int_pos_426");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_14_int_pos_2_tuple", mod_consts.const_tuple_int_pos_14_int_pos_2_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_14_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_14_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024) && "mod_consts.const_int_pos_1024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_tile) && "mod_consts.const_str_plain_tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__binary) && "mod_consts.const_str_plain__binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple) && "mod_consts.const_tuple_str_plain_i16le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16le) && "mod_consts.const_str_plain_i16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea) && "mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PixarImageFile", mod_consts.const_str_plain_PixarImageFile);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_PixarImageFile) && "mod_consts.const_str_plain_PixarImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420", mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420) && "mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_38) && "mod_consts.const_int_pos_38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PIXAR", mod_consts.const_str_plain_PIXAR);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_PIXAR) && "mod_consts.const_str_plain_PIXAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0", mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0) && "mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_description) && "mod_consts.const_str_plain_format_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__open) && "mod_consts.const_str_plain__open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399", mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399) && "mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple", mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple) && "mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_open) && "mod_consts.const_str_plain_register_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9", mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9) && "mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa", mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa) && "mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d", mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d) && "mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple) && "mod_consts.const_tuple_str_plain_prefix_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple");
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
static PyObject *module_var_accessor_PIL$PixarImagePlugin$Image(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PixarImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PixarImagePlugin$PixarImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PixarImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PixarImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PixarImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PixarImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PixarImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PixarImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PixarImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PixarImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PixarImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PixarImagePlugin$_accept(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__accept);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__accept, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__accept);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__accept, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PixarImagePlugin$i16(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PixarImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PixarImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PixarImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_i16);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_i16, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_i16);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_i16, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ed8ea06bf188f1a74bc3114ef6b41166;
static PyCodeObject *code_objects_dafaa2881fbafe4c7636e2d60b065aea;
static PyCodeObject *code_objects_286b97c4448f028dca8b2031c776a73f;
static PyCodeObject *code_objects_dee7c31eb78012202ca56f17b7d5b1ae;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ee8a8160f2e16e445187098385b20faa); CHECK_OBJECT(module_filename_obj);
code_objects_ed8ea06bf188f1a74bc3114ef6b41166 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d, mod_consts.const_str_digest_078325ab8e3d7c3ef16fc6c2b3fc5e5d, NULL, NULL, 0, 0, 0);
code_objects_dafaa2881fbafe4c7636e2d60b065aea = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PixarImageFile, mod_consts.const_str_plain_PixarImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_286b97c4448f028dca8b2031c776a73f = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__accept, mod_consts.const_str_plain__accept, mod_consts.const_tuple_str_plain_prefix_tuple, NULL, 1, 0, 0);
code_objects_dee7c31eb78012202ca56f17b7d5b1ae = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399, mod_consts.const_tuple_str_plain_self_str_plain_s_str_plain_msg_str_plain_mode_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$PixarImagePlugin$$$function__1__accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$PixarImagePlugin$$$function__1__accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept)) {
    Py_XDECREF(cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept = MAKE_FUNCTION_FRAME(tstate, code_objects_286b97c4448f028dca8b2031c776a73f, module_PIL$PixarImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept->m_type_description == NULL);
frame_frame_PIL$PixarImagePlugin$$$function__1__accept = cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PixarImagePlugin$$$function__1__accept);
assert(Py_REFCNT(frame_frame_PIL$PixarImagePlugin$$$function__1__accept) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_prefix);
tmp_expression_value_1 = par_prefix;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PixarImagePlugin$$$function__1__accept->m_frame.f_lineno = 31;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_digest_4e7b87ddc64c48b8951bb019a95bc4d1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PixarImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PixarImagePlugin$$$function__1__accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PixarImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PixarImagePlugin$$$function__1__accept,
    type_description_1,
    par_prefix
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PixarImagePlugin$$$function__1__accept == cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept);
    cache_frame_frame_PIL$PixarImagePlugin$$$function__1__accept = NULL;
}

assertFrameObject(frame_frame_PIL$PixarImagePlugin$$$function__1__accept);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$PixarImagePlugin$$$function__2__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_s = NULL;
PyObject *var_mode = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PixarImagePlugin$$$function__2__open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open)) {
    Py_XDECREF(cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open = MAKE_FUNCTION_FRAME(tstate, code_objects_dee7c31eb78012202ca56f17b7d5b1ae, module_PIL$PixarImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_type_description == NULL);
frame_frame_PIL$PixarImagePlugin$$$function__2__open = cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PixarImagePlugin$$$function__2__open);
assert(Py_REFCNT(frame_frame_PIL$PixarImagePlugin$$$function__2__open) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fp);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 44;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 46;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s;
    var_s = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$PixarImagePlugin$_accept(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_1 = var_s;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 47;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooNo";
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_dcfdb0c7485ce51b65047355aac46cae;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 49;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_s);
tmp_add_expr_left_1 = var_s;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fp);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 52;
tmp_add_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_508_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s;
    assert(old != NULL);
    var_s = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_ass_attr_target_1;
tmp_called_value_2 = module_var_accessor_PIL$PixarImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_2 = var_s;
tmp_args_element_value_3 = mod_consts.const_int_pos_418;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyTuple_SET_ITEM(tmp_ass_attr_value_1, 0, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_PIL$PixarImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooNo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_4 = var_s;
tmp_args_element_value_5 = mod_consts.const_int_pos_416;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooNo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_attr_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__size, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_PIL$PixarImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_6 = var_s;
tmp_args_element_value_7 = mod_consts.const_int_pos_424;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 57;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyTuple_SET_ITEM(tmp_assign_source_3, 0, tmp_tuple_element_2);
tmp_called_value_5 = module_var_accessor_PIL$PixarImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_8 = var_s;
tmp_args_element_value_9 = mod_consts.const_int_pos_426;
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 57;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_mode);
tmp_cmp_expr_left_2 = var_mode;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_int_pos_14_int_pos_2_tuple;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooNo";
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
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = mod_consts.const_str_plain_RGB;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__mode, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_4 = module_var_accessor_PIL$PixarImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__Tile);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_raw;
tmp_add_expr_left_2 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = mod_consts.const_int_pos_1024;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_ass_attr_value_3, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_tile, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PixarImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PixarImagePlugin$$$function__2__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PixarImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PixarImagePlugin$$$function__2__open,
    type_description_1,
    par_self,
    var_s,
    NULL,
    var_mode
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PixarImagePlugin$$$function__2__open == cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open);
    cache_frame_frame_PIL$PixarImagePlugin$$$function__2__open = NULL;
}

assertFrameObject(frame_frame_PIL$PixarImagePlugin$$$function__2__open);

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
CHECK_OBJECT(var_s);
CHECK_OBJECT(var_s);
Py_DECREF(var_s);
var_s = NULL;
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
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



static PyObject *MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PixarImagePlugin$$$function__1__accept,
        mod_consts.const_str_plain__accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_286b97c4448f028dca8b2031c776a73f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PixarImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PixarImagePlugin$$$function__2__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c96ffd99d9ce3244cbd0403ec10ce399,
#endif
        code_objects_dee7c31eb78012202ca56f17b7d5b1ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PixarImagePlugin,
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

static function_impl_code const function_table_PIL$PixarImagePlugin[] = {
impl_PIL$PixarImagePlugin$$$function__1__accept,
impl_PIL$PixarImagePlugin$$$function__2__open,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$PixarImagePlugin);
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
        module_PIL$PixarImagePlugin,
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
        function_table_PIL$PixarImagePlugin,
        sizeof(function_table_PIL$PixarImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.PixarImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$PixarImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$PixarImagePlugin");

    // Store the module for future use.
    module_PIL$PixarImagePlugin = module;

    moduledict_PIL$PixarImagePlugin = MODULE_DICT(module_PIL$PixarImagePlugin);

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
        PRINT_STRING("PIL$PixarImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$PixarImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$PixarImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PixarImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$PixarImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$PixarImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$PixarImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$PixarImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PixarImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PixarImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$PixarImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$PixarImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_PIL$PixarImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$PixarImagePlugin = MAKE_MODULE_FRAME(code_objects_ed8ea06bf188f1a74bc3114ef6b41166, module_PIL$PixarImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PixarImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$PixarImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$PixarImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$PixarImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$PixarImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 23;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

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
        (PyObject *)moduledict_PIL$PixarImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_7);
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
        (PyObject *)moduledict_PIL$PixarImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$PixarImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_i16le_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 24;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$PixarImagePlugin,
        mod_consts.const_str_plain_i16le,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_i16le);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);

tmp_assign_source_10 = MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__1__accept(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$PixarImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ImageFile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_11, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_12 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_14;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_PixarImageFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 38;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 38;

    goto try_except_handler_2;
}
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 38;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 38;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b934314efa61fe9eb5cd227ea1149420;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_PixarImageFile;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_38;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_dafaa2881fbafe4c7636e2d60b065aea, module_PIL$PixarImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2, locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2);
assert(Py_REFCNT(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_PIXAR;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_3d4cd6176461887c58ff29dfd92f8ec0;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$PixarImagePlugin$$$function__2__open(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$PixarImagePlugin$$$class__1_PixarImageFile_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__size_str_plain__mode_str_plain_tile_tuple;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_PixarImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

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
Py_DECREF(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38);
locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38);
locals_PIL$PixarImagePlugin$$$class__1_PixarImageFile_38 = NULL;
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
exception_lineno = 38;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PixarImageFile, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_8 = module_var_accessor_PIL$PixarImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_register_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_PIL$PixarImagePlugin$PixarImageFile(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PixarImageFile);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_PIL$PixarImagePlugin$PixarImageFile(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PixarImageFile);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$PixarImagePlugin$_accept(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 70;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
tmp_expression_value_10 = module_var_accessor_PIL$PixarImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_register_extension);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_PIL$PixarImagePlugin$PixarImageFile(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PixarImageFile);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_06d6985486df1ea04ca022b75400fbb9;
frame_frame_PIL$PixarImagePlugin->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PixarImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PixarImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PixarImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$PixarImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$PixarImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PixarImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$PixarImagePlugin);
    return module_PIL$PixarImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PixarImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$PixarImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
