/* Generated code for Python module 'PIL$PalmImagePlugin'
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



/* The "module_PIL$PalmImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$PalmImagePlugin;
PyDictObject *moduledict_PIL$PalmImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Image;
PyObject *const_str_plain_new;
PyObject *const_str_plain_L;
PyObject *const_str_plain__Palm8BitColormapValues;
PyObject *const_str_plain_putdata;
PyObject *const_str_plain_palettedata;
PyObject *const_tuple_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_putpalette;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_P;
PyObject *const_int_pos_8;
PyObject *const_str_plain_encoderinfo;
PyObject *const_tuple_str_plain_bpp_tuple;
PyObject *const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple;
PyObject *const_str_plain_bpp;
PyObject *const_str_plain_point;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_4621a4026644fa18656e149a28e882cc;
PyObject *const_str_plain_info;
PyObject *const_str_digest_4a6352c6771b4dd5e216bc9acc20f853;
PyObject *const_str_digest_b43d20f05a758551c31b34868057b826;
PyObject *const_str_plain__mode;
PyObject *const_str_digest_acef99c171b3bba59b66de09686b1e3a;
PyObject *const_str_plain_1;
PyObject *const_str_digest_a43c96e669182759de7b6dc21baa30ee;
PyObject *const_str_plain_im;
PyObject *const_str_plain_load;
PyObject *const_str_plain_size;
PyObject *const_int_pos_16;
PyObject *const_int_pos_2;
PyObject *const_str_plain__COMPRESSION_TYPES;
PyObject *const_str_plain_none;
PyObject *const_str_plain__FLAGS;
PyObject *const_str_digest_a75c69442a63e1697d57cc8d8f0d921f;
PyObject *const_str_plain_getpalette;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_write;
PyObject *const_str_plain_o16b;
PyObject *const_str_plain_o8;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_colors;
PyObject *const_str_plain_fp;
PyObject *const_str_plain_colormap;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__save;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_raw;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_maxval;
PyObject *const_str_plain_shift;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_IO;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
PyObject *const_str_plain__binary;
PyObject *const_tuple_str_plain_o8_tuple;
PyObject *const_tuple_str_plain_o16be_tuple;
PyObject *const_str_plain_o16be;
PyObject *const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple;
PyObject *const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d;
PyObject *const_str_plain_build_prototype_image;
PyObject *const_str_plain_Palm8BitColormapImage;
PyObject *const_dict_00ceb7b8fdd201e0b89dd9f176a81c77;
PyObject *const_dict_304b9ed3f71b2bf6477b3104306639d4;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_PALM;
PyObject *const_str_plain_register_extension;
PyObject *const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple;
PyObject *const_str_plain_register_mime;
PyObject *const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple;
PyObject *const_str_digest_0c7c91871fc95911d3d69ae4b76010f3;
PyObject *const_tuple_str_plain_x_str_plain_maxval_tuple;
PyObject *const_tuple_str_plain_maxval_tuple;
PyObject *const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple;
PyObject *const_tuple_str_plain_maxval_str_plain_shift_tuple;
PyObject *const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1;
PyObject *const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple;
PyObject *const_tuple_9534640f207de352f6b84d2a281744aa_tuple;
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
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.PalmImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 83) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 83 values, got %d\n",
                    UN_TRANSLATE("PIL.PalmImagePlugin"),
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
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Palm8BitColormapValues", mod_consts.const_str_plain__Palm8BitColormapValues);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__Palm8BitColormapValues);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putdata", mod_consts.const_str_plain_putdata);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_putdata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palettedata", mod_consts.const_str_plain_palettedata);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_palettedata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_int_0_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putpalette", mod_consts.const_str_plain_putpalette);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_putpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bpp_tuple", mod_consts.const_tuple_str_plain_bpp_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bpp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple", mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bpp", mod_consts.const_str_plain_bpp);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_bpp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_point);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc", mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853", mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826", mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a", mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee", mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__COMPRESSION_TYPES", mod_consts.const_str_plain__COMPRESSION_TYPES);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__COMPRESSION_TYPES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_none", mod_consts.const_str_plain_none);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FLAGS", mod_consts.const_str_plain__FLAGS);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__FLAGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f", mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16b", mod_consts.const_str_plain_o16b);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_o8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colors", mod_consts.const_str_plain_colors);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_colors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colormap", mod_consts.const_str_plain_colormap);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_colormap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flush", mod_consts.const_str_plain_flush);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maxval", mod_consts.const_str_plain_maxval);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16be_tuple", mod_consts.const_tuple_str_plain_o16be_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16be_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16be", mod_consts.const_str_plain_o16be);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple", mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d", mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_build_prototype_image", mod_consts.const_str_plain_build_prototype_image);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_build_prototype_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Palm8BitColormapImage", mod_consts.const_str_plain_Palm8BitColormapImage);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_Palm8BitColormapImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77", mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4", mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PALM", mod_consts.const_str_plain_PALM);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_PALM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple", mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple", mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3", mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple", mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxval_tuple", mod_consts.const_tuple_str_plain_maxval_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxval_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple", mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple", mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1", mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple", mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple", mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple);
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
void checkModuleConstants_PIL$PalmImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Palm8BitColormapValues", mod_consts.const_str_plain__Palm8BitColormapValues);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__Palm8BitColormapValues) && "mod_consts.const_str_plain__Palm8BitColormapValues");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putdata", mod_consts.const_str_plain_putdata);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_putdata) && "mod_consts.const_str_plain_putdata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palettedata", mod_consts.const_str_plain_palettedata);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_palettedata) && "mod_consts.const_str_plain_palettedata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putpalette", mod_consts.const_str_plain_putpalette);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_putpalette) && "mod_consts.const_str_plain_putpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo) && "mod_consts.const_str_plain_encoderinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bpp_tuple", mod_consts.const_tuple_str_plain_bpp_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bpp_tuple) && "mod_consts.const_tuple_str_plain_bpp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple", mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bpp", mod_consts.const_str_plain_bpp);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_bpp) && "mod_consts.const_str_plain_bpp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_point) && "mod_consts.const_str_plain_point");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc", mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc) && "mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853", mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853) && "mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826", mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826) && "mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a", mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a) && "mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_1) && "mod_consts.const_str_plain_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee", mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee) && "mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__COMPRESSION_TYPES", mod_consts.const_str_plain__COMPRESSION_TYPES);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__COMPRESSION_TYPES) && "mod_consts.const_str_plain__COMPRESSION_TYPES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_none", mod_consts.const_str_plain_none);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_none) && "mod_consts.const_str_plain_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FLAGS", mod_consts.const_str_plain__FLAGS);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__FLAGS) && "mod_consts.const_str_plain__FLAGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f", mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f) && "mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset) && "mod_consts.const_str_plain_offset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16b", mod_consts.const_str_plain_o16b);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16b) && "mod_consts.const_str_plain_o16b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_o8) && "mod_consts.const_str_plain_o8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colors", mod_consts.const_str_plain_colors);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_colors) && "mod_consts.const_str_plain_colors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colormap", mod_consts.const_str_plain_colormap);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_colormap) && "mod_consts.const_str_plain_colormap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flush", mod_consts.const_str_plain_flush);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush) && "mod_consts.const_str_plain_flush");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_maxval", mod_consts.const_str_plain_maxval);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxval) && "mod_consts.const_str_plain_maxval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_shift", mod_consts.const_str_plain_shift);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift) && "mod_consts.const_str_plain_shift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO) && "mod_consts.const_str_plain_IO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__binary) && "mod_consts.const_str_plain__binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple) && "mod_consts.const_tuple_str_plain_o8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16be_tuple", mod_consts.const_tuple_str_plain_o16be_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16be_tuple) && "mod_consts.const_tuple_str_plain_o16be_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16be", mod_consts.const_str_plain_o16be);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16be) && "mod_consts.const_str_plain_o16be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple", mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple) && "mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d", mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d) && "mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_build_prototype_image", mod_consts.const_str_plain_build_prototype_image);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_build_prototype_image) && "mod_consts.const_str_plain_build_prototype_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Palm8BitColormapImage", mod_consts.const_str_plain_Palm8BitColormapImage);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_Palm8BitColormapImage) && "mod_consts.const_str_plain_Palm8BitColormapImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77", mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77) && "mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4", mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4) && "mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PALM", mod_consts.const_str_plain_PALM);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_PALM) && "mod_consts.const_str_plain_PALM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple", mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple) && "mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple", mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple) && "mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3", mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3) && "mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple", mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxval_tuple", mod_consts.const_tuple_str_plain_maxval_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxval_tuple) && "mod_consts.const_tuple_str_plain_maxval_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple", mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple) && "mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple", mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple) && "mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1", mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1) && "mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple", mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple) && "mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple", mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple) && "mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_PIL$PalmImagePlugin$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$_COMPRESSION_TYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__COMPRESSION_TYPES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__COMPRESSION_TYPES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__COMPRESSION_TYPES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__COMPRESSION_TYPES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__COMPRESSION_TYPES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__COMPRESSION_TYPES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__COMPRESSION_TYPES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__COMPRESSION_TYPES);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$_FLAGS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FLAGS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FLAGS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FLAGS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FLAGS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$_Palm8BitColormapValues(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__Palm8BitColormapValues);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Palm8BitColormapValues);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Palm8BitColormapValues, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Palm8BitColormapValues);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Palm8BitColormapValues, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__Palm8BitColormapValues);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__Palm8BitColormapValues);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Palm8BitColormapValues);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$_save(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__save);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__save, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__save);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__save, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$build_prototype_image(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_prototype_image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_build_prototype_image);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_build_prototype_image, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_build_prototype_image);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_build_prototype_image, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_prototype_image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_prototype_image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_prototype_image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$o16b(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16b);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o16b);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o16b, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o16b);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o16b, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16b);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16b);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16b);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PalmImagePlugin$o8(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PalmImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PalmImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PalmImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o8);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o8, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o8);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o8, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0240f492cf9d6e28461a526f42bc840a;
static PyCodeObject *code_objects_831cb0cdb5f0c91c0c0be7a0be2bd46d;
static PyCodeObject *code_objects_f572e8fe65fec64f3d3158ac5bbea897;
static PyCodeObject *code_objects_d10a4dfeb7259219ec9471b1ddc41991;
static PyCodeObject *code_objects_10a67173fe559f32139151409df33835;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0c7c91871fc95911d3d69ae4b76010f3); CHECK_OBJECT(module_filename_obj);
code_objects_0240f492cf9d6e28461a526f42bc840a = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc, mod_consts.const_tuple_str_plain_x_str_plain_maxval_tuple, mod_consts.const_tuple_str_plain_maxval_tuple, 1, 0, 0);
code_objects_831cb0cdb5f0c91c0c0be7a0be2bd46d = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc, mod_consts.const_tuple_str_plain_x_str_plain_maxval_str_plain_shift_tuple, mod_consts.const_tuple_str_plain_maxval_str_plain_shift_tuple, 1, 0, 0);
code_objects_f572e8fe65fec64f3d3158ac5bbea897 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1, mod_consts.const_str_digest_e42a83072eecc1ffa39c3ee8de86cdc1, NULL, NULL, 0, 0, 0);
code_objects_d10a4dfeb7259219ec9471b1ddc41991 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_4c0acef837505e7a8a03b2a0a01b6229_tuple, NULL, 3, 0, 0);
code_objects_10a67173fe559f32139151409df33835 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_build_prototype_image, mod_consts.const_str_plain_build_prototype_image, mod_consts.const_tuple_9534640f207de352f6b84d2a281744aa_tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__1_build_prototype_image(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_PIL$PalmImagePlugin$$$function__1_build_prototype_image(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_palettedata = NULL;
PyObject *var_image = NULL;
PyObject *var_colormapValue = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image)) {
    Py_XDECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image = MAKE_FUNCTION_FRAME(tstate, code_objects_10a67173fe559f32139151409df33835, module_PIL$PalmImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image->m_type_description == NULL);
frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image = cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image);
assert(Py_REFCNT(frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_PIL$PalmImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_L;
tmp_tuple_element_1 = const_int_pos_1;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_len_arg_1;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
tmp_len_arg_1 = module_var_accessor_PIL$PalmImagePlugin$_Palm8BitColormapValues(tstate);
if (unlikely(tmp_len_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Palm8BitColormapValues);
}

if (tmp_len_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image;
    var_image = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_list_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_image);
tmp_expression_value_2 = var_image;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_putdata);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_len_arg_2 = module_var_accessor_PIL$PalmImagePlugin$_Palm8BitColormapValues(tstate);
if (unlikely(tmp_len_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Palm8BitColormapValues);
}

if (tmp_len_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_tuple_empty;
{
    PyObject *old = var_palettedata;
    var_palettedata = tmp_assign_source_2;
    Py_INCREF(var_palettedata);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_PIL$PalmImagePlugin$_Palm8BitColormapValues(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Palm8BitColormapValues);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooo";
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
type_description_1 = "ooo";
exception_lineno = 91;
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
    PyObject *old = var_colormapValue;
    var_colormapValue = tmp_assign_source_5;
    Py_INCREF(var_colormapValue);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_palettedata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palettedata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_palettedata;
CHECK_OBJECT(var_colormapValue);
tmp_iadd_expr_right_1 = var_colormapValue;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_6 = tmp_iadd_expr_left_1;
var_palettedata = tmp_assign_source_6;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
nuitka_digit tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_len_arg_3;
if (var_palettedata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palettedata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_palettedata;
tmp_mult_expr_left_1 = mod_consts.const_tuple_int_0_int_0_int_0_tuple;
tmp_sub_expr_left_1 = 256;
tmp_len_arg_3 = module_var_accessor_PIL$PalmImagePlugin$_Palm8BitColormapValues(tstate);
if (unlikely(tmp_len_arg_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Palm8BitColormapValues);
}

if (tmp_len_arg_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_DIGIT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
assert(!(tmp_mult_expr_right_1 == NULL));
tmp_iadd_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_TUPLE_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_TUPLE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_iadd_expr_left_2;
var_palettedata = tmp_assign_source_7;

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_image);
tmp_called_instance_1 = var_image;
CHECK_OBJECT(var_palettedata);
tmp_args_element_value_4 = var_palettedata;
frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image->m_frame.f_lineno = 94;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_putpalette, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image,
    type_description_1,
    var_palettedata,
    var_image,
    var_colormapValue
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image == cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image);
    cache_frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image = NULL;
}

assertFrameObject(frame_frame_PIL$PalmImagePlugin$$$function__1_build_prototype_image);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_image);
tmp_return_value = var_image;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_palettedata);
CHECK_OBJECT(var_palettedata);
Py_DECREF(var_palettedata);
var_palettedata = NULL;
CHECK_OBJECT(var_image);
CHECK_OBJECT(var_image);
Py_DECREF(var_image);
var_image = NULL;
Py_XDECREF(var_colormapValue);
var_colormapValue = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_palettedata);
var_palettedata = NULL;
Py_XDECREF(var_image);
var_image = NULL;
Py_XDECREF(var_colormapValue);
var_colormapValue = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_PIL$PalmImagePlugin$$$function__2__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *var_rawmode = NULL;
PyObject *var_bpp = NULL;
PyObject *var_version = NULL;
struct Nuitka_CellObject *var_maxval = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_shift = Nuitka_Cell_NewEmpty();
PyObject *var_msg = NULL;
PyObject *var_cols = NULL;
PyObject *var_rows = NULL;
PyObject *var_rowbytes = NULL;
PyObject *var_compression_type = NULL;
PyObject *var_flags = NULL;
PyObject *var_colormap = NULL;
PyObject *var_colors = NULL;
PyObject *var_colormapsize = NULL;
PyObject *var_offset = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PalmImagePlugin$$$function__2__save;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save)) {
    Py_XDECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save = MAKE_FUNCTION_FRAME(tstate, code_objects_d10a4dfeb7259219ec9471b1ddc41991, module_PIL$PalmImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_type_description == NULL);
frame_frame_PIL$PalmImagePlugin$$$function__2__save = cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PalmImagePlugin$$$function__2__save);
assert(Py_REFCNT(frame_frame_PIL$PalmImagePlugin$$$function__2__save) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_P;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_plain_P;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_1;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_int_pos_8;
{
    PyObject *old = var_bpp;
    var_bpp = tmp_assign_source_2;
    Py_INCREF(var_bpp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_pos_1;
{
    PyObject *old = var_version;
    var_version = tmp_assign_source_3;
    Py_INCREF(var_version);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_L;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_im);
tmp_expression_value_4 = par_im;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 124;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_bpp_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_6 = par_im;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_bpp;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bpp;
    var_bpp = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
tmp_lshift_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(var_bpp);
tmp_lshift_expr_right_1 = var_bpp;
tmp_sub_expr_left_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_maxval);
    Nuitka_Cell_SET(var_maxval, tmp_assign_source_5);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_sub_expr_left_2 = mod_consts.const_int_pos_8;
CHECK_OBJECT(var_bpp);
tmp_sub_expr_right_2 = var_bpp;
tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_shift);
    Nuitka_Cell_SET(var_shift, tmp_assign_source_6);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
struct Nuitka_CellObject *tmp_closure_1[2];
CHECK_OBJECT(par_im);
tmp_called_instance_1 = par_im;
tmp_closure_1[0] = var_maxval;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_shift;
Py_INCREF(tmp_closure_1[1]);
tmp_args_element_value_1 = MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda(tstate, tmp_closure_1);

frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 131;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_point, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_im;
    assert(old != NULL);
    par_im = tmp_assign_source_7;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_im);
tmp_expression_value_8 = par_im;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_info);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 132;
tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_bpp_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_tuple_int_pos_1_int_pos_2_int_pos_4_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_10 = par_im;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_info);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_bpp;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bpp;
    var_bpp = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_lshift_expr_left_2;
PyObject *tmp_lshift_expr_right_2;
tmp_lshift_expr_left_2 = const_int_pos_1;
CHECK_OBJECT(var_bpp);
tmp_lshift_expr_right_2 = var_bpp;
tmp_sub_expr_left_3 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_maxval);
    Nuitka_Cell_SET(var_maxval, tmp_assign_source_9);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
struct Nuitka_CellObject *tmp_closure_2[1];
CHECK_OBJECT(par_im);
tmp_called_instance_2 = par_im;
tmp_closure_2[0] = var_maxval;
Py_INCREF(tmp_closure_2[0]);
tmp_args_element_value_2 = MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda(tstate, tmp_closure_2);

frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 138;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_point, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_im;
    assert(old != NULL);
    par_im = tmp_assign_source_10;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_mode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooccooooNooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooccooooNooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_11 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 141;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 141;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooccooooNooooooo";
goto frame_exception_exit_1;
}
branch_end_4:;
branch_end_3:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = mod_consts.const_str_plain_P;
CHECK_OBJECT(par_im);
tmp_ass_attr_target_1 = par_im;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__mode, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (var_bpp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bpp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 145;
type_description_1 = "ooooooccooooNooooooo";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = var_bpp;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooccooooNooooooo";
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
tmp_assign_source_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_12 == NULL));
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = const_int_pos_1;
{
    PyObject *old = var_version;
    var_version = tmp_assign_source_13;
    Py_INCREF(var_version);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_im);
tmp_expression_value_12 = par_im;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_1;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_a43c96e669182759de7b6dc21baa30ee;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_14;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = const_int_pos_1;
{
    PyObject *old = var_bpp;
    var_bpp = tmp_assign_source_15;
    Py_INCREF(var_bpp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = const_int_0;
{
    PyObject *old = var_version;
    var_version = tmp_assign_source_16;
    Py_INCREF(var_version);
    Py_XDECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_im);
tmp_expression_value_13 = par_im;
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_mode);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooccooooNooooooo";
    goto tuple_build_exception_3;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooccooooNooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_b43d20f05a758551c31b34868057b826;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_17 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 156;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 156;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooccooooNooooooo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = par_im;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 160;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = par_im;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_size);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_assign_source_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cols;
    var_cols = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = par_im;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_size);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = const_int_pos_1;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_4, 1);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rows;
    var_rows = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
CHECK_OBJECT(var_cols);
tmp_add_expr_left_1 = var_cols;
tmp_floordiv_expr_left_1 = mod_consts.const_int_pos_16;
if (var_bpp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bpp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_floordiv_expr_right_1 = var_bpp;
tmp_sub_expr_left_4 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_add_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_left_2 = mod_consts.const_int_pos_16;
if (var_bpp == NULL) {
Py_DECREF(tmp_truediv_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bpp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_floordiv_expr_right_2 = var_bpp;
tmp_truediv_expr_right_1 = BINARY_OPERATION_FLOORDIV_OBJECT_LONG_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_20 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rowbytes;
    var_rowbytes = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_5;
tmp_expression_value_18 = module_var_accessor_PIL$PalmImagePlugin$_COMPRESSION_TYPES(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__COMPRESSION_TYPES);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_str_plain_none;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_5);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_compression_type;
    var_compression_type = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = const_int_0;
{
    PyObject *old = var_flags;
    var_flags = tmp_assign_source_22;
    Py_INCREF(var_flags);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_19;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = par_im;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_P;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_1 = var_flags;
tmp_expression_value_20 = module_var_accessor_PIL$PalmImagePlugin$_FLAGS(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FLAGS);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = mod_consts.const_str_digest_a75c69442a63e1697d57cc8d8f0d921f;
tmp_ibitor_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_6);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_LONG_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = tmp_ibitor_expr_left_1;
var_flags = tmp_assign_source_23;

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_21;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = par_im;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_im);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 174;
tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_colormap;
    var_colormap = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_floordiv_expr_left_3;
PyObject *tmp_floordiv_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_colormap);
tmp_len_arg_1 = var_colormap;
tmp_floordiv_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_floordiv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_3 = mod_consts.const_int_pos_3;
tmp_assign_source_25 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
CHECK_OBJECT(tmp_floordiv_expr_left_3);
Py_DECREF(tmp_floordiv_expr_left_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_colors;
    var_colors = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_mult_expr_left_2 = mod_consts.const_int_pos_4;
CHECK_OBJECT(var_colors);
tmp_mult_expr_right_2 = var_colors;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_right_2, tmp_mult_expr_left_2);
assert(!(tmp_add_expr_left_2 == NULL));
tmp_add_expr_right_2 = 2;
tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_assign_source_26 == NULL));
{
    PyObject *old = var_colormapsize;
    var_colormapsize = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = const_int_0;
{
    PyObject *old = var_colormapsize;
    var_colormapsize = tmp_assign_source_27;
    Py_INCREF(var_colormapsize);
    Py_XDECREF(old);
}

}
branch_end_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_22;
tmp_cmp_expr_left_7 = mod_consts.const_str_plain_offset;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 180;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_im;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_floordiv_expr_left_4;
PyObject *tmp_floordiv_expr_right_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
CHECK_OBJECT(var_rowbytes);
tmp_mult_expr_left_3 = var_rowbytes;
CHECK_OBJECT(var_rows);
tmp_mult_expr_right_3 = var_rows;
tmp_add_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_5 = mod_consts.const_int_pos_16;
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = mod_consts.const_int_pos_3;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_colormapsize);
tmp_add_expr_right_3 = var_colormapsize;
tmp_floordiv_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_floordiv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_4 = mod_consts.const_int_pos_4;
tmp_assign_source_28 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
CHECK_OBJECT(tmp_floordiv_expr_left_4);
Py_DECREF(tmp_floordiv_expr_left_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = const_int_0;
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_29;
    Py_INCREF(var_offset);
    Py_XDECREF(old);
}

}
branch_end_7:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_fp);
tmp_expression_value_23 = par_fp;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_write);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cols);
tmp_args_element_value_4 = var_cols;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 185;
tmp_add_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rows);
tmp_args_element_value_5 = var_rows;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 185;
tmp_add_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
CHECK_OBJECT(tmp_add_expr_right_8);
Py_DECREF(tmp_add_expr_right_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rowbytes);
tmp_args_element_value_6 = var_rowbytes;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 185;
tmp_add_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_flags);
tmp_args_element_value_7 = var_flags;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 185;
tmp_add_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 185;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(par_fp);
tmp_expression_value_24 = par_fp;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_write);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_PIL$PalmImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 186;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (var_bpp == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bpp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_bpp;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 186;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 186;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 186;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_fp);
tmp_expression_value_25 = par_fp;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_write);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_PIL$PalmImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 187;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_version);
tmp_args_element_value_11 = var_version;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 187;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 187;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 187;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_fp);
tmp_expression_value_26 = par_fp;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_write);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 188;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_offset);
tmp_args_element_value_13 = var_offset;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 188;
tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 188;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 188;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_27;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_15;
CHECK_OBJECT(par_fp);
tmp_expression_value_27 = par_fp;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_write);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_PIL$PalmImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 189;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 189;
tmp_args_element_value_14 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_int_0_tuple);

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 189;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 189;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(par_fp);
tmp_expression_value_28 = par_fp;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_write);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = module_var_accessor_PIL$PalmImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 190;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_compression_type);
tmp_args_element_value_16 = var_compression_type;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 190;
tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_16);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_16);

exception_lineno = 190;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 190;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_29;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_19;
CHECK_OBJECT(par_fp);
tmp_expression_value_29 = par_fp;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_write);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 191;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 191;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts.const_tuple_int_0_tuple);

if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 191;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 191;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
bool tmp_condition_result_8;
CHECK_OBJECT(var_colormapsize);
tmp_condition_result_8 = CHECK_IF_TRUE(var_colormapsize) == 1;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_18;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_19;
CHECK_OBJECT(par_fp);
tmp_expression_value_30 = par_fp;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_write);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_21 = module_var_accessor_PIL$PalmImagePlugin$o16b(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16b);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 196;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (var_colors == NULL) {
Py_DECREF(tmp_called_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_colors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_19 = var_colors;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 196;
tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 196;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 196;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
if (var_colors == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_colors);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_xrange_low_1 = var_colors;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_31 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_31 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooccooooNooooooo";
exception_lineno = 197;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_32 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_32;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_21;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 198;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_31 = par_fp;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_write);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
tmp_called_value_23 = module_var_accessor_PIL$PalmImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 198;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_args_element_value_21 = var_i;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 198;
tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 198;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 198;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_7;
PyObject *tmp_start_value_1;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_32 = par_fp;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_write);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
if (var_colormap == NULL) {
Py_DECREF(tmp_called_value_24);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_colormap);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_33 = var_colormap;
tmp_mult_expr_left_4 = mod_consts.const_int_pos_3;
CHECK_OBJECT(var_i);
tmp_mult_expr_right_4 = var_i;
tmp_start_value_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_left_5 = mod_consts.const_int_pos_3;
CHECK_OBJECT(var_i);
tmp_mult_expr_right_5 = var_i;
tmp_add_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_start_value_1);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_9 = mod_consts.const_int_pos_3;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_start_value_1);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_7 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_7 == NULL));
tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 199;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooccooooNooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_8:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_tuple_element_4;
tmp_expression_value_34 = module_var_accessor_PIL$PalmImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain__save);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
if (par_im == NULL) {
Py_DECREF(tmp_called_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_23 = par_im;
if (par_fp == NULL) {
Py_DECREF(tmp_called_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_24 = par_fp;
tmp_expression_value_35 = module_var_accessor_PIL$PalmImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_25);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain__Tile);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_26 = mod_consts.const_str_plain_raw;
tmp_add_expr_left_10 = mod_consts.const_tuple_int_0_int_0_tuple;
if (par_im == NULL) {
Py_DECREF(tmp_called_value_25);
Py_DECREF(tmp_called_value_26);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_36 = par_im;
tmp_add_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);
Py_DECREF(tmp_called_value_26);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_27 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_right_10);
Py_DECREF(tmp_add_expr_right_10);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);
Py_DECREF(tmp_called_value_26);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_28 = const_int_0;
CHECK_OBJECT(var_rawmode);
tmp_tuple_element_4 = var_rawmode;
tmp_args_element_value_29 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_29, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_rowbytes);
tmp_tuple_element_4 = var_rowbytes;
PyTuple_SET_ITEM0(tmp_args_element_value_29, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_args_element_value_29, 2, tmp_tuple_element_4);
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 203;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 203;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_25 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_25, 0, tmp_list_element_1);
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_37;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = par_fp;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain_flush);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_13;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = par_fp;
frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame.f_lineno = 207;
tmp_call_result_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_flush);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooccooooNooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
branch_no_9:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PalmImagePlugin$$$function__2__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PalmImagePlugin$$$function__2__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PalmImagePlugin$$$function__2__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PalmImagePlugin$$$function__2__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    var_rawmode,
    var_bpp,
    var_version,
    var_maxval,
    var_shift,
    var_msg,
    var_cols,
    var_rows,
    var_rowbytes,
    NULL,
    var_compression_type,
    var_flags,
    var_colormap,
    var_colors,
    var_colormapsize,
    var_offset,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PalmImagePlugin$$$function__2__save == cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save);
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save = NULL;
}

assertFrameObject(frame_frame_PIL$PalmImagePlugin$$$function__2__save);

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
Py_XDECREF(par_im);
par_im = NULL;
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_bpp);
var_bpp = NULL;
CHECK_OBJECT(var_version);
CHECK_OBJECT(var_version);
Py_DECREF(var_version);
var_version = NULL;
CHECK_OBJECT(var_maxval);
CHECK_OBJECT(var_maxval);
Py_DECREF(var_maxval);
var_maxval = NULL;
CHECK_OBJECT(var_shift);
CHECK_OBJECT(var_shift);
Py_DECREF(var_shift);
var_shift = NULL;
CHECK_OBJECT(var_cols);
CHECK_OBJECT(var_cols);
Py_DECREF(var_cols);
var_cols = NULL;
CHECK_OBJECT(var_rows);
CHECK_OBJECT(var_rows);
Py_DECREF(var_rows);
var_rows = NULL;
CHECK_OBJECT(var_rowbytes);
CHECK_OBJECT(var_rowbytes);
Py_DECREF(var_rowbytes);
var_rowbytes = NULL;
CHECK_OBJECT(var_compression_type);
CHECK_OBJECT(var_compression_type);
Py_DECREF(var_compression_type);
var_compression_type = NULL;
CHECK_OBJECT(var_flags);
CHECK_OBJECT(var_flags);
Py_DECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_colormap);
var_colormap = NULL;
Py_XDECREF(var_colors);
var_colors = NULL;
CHECK_OBJECT(var_colormapsize);
CHECK_OBJECT(var_colormapsize);
Py_DECREF(var_colormapsize);
var_colormapsize = NULL;
CHECK_OBJECT(var_offset);
CHECK_OBJECT(var_offset);
Py_DECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_im);
par_im = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_bpp);
var_bpp = NULL;
Py_XDECREF(var_version);
var_version = NULL;
CHECK_OBJECT(var_maxval);
CHECK_OBJECT(var_maxval);
Py_DECREF(var_maxval);
var_maxval = NULL;
CHECK_OBJECT(var_shift);
CHECK_OBJECT(var_shift);
Py_DECREF(var_shift);
var_shift = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_cols);
var_cols = NULL;
Py_XDECREF(var_rows);
var_rows = NULL;
Py_XDECREF(var_rowbytes);
var_rowbytes = NULL;
Py_XDECREF(var_compression_type);
var_compression_type = NULL;
Py_XDECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_colormap);
var_colormap = NULL;
Py_XDECREF(var_colors);
var_colors = NULL;
Py_XDECREF(var_colormapsize);
var_colormapsize = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_831cb0cdb5f0c91c0c0be7a0be2bd46d, module_PIL$PalmImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda->m_type_description == NULL);
frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda = cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maxval);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_x);
tmp_rshift_expr_left_1 = par_x;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shift);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_rshift_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_sub_expr_right_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_OBJECT(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda,
    type_description_1,
    par_x,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda == cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda);
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda)) {
    Py_XDECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_0240f492cf9d6e28461a526f42bc840a, module_PIL$PalmImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda->m_type_description == NULL);
frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda = cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda);
assert(Py_REFCNT(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda) == 2);

// Framed code:
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maxval);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_x);
tmp_bitand_expr_left_1 = par_x;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_maxval);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_bitand_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_sub_expr_right_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda,
    type_description_1,
    par_x,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda == cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda);
    cache_frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda = NULL;
}

assertFrameObject(frame_frame_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__1_build_prototype_image(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PalmImagePlugin$$$function__1_build_prototype_image,
        mod_consts.const_str_plain_build_prototype_image,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_10a67173fe559f32139151409df33835,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PalmImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PalmImagePlugin$$$function__2__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d10a4dfeb7259219ec9471b1ddc41991,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PalmImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc,
#endif
        code_objects_831cb0cdb5f0c91c0c0be7a0be2bd46d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$PalmImagePlugin,
        NULL,
        closure,
        2
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4621a4026644fa18656e149a28e882cc,
#endif
        code_objects_0240f492cf9d6e28461a526f42bc840a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$PalmImagePlugin,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_PIL$PalmImagePlugin[] = {
impl_PIL$PalmImagePlugin$$$function__2__save$$$function__1_lambda,
impl_PIL$PalmImagePlugin$$$function__2__save$$$function__2_lambda,
impl_PIL$PalmImagePlugin$$$function__1_build_prototype_image,
impl_PIL$PalmImagePlugin$$$function__2__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$PalmImagePlugin);
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
        module_PIL$PalmImagePlugin,
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
        function_table_PIL$PalmImagePlugin,
        sizeof(function_table_PIL$PalmImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.PalmImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$PalmImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$PalmImagePlugin");

    // Store the module for future use.
    module_PIL$PalmImagePlugin = module;

    moduledict_PIL$PalmImagePlugin = MODULE_DICT(module_PIL$PalmImagePlugin);

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
        PRINT_STRING("PIL$PalmImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$PalmImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$PalmImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PalmImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$PalmImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$PalmImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$PalmImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$PalmImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PalmImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PalmImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$PalmImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$PalmImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PalmImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$PalmImagePlugin = MAKE_MODULE_FRAME(code_objects_f572e8fe65fec64f3d3158ac5bbea897, module_PIL$PalmImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PalmImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$PalmImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$PalmImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$PalmImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$PalmImagePlugin,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$PalmImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 13;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

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
        (PyObject *)moduledict_PIL$PalmImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_8);
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
        (PyObject *)moduledict_PIL$PalmImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_9);
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
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$PalmImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_o8_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 14;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$PalmImagePlugin,
        mod_consts.const_str_plain_o8,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_o8);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$PalmImagePlugin;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_o16be_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 15;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$PalmImagePlugin,
        mod_consts.const_str_plain_o16be,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_o16be);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16b, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_tuple_856c2cff151a9d3b234a86b2d9bc1b9c_tuple;
UPDATE_STRING_DICT0(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__Palm8BitColormapValues, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_5ce1bfa351b2a5220fcd4fa6c5a1527d);

tmp_assign_source_13 = MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__1_build_prototype_image(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_build_prototype_image, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_PIL$PalmImagePlugin$build_prototype_image(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 98;
tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Palm8BitColormapImage, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = DICT_COPY(tstate, mod_consts.const_dict_00ceb7b8fdd201e0b89dd9f176a81c77);
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = DICT_COPY(tstate, mod_consts.const_dict_304b9ed3f71b2bf6477b3104306639d4);
UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__COMPRESSION_TYPES, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_17 = MAKE_FUNCTION_PIL$PalmImagePlugin$$$function__2__save(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_17);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_PIL$PalmImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_register_save);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_PALM;
tmp_args_element_value_2 = module_var_accessor_PIL$PalmImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 213;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
tmp_called_instance_1 = module_var_accessor_PIL$PalmImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 215;
tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_register_extension,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PALM_str_digest_d87816bc9452735406a8a8e5c9f109e8_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
tmp_called_instance_2 = module_var_accessor_PIL$PalmImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PalmImagePlugin->m_frame.f_lineno = 217;
tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_register_mime,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PALM_str_digest_a1c7ee7f555f70786006353f2913514f_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PalmImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PalmImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PalmImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$PalmImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$PalmImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PalmImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$PalmImagePlugin);
    return module_PIL$PalmImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PalmImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$PalmImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
