/* Generated code for Python module 'PIL$PcxImagePlugin'
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



/* The "module_PIL$PcxImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$PcxImagePlugin;
PyDictObject *moduledict_PIL$PcxImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_pos_10;
PyObject *const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple;
PyObject *const_str_plain_fp;
PyObject *const_tuple_int_pos_68_tuple;
PyObject *const_str_plain__accept;
PyObject *const_str_digest_0d12879c501c05b4235d465d850bbed0;
PyObject *const_str_plain_i16;
PyObject *const_int_pos_4;
PyObject *const_int_pos_6;
PyObject *const_int_pos_8;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_str_digest_551a5df7d7d8b163a684e5e75638db9a;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_debug;
PyObject *const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple;
PyObject *const_str_plain_tell;
PyObject *const_int_pos_60;
PyObject *const_int_pos_65;
PyObject *const_int_pos_66;
PyObject *const_str_digest_967e0516f71e15a94ed123d3274922f7;
PyObject *const_int_pos_12;
PyObject *const_int_pos_14;
PyObject *const_str_plain_info;
PyObject *const_str_plain_dpi;
PyObject *const_str_plain_1;
PyObject *const_tuple_int_pos_2_int_pos_4_tuple;
PyObject *const_str_plain_P;
PyObject *const_str_digest_acef99c171b3bba59b66de09686b1e3a;
PyObject *const_str_plain_L;
PyObject *const_str_plain_ImagePalette;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_RGB;
PyObject *const_slice_int_pos_16_int_pos_64_none;
PyObject *const_str_plain_palette;
PyObject *const_int_pos_5;
PyObject *const_str_plain_seek;
PyObject *const_int_neg_769;
PyObject *const_str_plain_SEEK_END;
PyObject *const_tuple_int_pos_769_tuple;
PyObject *const_xrange_0_256;
PyObject *const_str_plain_o8;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_digest_ee4a3fba8fc3306e6cef526eeff90632;
PyObject *const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c;
PyObject *const_str_plain__mode;
PyObject *const_str_plain__size;
PyObject *const_int_pos_7;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_size;
PyObject *const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_pcx;
PyObject *const_str_plain_tile;
PyObject *const_str_plain_width;
PyObject *const_str_plain_height;
PyObject *const_str_digest_b0cec86185e39bd0c5dc82a3b6340870;
PyObject *const_str_plain_SAVE;
PyObject *const_str_plain_mode;
PyObject *const_str_digest_a508553cd96e48f19a896382de5e1c41;
PyObject *const_str_digest_931de5cf03bd28ecdc0590bab975e982;
PyObject *const_str_digest_b87d35a884f706ee4d0ac945e8363580;
PyObject *const_str_plain_write;
PyObject *const_tuple_int_pos_10_tuple;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_o16;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_int_pos_100_tuple;
PyObject *const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b;
PyObject *const_bytes_digest_5a2cb523029509e16cff75c520ff10e3;
PyObject *const_bytes_null;
PyObject *const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56;
PyObject *const_int_pos_128;
PyObject *const_str_plain__save;
PyObject *const_tuple_int_pos_12_tuple;
PyObject *const_str_plain_im;
PyObject *const_str_plain_getpalette;
PyObject *const_tuple_str_plain_RGB_str_plain_RGB_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_IO;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain__binary;
PyObject *const_tuple_str_plain_i16le_tuple;
PyObject *const_str_plain_i16le;
PyObject *const_tuple_str_plain_o8_tuple;
PyObject *const_tuple_str_plain_o16le_tuple;
PyObject *const_str_plain_o16le;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple;
PyObject *const_dict_38f5e37decacb42d0c9efbc0c4d3adea;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_PcxImageFile;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396;
PyObject *const_int_pos_49;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_PCX;
PyObject *const_str_plain_Paintbrush;
PyObject *const_str_plain_format_description;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__open;
PyObject *const_str_digest_0983da16e16604ce68fab438fa8c9b57;
PyObject *const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_3c0ed0f068d80926c0ec5de5723ebe35;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain_register_open;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_register_extension;
PyObject *const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d;
PyObject *const_str_plain_register_mime;
PyObject *const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a;
PyObject *const_str_digest_f927ae3a3985f3358218761b499be518;
PyObject *const_str_digest_04eb5dc6bed88167ff0b8a094893fecd;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_prefix_tuple;
PyObject *const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple;
PyObject *const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[127];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.PcxImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 127) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 127 values, got %d\n",
                    UN_TRANSLATE("PIL.PcxImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple", mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_68_tuple", mod_consts.const_tuple_int_pos_68_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_68_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0", mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a", mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logger", mod_consts.const_str_plain_logger);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple", mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_60", mod_consts.const_int_pos_60);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7", mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dpi", mod_consts.const_str_plain_dpi);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_pos_4_tuple", mod_consts.const_tuple_int_pos_2_int_pos_4_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a", mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_16_int_pos_64_none", mod_consts.const_slice_int_pos_16_int_pos_64_none);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_16_int_pos_64_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_769", mod_consts.const_int_neg_769);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_neg_769);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEEK_END", mod_consts.const_str_plain_SEEK_END);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_END);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_769_tuple", mod_consts.const_tuple_int_pos_769_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_769_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_xrange_0_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_o8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632", mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c", mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple", mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pcx", mod_consts.const_str_plain_pcx);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_pcx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870", mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SAVE", mod_consts.const_str_plain_SAVE);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_SAVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41", mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982", mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580", mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_tuple", mod_consts.const_tuple_int_pos_10_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16", mod_consts.const_str_plain_o16);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_100_tuple", mod_consts.const_tuple_int_pos_100_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_100_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b", mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3", mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56", mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_12_tuple", mod_consts.const_tuple_int_pos_12_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16le_tuple", mod_consts.const_tuple_str_plain_o16le_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple", mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PcxImageFile", mod_consts.const_str_plain_PcxImageFile);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_PcxImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396", mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_49", mod_consts.const_int_pos_49);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_49);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PCX", mod_consts.const_str_plain_PCX);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_PCX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Paintbrush", mod_consts.const_str_plain_Paintbrush);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Paintbrush);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57", mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple", mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35", mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d", mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a", mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518", mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd", mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple", mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple", mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple);
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
void checkModuleConstants_PIL$PcxImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_pos_10) && "mod_consts.const_int_pos_10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple", mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple) && "mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_68_tuple", mod_consts.const_tuple_int_pos_68_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_68_tuple) && "mod_consts.const_tuple_int_pos_68_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__accept) && "mod_consts.const_str_plain__accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0", mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0) && "mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16) && "mod_consts.const_str_plain_i16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a", mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a) && "mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logger", mod_consts.const_str_plain_logger);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger) && "mod_consts.const_str_plain_logger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug) && "mod_consts.const_str_plain_debug");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple", mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple) && "mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_60", mod_consts.const_int_pos_60);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_int_pos_60) && "mod_consts.const_int_pos_60");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_65) && "mod_consts.const_int_pos_65");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_66) && "mod_consts.const_int_pos_66");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7", mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7) && "mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_12) && "mod_consts.const_int_pos_12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dpi", mod_consts.const_str_plain_dpi);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpi) && "mod_consts.const_str_plain_dpi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_1) && "mod_consts.const_str_plain_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_pos_4_tuple", mod_consts.const_tuple_int_pos_2_int_pos_4_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_2_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a", mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a) && "mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette) && "mod_consts.const_str_plain_ImagePalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_16_int_pos_64_none", mod_consts.const_slice_int_pos_16_int_pos_64_none);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_16_int_pos_64_none) && "mod_consts.const_slice_int_pos_16_int_pos_64_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette) && "mod_consts.const_str_plain_palette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_769", mod_consts.const_int_neg_769);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_neg_769) && "mod_consts.const_int_neg_769");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEEK_END", mod_consts.const_str_plain_SEEK_END);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_END) && "mod_consts.const_str_plain_SEEK_END");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_769_tuple", mod_consts.const_tuple_int_pos_769_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_769_tuple) && "mod_consts.const_tuple_int_pos_769_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_xrange_0_256) && "mod_consts.const_xrange_0_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_o8) && "mod_consts.const_str_plain_o8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none) && "mod_consts.const_slice_int_pos_1_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632", mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632) && "mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c", mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c) && "mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple", mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple) && "mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pcx", mod_consts.const_str_plain_pcx);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_pcx) && "mod_consts.const_str_plain_pcx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_tile) && "mod_consts.const_str_plain_tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870", mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870) && "mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SAVE", mod_consts.const_str_plain_SAVE);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_SAVE) && "mod_consts.const_str_plain_SAVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41", mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41) && "mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982", mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982) && "mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580", mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580) && "mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_10_tuple", mod_consts.const_tuple_int_pos_10_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_10_tuple) && "mod_consts.const_tuple_int_pos_10_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16", mod_consts.const_str_plain_o16);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16) && "mod_consts.const_str_plain_o16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_100_tuple", mod_consts.const_tuple_int_pos_100_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_100_tuple) && "mod_consts.const_tuple_int_pos_100_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b", mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b) && "mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3", mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3) && "mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_bytes_null) && "mod_consts.const_bytes_null");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56", mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56) && "mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_12_tuple", mod_consts.const_tuple_int_pos_12_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_12_tuple) && "mod_consts.const_tuple_int_pos_12_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple) && "mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO) && "mod_consts.const_str_plain_IO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__binary) && "mod_consts.const_str_plain__binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple) && "mod_consts.const_tuple_str_plain_i16le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16le) && "mod_consts.const_str_plain_i16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple) && "mod_consts.const_tuple_str_plain_o8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16le_tuple", mod_consts.const_tuple_str_plain_o16le_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16le_tuple) && "mod_consts.const_tuple_str_plain_o16le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16le) && "mod_consts.const_str_plain_o16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple", mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple) && "mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea) && "mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PcxImageFile", mod_consts.const_str_plain_PcxImageFile);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_PcxImageFile) && "mod_consts.const_str_plain_PcxImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396", mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396) && "mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_49", mod_consts.const_int_pos_49);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_49) && "mod_consts.const_int_pos_49");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PCX", mod_consts.const_str_plain_PCX);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_PCX) && "mod_consts.const_str_plain_PCX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Paintbrush", mod_consts.const_str_plain_Paintbrush);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Paintbrush) && "mod_consts.const_str_plain_Paintbrush");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_description) && "mod_consts.const_str_plain_format_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__open) && "mod_consts.const_str_plain__open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57", mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57) && "mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple", mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple) && "mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35", mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35) && "mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_open) && "mod_consts.const_str_plain_register_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d", mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d) && "mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a", mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a) && "mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518", mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518) && "mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd", mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd) && "mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple) && "mod_consts.const_tuple_str_plain_prefix_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple", mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple) && "mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple", mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple) && "mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_PIL$PcxImagePlugin$Image(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$ImagePalette(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImagePalette);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImagePalette, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImagePalette);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImagePalette, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PcxImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PcxImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PcxImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PcxImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PcxImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PcxImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PcxImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PcxImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$SAVE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SAVE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SAVE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SAVE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SAVE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$_accept(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$_save(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$i16(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$o16(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o16);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o16, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o16);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o16, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$PcxImagePlugin$o8(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$PcxImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$PcxImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$PcxImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_55170ab22de4ced9e596f4b78cb9cc26;
static PyCodeObject *code_objects_4e92f5183e878a7b13d299403752eae6;
static PyCodeObject *code_objects_e1a4e34ce2a640ce931606997dd1e0d3;
static PyCodeObject *code_objects_62338524a88cbc81f4d1eb8669e8c072;
static PyCodeObject *code_objects_b94a230b32c7bb8bde81fe3016bb8439;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f927ae3a3985f3358218761b499be518); CHECK_OBJECT(module_filename_obj);
code_objects_55170ab22de4ced9e596f4b78cb9cc26 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd, mod_consts.const_str_digest_04eb5dc6bed88167ff0b8a094893fecd, NULL, NULL, 0, 0, 0);
code_objects_4e92f5183e878a7b13d299403752eae6 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PcxImageFile, mod_consts.const_str_plain_PcxImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e1a4e34ce2a640ce931606997dd1e0d3 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__accept, mod_consts.const_str_plain__accept, mod_consts.const_tuple_str_plain_prefix_tuple, NULL, 1, 0, 0);
code_objects_62338524a88cbc81f4d1eb8669e8c072 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57, mod_consts.const_tuple_c88e85f248fd9463ea41ac68caa5b9db_tuple, NULL, 1, 0, 0);
code_objects_b94a230b32c7bb8bde81fe3016bb8439 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_ab42de87a0b0b5ac485a1d06cda0936c_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__3__save(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$PcxImagePlugin$$$function__1__accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$PcxImagePlugin$$$function__1__accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept)) {
    Py_XDECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept = MAKE_FUNCTION_FRAME(tstate, code_objects_e1a4e34ce2a640ce931606997dd1e0d3, module_PIL$PcxImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept->m_type_description == NULL);
frame_frame_PIL$PcxImagePlugin$$$function__1__accept = cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PcxImagePlugin$$$function__1__accept);
assert(Py_REFCNT(frame_frame_PIL$PcxImagePlugin$$$function__1__accept) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_left_value_1_cbool_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_prefix);
tmp_len_arg_1 = par_prefix;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_value_1 = (tmp_tmp_and_left_value_1_cbool_1 != false) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_prefix);
tmp_expression_value_1 = par_prefix;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_10;
tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_prefix);
tmp_expression_value_2 = par_prefix;
tmp_subscript_value_2 = const_int_pos_1;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_int_0_int_pos_2_int_pos_3_int_pos_5_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_2);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PcxImagePlugin$$$function__1__accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PcxImagePlugin$$$function__1__accept,
    type_description_1,
    par_prefix
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PcxImagePlugin$$$function__1__accept == cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept);
    cache_frame_frame_PIL$PcxImagePlugin$$$function__1__accept = NULL;
}

assertFrameObject(frame_frame_PIL$PcxImagePlugin$$$function__1__accept);

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


static PyObject *impl_PIL$PcxImagePlugin$$$function__2__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_s = NULL;
PyObject *var_bbox = NULL;
PyObject *var_offset = NULL;
PyObject *var_version = NULL;
PyObject *var_bits = NULL;
PyObject *var_planes = NULL;
PyObject *var_provided_stride = NULL;
PyObject *var_mode = NULL;
PyObject *var_rawmode = NULL;
PyObject *var_i = NULL;
PyObject *var_stride = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PcxImagePlugin$$$function__2__open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open)) {
    Py_XDECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open = MAKE_FUNCTION_FRAME(tstate, code_objects_62338524a88cbc81f4d1eb8669e8c072, module_PIL$PcxImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_type_description == NULL);
frame_frame_PIL$PcxImagePlugin$$$function__2__open = cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PcxImagePlugin$$$function__2__open);
assert(Py_REFCNT(frame_frame_PIL$PcxImagePlugin$$$function__2__open) == 2);

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


exception_lineno = 55;
type_description_1 = "ooNoooooooooo";
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
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 55;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooooooooo";
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


exception_lineno = 57;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 57;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_68_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooooooooo";
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
tmp_called_value_1 = module_var_accessor_PIL$PcxImagePlugin$_accept(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_1 = var_s;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 58;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooNoooooooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0d12879c501c05b4235d465d850bbed0;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 60;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 60;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_2 = var_s;
tmp_args_element_value_3 = mod_consts.const_int_pos_4;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyTuple_SET_ITEM(tmp_assign_source_2, 0, tmp_tuple_element_1);
tmp_called_value_3 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_4 = var_s;
tmp_args_element_value_5 = mod_consts.const_int_pos_6;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
tmp_called_value_4 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_6 = var_s;
tmp_args_element_value_7 = mod_consts.const_int_pos_8;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
tmp_add_expr_right_1 = const_int_pos_1;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 2, tmp_tuple_element_1);
tmp_called_value_5 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_8 = var_s;
tmp_args_element_value_9 = mod_consts.const_int_pos_10;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 63;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_add_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_bbox;
    var_bbox = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_bbox);
tmp_expression_value_3 = var_bbox;
tmp_subscript_value_1 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bbox);
tmp_expression_value_4 = var_bbox;
tmp_subscript_value_2 = const_int_0;
tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 0);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_bbox);
tmp_expression_value_5 = var_bbox;
tmp_subscript_value_3 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 3);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bbox);
tmp_expression_value_6 = var_bbox;
tmp_subscript_value_4 = const_int_pos_1;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_551a5df7d7d8b163a684e5e75638db9a;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 66;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_expression_value_7 = module_var_accessor_PIL$PcxImagePlugin$logger(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_debug);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = mod_consts.const_tuple_str_digest_e54e18f59480fa4becccdb1e8c823dc6_tuple;
CHECK_OBJECT(var_bbox);
tmp_direct_call_arg3_1 = var_bbox;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fp);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 69;
tmp_add_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_int_pos_60;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_s);
tmp_expression_value_9 = var_s;
tmp_subscript_value_5 = const_int_pos_1;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_version;
    var_version = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_s);
tmp_expression_value_10 = var_s;
tmp_subscript_value_6 = mod_consts.const_int_pos_3;
tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bits;
    var_bits = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_s);
tmp_expression_value_11 = var_s;
tmp_subscript_value_7 = mod_consts.const_int_pos_65;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 65);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_planes;
    var_planes = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_6 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_10 = var_s;
tmp_args_element_value_11 = mod_consts.const_int_pos_66;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_provided_stride;
    var_provided_stride = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_instance_3 = module_var_accessor_PIL$PcxImagePlugin$logger(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = mod_consts.const_str_digest_967e0516f71e15a94ed123d3274922f7;
CHECK_OBJECT(var_version);
tmp_args_element_value_13 = var_version;
CHECK_OBJECT(var_bits);
tmp_args_element_value_14 = var_bits;
CHECK_OBJECT(var_planes);
tmp_args_element_value_15 = var_planes;
CHECK_OBJECT(var_provided_stride);
tmp_args_element_value_16 = var_provided_stride;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 76;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS5(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_ass_subscript_1;
tmp_called_value_7 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_17 = var_s;
tmp_args_element_value_18 = mod_consts.const_int_pos_12;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyTuple_SET_ITEM(tmp_ass_subvalue_1, 0, tmp_tuple_element_2);
tmp_called_value_8 = module_var_accessor_PIL$PcxImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_19 = var_s;
tmp_args_element_value_20 = mod_consts.const_int_pos_14;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_ass_subvalue_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_dpi;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_bits);
tmp_cmp_expr_left_4 = var_bits;
tmp_cmp_expr_right_4 = const_int_pos_1;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_planes);
tmp_cmp_expr_left_5 = var_planes;
tmp_cmp_expr_right_5 = const_int_pos_1;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_1;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_8;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_str_plain_1;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_9;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_bits);
tmp_cmp_expr_left_6 = var_bits;
tmp_cmp_expr_right_6 = const_int_pos_1;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_planes);
tmp_cmp_expr_left_7 = var_planes;
tmp_cmp_expr_right_7 = mod_consts.const_tuple_int_pos_2_int_pos_4_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_str_plain_P;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_10;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_acef99c171b3bba59b66de09686b1e3a;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_planes);
tmp_format_value_1 = var_planes;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_plain_L;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_11 == NULL));
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
PyObject *tmp_ass_attr_target_1;
tmp_expression_value_13 = module_var_accessor_PIL$PcxImagePlugin$ImagePalette(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_raw);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = mod_consts.const_str_plain_RGB;
CHECK_OBJECT(var_s);
tmp_expression_value_14 = var_s;
tmp_subscript_value_8 = mod_consts.const_slice_int_pos_16_int_pos_64_none;
tmp_args_element_value_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 92;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_palette, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_version);
tmp_cmp_expr_left_8 = var_version;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_5;
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_bits);
tmp_cmp_expr_left_9 = var_bits;
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_8;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_planes);
tmp_cmp_expr_left_10 = var_planes;
tmp_cmp_expr_right_10 = const_int_pos_1;
tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_6 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_6 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_plain_L;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_12;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_str_plain_L;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_13;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_fp);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_23 = mod_consts.const_int_neg_769;
tmp_expression_value_17 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_17 == NULL));
tmp_args_element_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_SEEK_END);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 97;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_fp);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 98;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_769_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_s;
    assert(old != NULL);
    var_s = tmp_assign_source_14;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_11;
nuitka_digit tmp_cmp_expr_right_11;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_left_value_5_cbool_1;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(var_s);
tmp_len_arg_1 = var_s;
tmp_cmp_expr_left_11 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = 769;
tmp_tmp_and_left_value_5_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
tmp_and_left_value_5 = tmp_tmp_and_left_value_5_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_s);
tmp_expression_value_19 = var_s;
tmp_subscript_value_9 = const_int_0;
tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_9, 0);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = mod_consts.const_int_pos_12;
tmp_and_right_value_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_and_right_value_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_7 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_256;
tmp_assign_source_15 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_15 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooNoooooooooo";
exception_lineno = 101;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_17 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_17;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_10;
PyObject *tmp_start_value_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_25;
CHECK_OBJECT(var_s);
tmp_expression_value_20 = var_s;
CHECK_OBJECT(var_i);
tmp_mult_expr_left_1 = var_i;
tmp_mult_expr_right_1 = mod_consts.const_int_pos_3;
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_4 = const_int_pos_1;
tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_2 = var_i;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_3;
tmp_add_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_5 = mod_consts.const_int_pos_4;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_10 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_10 == NULL));
tmp_cmp_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_11 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_13);

exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_i);
tmp_args_element_value_25 = var_i;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 102;
tmp_mult_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_25);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_13);

exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_mult_expr_right_3 = mod_consts.const_int_pos_3;
tmp_cmp_expr_right_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_cmp_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_13);

exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
CHECK_OBJECT(tmp_cmp_expr_right_13);
Py_DECREF(tmp_cmp_expr_right_13);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNoooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = mod_consts.const_str_plain_P;
{
    PyObject *old = var_mode;
    assert(old != NULL);
    var_mode = tmp_assign_source_18;
    Py_INCREF(var_mode);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_plain_P;
{
    PyObject *old = var_rawmode;
    assert(old != NULL);
    var_rawmode = tmp_assign_source_19;
    Py_INCREF(var_rawmode);
    Py_DECREF(old);
}

}
goto loop_end_1;
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooNoooooooooo";
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
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_mode);
tmp_cmp_expr_left_14 = var_mode;
tmp_cmp_expr_right_14 = mod_consts.const_str_plain_P;
tmp_condition_result_9 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_11;
PyObject *tmp_ass_attr_target_2;
tmp_expression_value_21 = module_var_accessor_PIL$PcxImagePlugin$ImagePalette(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_raw);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_26 = mod_consts.const_str_plain_RGB;
CHECK_OBJECT(var_s);
tmp_expression_value_22 = var_s;
tmp_subscript_value_11 = mod_consts.const_slice_int_pos_1_none_none;
tmp_args_element_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_11);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 106;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_palette, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_6;
nuitka_bool tmp_and_left_value_6;
nuitka_bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(var_version);
tmp_cmp_expr_left_15 = var_version;
tmp_cmp_expr_right_15 = mod_consts.const_int_pos_5;
tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_bits);
tmp_cmp_expr_left_16 = var_bits;
tmp_cmp_expr_right_16 = mod_consts.const_int_pos_8;
tmp_and_left_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_and_left_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(var_planes);
tmp_cmp_expr_left_17 = var_planes;
tmp_cmp_expr_right_17 = mod_consts.const_int_pos_3;
tmp_and_right_value_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_and_right_value_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_and_right_value_6 = tmp_and_left_value_7;
and_end_7:;
tmp_condition_result_10 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_10 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_plain_RGB;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_20;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_str_digest_ee4a3fba8fc3306e6cef526eeff90632;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_21;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_8cbba8fc4fff7c642b8b126d5315d50c;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 114;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 114;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooooooooo";
goto frame_exception_exit_1;
}
branch_end_10:;
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(var_mode);
tmp_ass_attr_value_3 = var_mode;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__mode, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_12;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(var_bbox);
tmp_expression_value_23 = var_bbox;
tmp_subscript_value_12 = mod_consts.const_int_pos_2;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_12, 2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bbox);
tmp_expression_value_24 = var_bbox;
tmp_subscript_value_13 = const_int_0;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_13, 0);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_14;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_15;
PyTuple_SET_ITEM(tmp_ass_attr_value_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_bbox);
tmp_expression_value_25 = var_bbox;
tmp_subscript_value_14 = mod_consts.const_int_pos_3;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_14, 3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_4;
}
CHECK_OBJECT(var_bbox);
tmp_expression_value_26 = var_bbox;
tmp_subscript_value_15 = const_int_pos_1;
tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_15, 1);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_ass_attr_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__size, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__size);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_16 = const_int_0;
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_16, 0);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_mult_expr_right_4 = var_bits;
tmp_add_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = mod_consts.const_int_pos_7;
tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_8;
tmp_assign_source_22 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stride;
    var_stride = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(var_provided_stride);
tmp_cmp_expr_left_18 = var_provided_stride;
CHECK_OBJECT(var_stride);
tmp_cmp_expr_right_18 = var_stride;
tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_stride);
tmp_iadd_expr_left_1 = var_stride;
CHECK_OBJECT(var_stride);
tmp_mod_expr_left_1 = var_stride;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = tmp_iadd_expr_left_1;
var_stride = tmp_assign_source_23;

}
branch_no_11:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_expression_value_29;
tmp_add_expr_left_7 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_add_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bbox;
    assert(old != NULL);
    var_bbox = tmp_assign_source_24;
    Py_DECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_30;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_4;
tmp_expression_value_30 = module_var_accessor_PIL$PcxImagePlugin$logger(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_debug);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_2 = mod_consts.const_tuple_str_digest_3d24b4a1117dc7d50077a3122eef4dcb_tuple;
CHECK_OBJECT(par_self);
tmp_expression_value_31 = par_self;
tmp_direct_call_arg3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_size);
if (tmp_direct_call_arg3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_2);

exception_lineno = 130;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_call_result_4 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
PyObject *tmp_tuple_element_5;
PyObject *tmp_ass_attr_target_5;
tmp_expression_value_32 = module_var_accessor_PIL$PcxImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain__Tile);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_28 = mod_consts.const_str_plain_pcx;
CHECK_OBJECT(var_bbox);
tmp_args_element_value_29 = var_bbox;
CHECK_OBJECT(var_offset);
tmp_args_element_value_30 = var_offset;
CHECK_OBJECT(var_rawmode);
tmp_tuple_element_5 = var_rawmode;
tmp_args_element_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyTuple_SET_ITEM0(tmp_args_element_value_31, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_planes);
tmp_mult_expr_left_5 = var_planes;
CHECK_OBJECT(var_stride);
tmp_mult_expr_right_5 = var_stride;
tmp_tuple_element_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooNoooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_args_element_value_31, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_args_element_value_31);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame.f_lineno = 132;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooNoooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_5 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_ass_attr_value_5, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_tile, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooNoooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PcxImagePlugin$$$function__2__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PcxImagePlugin$$$function__2__open,
    type_description_1,
    par_self,
    var_s,
    NULL,
    var_bbox,
    var_offset,
    var_version,
    var_bits,
    var_planes,
    var_provided_stride,
    var_mode,
    var_rawmode,
    var_i,
    var_stride
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PcxImagePlugin$$$function__2__open == cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open);
    cache_frame_frame_PIL$PcxImagePlugin$$$function__2__open = NULL;
}

assertFrameObject(frame_frame_PIL$PcxImagePlugin$$$function__2__open);

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
Py_XDECREF(var_s);
var_s = NULL;
CHECK_OBJECT(var_bbox);
CHECK_OBJECT(var_bbox);
Py_DECREF(var_bbox);
var_bbox = NULL;
CHECK_OBJECT(var_offset);
CHECK_OBJECT(var_offset);
Py_DECREF(var_offset);
var_offset = NULL;
CHECK_OBJECT(var_version);
CHECK_OBJECT(var_version);
Py_DECREF(var_version);
var_version = NULL;
CHECK_OBJECT(var_bits);
CHECK_OBJECT(var_bits);
Py_DECREF(var_bits);
var_bits = NULL;
CHECK_OBJECT(var_planes);
CHECK_OBJECT(var_planes);
Py_DECREF(var_planes);
var_planes = NULL;
CHECK_OBJECT(var_provided_stride);
CHECK_OBJECT(var_provided_stride);
Py_DECREF(var_provided_stride);
var_provided_stride = NULL;
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_i);
var_i = NULL;
CHECK_OBJECT(var_stride);
CHECK_OBJECT(var_stride);
Py_DECREF(var_stride);
var_stride = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_bbox);
var_bbox = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_version);
var_version = NULL;
Py_XDECREF(var_bits);
var_bits = NULL;
Py_XDECREF(var_planes);
var_planes = NULL;
Py_XDECREF(var_provided_stride);
var_provided_stride = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_stride);
var_stride = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


static PyObject *impl_PIL$PcxImagePlugin$$$function__3__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *var_msg = NULL;
PyObject *var_version = NULL;
PyObject *var_bits = NULL;
PyObject *var_planes = NULL;
PyObject *var_rawmode = NULL;
PyObject *var_e = NULL;
PyObject *var_stride = NULL;
PyObject *var_screen = NULL;
PyObject *var_palette = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$PcxImagePlugin$$$function__3__save;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save)) {
    Py_XDECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save = MAKE_FUNCTION_FRAME(tstate, code_objects_b94a230b32c7bb8bde81fe3016bb8439, module_PIL$PcxImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_type_description == NULL);
frame_frame_PIL$PcxImagePlugin$$$function__3__save = cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PcxImagePlugin$$$function__3__save);
assert(Py_REFCNT(frame_frame_PIL$PcxImagePlugin$$$function__3__save) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_width);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_height);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b0cec86185e39bd0c5dc82a3b6340870;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 151;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 151;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooNoo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_3 = module_var_accessor_PIL$PcxImagePlugin$SAVE(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SAVE);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_im);
tmp_expression_value_4 = par_im;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_mode);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_4;
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin$$$function__3__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin$$$function__3__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_6); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_6;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a508553cd96e48f19a896382de5e1c41;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im);
tmp_expression_value_5 = par_im;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooNoo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooNoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_931de5cf03bd28ecdc0590bab975e982;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 157;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 157;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooNoo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 153;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame)) {
        frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooNoo";
goto try_except_handler_5;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_version;
    var_version = tmp_assign_source_8;
    Py_INCREF(var_version);
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
    PyObject *old = var_bits;
    var_bits = tmp_assign_source_9;
    Py_INCREF(var_bits);
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
    PyObject *old = var_planes;
    var_planes = tmp_assign_source_10;
    Py_INCREF(var_planes);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_11;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_12;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_7 = par_im;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_mult_expr_right_1 = var_bits;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_7;
tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_8;
tmp_assign_source_12 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stride;
    var_stride = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_stride);
tmp_iadd_expr_left_1 = var_stride;
CHECK_OBJECT(var_stride);
tmp_mod_expr_left_1 = var_stride;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_iadd_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = tmp_iadd_expr_left_1;
var_stride = tmp_assign_source_13;

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_8 = module_var_accessor_PIL$PcxImagePlugin$logger(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_debug);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_b87d35a884f706ee4d0ac945e8363580;
CHECK_OBJECT(par_im);
tmp_expression_value_10 = par_im;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_size);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 169;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_args_element_value_3 = var_bits;
CHECK_OBJECT(var_stride);
tmp_args_element_value_4 = var_stride;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_size);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_screen;
    var_screen = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_add_expr_left_12;
PyObject *tmp_add_expr_right_12;
PyObject *tmp_add_expr_left_13;
PyObject *tmp_add_expr_right_13;
PyObject *tmp_add_expr_left_14;
PyObject *tmp_add_expr_right_14;
PyObject *tmp_add_expr_left_15;
PyObject *tmp_add_expr_right_15;
PyObject *tmp_add_expr_left_16;
PyObject *tmp_add_expr_right_16;
PyObject *tmp_add_expr_left_17;
PyObject *tmp_add_expr_right_17;
PyObject *tmp_add_expr_left_18;
PyObject *tmp_add_expr_right_18;
PyObject *tmp_add_expr_left_19;
PyObject *tmp_add_expr_right_19;
PyObject *tmp_called_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_5;
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(par_fp);
tmp_expression_value_12 = par_fp;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_write);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 183;
tmp_add_expr_left_19 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_int_pos_10_tuple);

if (tmp_add_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 183;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_19);

exception_lineno = 184;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_version);
tmp_args_element_value_6 = var_version;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 184;
tmp_add_expr_right_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
if (tmp_add_expr_right_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_19);

exception_lineno = 184;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_19, tmp_add_expr_right_19);
CHECK_OBJECT(tmp_add_expr_left_19);
Py_DECREF(tmp_add_expr_left_19);
CHECK_OBJECT(tmp_add_expr_right_19);
Py_DECREF(tmp_add_expr_right_19);
if (tmp_add_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 184;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_18);

exception_lineno = 185;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 185;
tmp_add_expr_right_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_int_pos_1_tuple);

if (tmp_add_expr_right_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_18);

exception_lineno = 185;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
CHECK_OBJECT(tmp_add_expr_left_18);
Py_DECREF(tmp_add_expr_left_18);
CHECK_OBJECT(tmp_add_expr_right_18);
Py_DECREF(tmp_add_expr_right_18);
if (tmp_add_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 185;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 186;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_args_element_value_7 = var_bits;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 186;
tmp_add_expr_right_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
if (tmp_add_expr_right_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 186;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
CHECK_OBJECT(tmp_add_expr_left_17);
Py_DECREF(tmp_add_expr_left_17);
CHECK_OBJECT(tmp_add_expr_right_17);
Py_DECREF(tmp_add_expr_right_17);
if (tmp_add_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 186;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 187;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 187;
tmp_add_expr_right_16 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_int_0_tuple);

if (tmp_add_expr_right_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 187;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
CHECK_OBJECT(tmp_add_expr_left_16);
Py_DECREF(tmp_add_expr_left_16);
CHECK_OBJECT(tmp_add_expr_right_16);
Py_DECREF(tmp_add_expr_right_16);
if (tmp_add_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 187;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_15);

exception_lineno = 188;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 188;
tmp_add_expr_right_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_int_0_tuple);

if (tmp_add_expr_right_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_15);

exception_lineno = 188;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
CHECK_OBJECT(tmp_add_expr_left_15);
Py_DECREF(tmp_add_expr_left_15);
CHECK_OBJECT(tmp_add_expr_right_15);
Py_DECREF(tmp_add_expr_right_15);
if (tmp_add_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 188;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_14 = par_im;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_size);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = const_int_0;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, 0);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 189;
tmp_add_expr_right_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_add_expr_right_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
CHECK_OBJECT(tmp_add_expr_left_14);
Py_DECREF(tmp_add_expr_left_14);
CHECK_OBJECT(tmp_add_expr_right_14);
Py_DECREF(tmp_add_expr_right_14);
if (tmp_add_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 189;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_16 = par_im;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_size);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 190;
tmp_add_expr_right_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_add_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
CHECK_OBJECT(tmp_add_expr_left_13);
Py_DECREF(tmp_add_expr_left_13);
CHECK_OBJECT(tmp_add_expr_right_13);
Py_DECREF(tmp_add_expr_right_13);
if (tmp_add_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 190;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_12);

exception_lineno = 191;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 191;
tmp_add_expr_right_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_int_pos_100_tuple);

if (tmp_add_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_12);

exception_lineno = 191;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
CHECK_OBJECT(tmp_add_expr_left_12);
Py_DECREF(tmp_add_expr_left_12);
CHECK_OBJECT(tmp_add_expr_right_12);
Py_DECREF(tmp_add_expr_right_12);
if (tmp_add_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 191;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_11);

exception_lineno = 192;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 192;
tmp_add_expr_right_11 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_int_pos_100_tuple);

if (tmp_add_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_11);

exception_lineno = 192;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
CHECK_OBJECT(tmp_add_expr_left_11);
Py_DECREF(tmp_add_expr_left_11);
CHECK_OBJECT(tmp_add_expr_right_11);
Py_DECREF(tmp_add_expr_right_11);
if (tmp_add_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 192;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_10 = mod_consts.const_bytes_digest_4d7dd0bdf741444bb4497b858c1ff38b;
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_left_10);
Py_DECREF(tmp_add_expr_left_10);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 193;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_9 = mod_consts.const_bytes_digest_5a2cb523029509e16cff75c520ff10e3;
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 194;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_8 = mod_consts.const_bytes_null;
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 195;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 196;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_planes);
tmp_args_element_value_10 = var_planes;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 196;
tmp_add_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 196;
type_description_1 = "oooooooooooNoo";
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
Py_DECREF(tmp_called_value_2);

exception_lineno = 196;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 197;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stride);
tmp_args_element_value_11 = var_stride;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 197;
tmp_add_expr_right_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 197;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 197;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 198;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 198;
tmp_add_expr_right_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_int_pos_1_tuple);

if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 198;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 198;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 199;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_screen);
tmp_expression_value_17 = var_screen;
tmp_subscript_value_6 = const_int_0;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_6, 0);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 199;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 199;
tmp_add_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 199;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 199;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = module_var_accessor_PIL$PcxImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 200;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_screen);
tmp_expression_value_18 = var_screen;
tmp_subscript_value_7 = const_int_pos_1;
tmp_args_element_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_7, 1);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 200;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 200;
tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 200;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 200;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_bytes_digest_b457d7c2190b8259f3ff2cc7098aca56;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 201;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 182;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_fp);
tmp_called_instance_1 = par_fp;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 204;
tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_128;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 204;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooNoo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_add_expr_left_20;
PyObject *tmp_add_expr_right_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_tuple_element_2;
tmp_expression_value_19 = module_var_accessor_PIL$PcxImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__save);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_14 = par_im;
CHECK_OBJECT(par_fp);
tmp_args_element_value_15 = par_fp;
tmp_expression_value_20 = module_var_accessor_PIL$PcxImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__Tile);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = mod_consts.const_str_plain_pcx;
tmp_add_expr_left_20 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_im);
tmp_expression_value_21 = par_im;
tmp_add_expr_right_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_called_value_19);

exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_20, tmp_add_expr_right_20);
CHECK_OBJECT(tmp_add_expr_right_20);
Py_DECREF(tmp_add_expr_right_20);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_called_value_19);

exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = const_int_0;
CHECK_OBJECT(var_rawmode);
tmp_tuple_element_2 = var_rawmode;
tmp_args_element_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyTuple_SET_ITEM0(tmp_args_element_value_20, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_bits);
tmp_mult_expr_left_2 = var_bits;
CHECK_OBJECT(var_planes);
tmp_mult_expr_right_2 = var_planes;
tmp_tuple_element_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_element_value_20, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_20);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 207;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 207;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_16, 0, tmp_list_element_1);
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_im);
tmp_expression_value_22 = par_im;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_P;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_21;
CHECK_OBJECT(par_fp);
tmp_expression_value_23 = par_fp;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_write);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_21 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 212;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 212;
tmp_args_element_value_21 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_21, mod_consts.const_tuple_int_pos_12_tuple);

if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 212;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 212;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(par_im);
tmp_expression_value_24 = par_im;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_im);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 213;
tmp_assign_source_15 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getpalette,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_RGB_str_plain_RGB_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
nuitka_digit tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_palette);
tmp_iadd_expr_left_2 = var_palette;
tmp_mult_expr_left_3 = mod_consts.const_bytes_null;
tmp_sub_expr_left_3 = 768;
CHECK_OBJECT(var_palette);
tmp_len_arg_1 = var_palette;
tmp_sub_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_DIGIT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
assert(!(tmp_mult_expr_right_3 == NULL));
tmp_iadd_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
assert(!(tmp_iadd_expr_right_2 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = tmp_iadd_expr_left_2;
var_palette = tmp_assign_source_16;

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_22;
CHECK_OBJECT(par_fp);
tmp_called_instance_3 = par_fp;
CHECK_OBJECT(var_palette);
tmp_args_element_value_22 = var_palette;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 215;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_22);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_im);
tmp_expression_value_25 = par_im;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_L;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooooooooNoo";
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
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_value_23;
CHECK_OBJECT(par_fp);
tmp_expression_value_26 = par_fp;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_write);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_23 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 218;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 218;
tmp_args_element_value_23 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_23, mod_consts.const_tuple_int_pos_12_tuple);

if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 218;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 218;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_xrange_0_256;
tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooNoo";
exception_lineno = 219;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_19 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_19;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_27;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_24;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_25;
if (par_fp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}

tmp_expression_value_27 = par_fp;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_write);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
tmp_called_value_25 = module_var_accessor_PIL$PcxImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_i);
tmp_args_element_value_25 = var_i;
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 220;
tmp_mult_expr_left_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_25);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
tmp_mult_expr_right_4 = mod_consts.const_int_pos_3;
tmp_args_element_value_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame.f_lineno = 220;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooooooNoo";
    goto try_except_handler_7;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_5:;
branch_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin$$$function__3__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PcxImagePlugin$$$function__3__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin$$$function__3__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PcxImagePlugin$$$function__3__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    var_msg,
    var_version,
    var_bits,
    var_planes,
    var_rawmode,
    var_e,
    var_stride,
    var_screen,
    NULL,
    var_palette,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$PcxImagePlugin$$$function__3__save == cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save);
    cache_frame_frame_PIL$PcxImagePlugin$$$function__3__save = NULL;
}

assertFrameObject(frame_frame_PIL$PcxImagePlugin$$$function__3__save);

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
CHECK_OBJECT(var_version);
CHECK_OBJECT(var_version);
Py_DECREF(var_version);
var_version = NULL;
CHECK_OBJECT(var_bits);
CHECK_OBJECT(var_bits);
Py_DECREF(var_bits);
var_bits = NULL;
CHECK_OBJECT(var_planes);
CHECK_OBJECT(var_planes);
Py_DECREF(var_planes);
var_planes = NULL;
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
CHECK_OBJECT(var_stride);
CHECK_OBJECT(var_stride);
Py_DECREF(var_stride);
var_stride = NULL;
CHECK_OBJECT(var_screen);
CHECK_OBJECT(var_screen);
Py_DECREF(var_screen);
var_screen = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_version);
var_version = NULL;
Py_XDECREF(var_bits);
var_bits = NULL;
Py_XDECREF(var_planes);
var_planes = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_stride);
var_stride = NULL;
Py_XDECREF(var_screen);
var_screen = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
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



static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PcxImagePlugin$$$function__1__accept,
        mod_consts.const_str_plain__accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e1a4e34ce2a640ce931606997dd1e0d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PcxImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PcxImagePlugin$$$function__2__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0983da16e16604ce68fab438fa8c9b57,
#endif
        code_objects_62338524a88cbc81f4d1eb8669e8c072,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PcxImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__3__save(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$PcxImagePlugin$$$function__3__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b94a230b32c7bb8bde81fe3016bb8439,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$PcxImagePlugin,
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

static function_impl_code const function_table_PIL$PcxImagePlugin[] = {
impl_PIL$PcxImagePlugin$$$function__1__accept,
impl_PIL$PcxImagePlugin$$$function__2__open,
impl_PIL$PcxImagePlugin$$$function__3__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$PcxImagePlugin);
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
        module_PIL$PcxImagePlugin,
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
        function_table_PIL$PcxImagePlugin,
        sizeof(function_table_PIL$PcxImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.PcxImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$PcxImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$PcxImagePlugin");

    // Store the module for future use.
    module_PIL$PcxImagePlugin = module;

    moduledict_PIL$PcxImagePlugin = MODULE_DICT(module_PIL$PcxImagePlugin);

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
        PRINT_STRING("PIL$PcxImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$PcxImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$PcxImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PcxImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$PcxImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$PcxImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$PcxImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$PcxImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PcxImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$PcxImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$PcxImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$PcxImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_PIL$PcxImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2;
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
UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$PcxImagePlugin = MAKE_MODULE_FRAME(code_objects_55170ab22de4ced9e596f4b78cb9cc26, module_PIL$PcxImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PcxImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$PcxImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$PcxImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$PcxImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$PcxImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 30;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$PcxImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 33;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_ImagePalette,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$PcxImagePlugin;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_i16le_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 34;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_i16le,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_i16le);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_4 = (PyObject *)moduledict_PIL$PcxImagePlugin;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_o8_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 35;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_o8,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_o8);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_5 = (PyObject *)moduledict_PIL$PcxImagePlugin;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_o16le_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 36;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_PIL$PcxImagePlugin,
        mod_consts.const_str_plain_o16le,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_o16le);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_PIL$PcxImagePlugin$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 38;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396_tuple, 0)
);

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);

tmp_assign_source_17 = MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__1__accept(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept, tmp_assign_source_17);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$PcxImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ImageFile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_2;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
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


exception_lineno = 49;

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


exception_lineno = 49;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_21;
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


exception_lineno = 49;

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
PyObject *tmp_assign_source_22;
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


exception_lineno = 49;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_PcxImageFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 49;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_22;
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


exception_lineno = 49;

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
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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


exception_lineno = 49;

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


exception_lineno = 49;

    goto try_except_handler_2;
}
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 49;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
branch_end_1:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_f2a87c58d4e6f3c5e018cfcdf09e2396;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_PcxImageFile;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_4e92f5183e878a7b13d299403752eae6, module_PIL$PcxImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2, locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2);
assert(Py_REFCNT(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_PCX;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_Paintbrush;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__2__open(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$PcxImagePlugin$$$class__1_PcxImageFile_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_9376e575b5cc28047f286ed8aee463b0_tuple;
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

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


exception_lineno = 49;

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
tmp_res = PyObject_SetItem(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = mod_consts.const_str_plain_PcxImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_24 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49);
locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49);
locals_PIL$PcxImagePlugin$$$class__1_PcxImageFile_49 = NULL;
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
exception_lineno = 49;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_PcxImageFile, tmp_assign_source_24);
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
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = DICT_COPY(tstate, mod_consts.const_dict_3c0ed0f068d80926c0ec5de5723ebe35);
UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_27 = MAKE_FUNCTION_PIL$PcxImagePlugin$$$function__3__save(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_27);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_8 = module_var_accessor_PIL$PcxImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_register_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PcxImageFile);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 227;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 227;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PcxImageFile);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 227;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$PcxImagePlugin$_accept(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 227;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 227;
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


exception_lineno = 227;

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
tmp_expression_value_10 = module_var_accessor_PIL$PcxImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_register_save);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PcxImageFile);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 228;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_PIL$PcxImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 228;

    goto frame_exception_exit_1;
}
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 228;
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


exception_lineno = 228;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_7;
tmp_expression_value_12 = module_var_accessor_PIL$PcxImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_register_extension);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_expression_value_13 = module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PcxImageFile);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_format);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_a2a7b760660ec0156ad25b4f8fc7a45d;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_9;
tmp_expression_value_14 = module_var_accessor_PIL$PcxImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_register_mime);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_PIL$PcxImagePlugin$PcxImageFile(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PcxImageFile);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 232;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_format);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 232;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_07c56fa2d5e6e45901ea26ef5aea660a;
frame_frame_PIL$PcxImagePlugin->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$PcxImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$PcxImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$PcxImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$PcxImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$PcxImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.PcxImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$PcxImagePlugin);
    return module_PIL$PcxImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$PcxImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$PcxImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
