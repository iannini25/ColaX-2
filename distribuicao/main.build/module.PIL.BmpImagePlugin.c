/* Generated code for Python module 'PIL$BmpImagePlugin'
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



/* The "module_PIL$BmpImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$BmpImagePlugin;
PyDictObject *moduledict_PIL$BmpImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_startswith;
PyObject *const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple;
PyObject *const_str_plain_i32;
PyObject *const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple;
PyObject *const_str_plain_fp;
PyObject *const_str_plain_seek;
PyObject *const_str_plain_header_size;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_str_plain_direction;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__safe_read;
PyObject *const_int_pos_4;
PyObject *const_int_pos_12;
PyObject *const_str_plain_i16;
PyObject *const_str_plain_width;
PyObject *const_int_pos_2;
PyObject *const_str_plain_height;
PyObject *const_str_plain_planes;
PyObject *const_int_pos_6;
PyObject *const_str_plain_bits;
PyObject *const_str_plain_COMPRESSIONS;
PyObject *const_str_plain_RAW;
PyObject *const_str_plain_compression;
PyObject *const_int_pos_3;
PyObject *const_str_plain_palette_padding;
PyObject *const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple;
PyObject *const_int_pos_7;
PyObject *const_int_pos_255;
PyObject *const_str_plain_y_flip;
PyObject *const_int_hex_100000000;
PyObject *const_int_pos_8;
PyObject *const_int_pos_10;
PyObject *const_int_pos_16;
PyObject *const_str_plain_data_size;
PyObject *const_int_pos_20;
PyObject *const_int_pos_24;
PyObject *const_str_plain_pixels_per_meter;
PyObject *const_int_pos_28;
PyObject *const_str_plain_colors;
PyObject *const_str_plain_info;
PyObject *const_str_plain_dpi;
PyObject *const_str_plain_BITFIELDS;
PyObject *const_str_plain_r_mask;
PyObject *const_str_plain_g_mask;
PyObject *const_str_plain_b_mask;
PyObject *const_str_plain_a_mask;
PyObject *const_str_plain_header_data;
PyObject *const_int_pos_36;
PyObject *const_str_plain_file_info;
PyObject *const_str_plain_rgb_mask;
PyObject *const_str_plain_rgba_mask;
PyObject *const_str_digest_514236957af5071113ce8c666067ec48;
PyObject *const_str_chr_41;
PyObject *const_str_plain__size;
PyObject *const_tuple_str_plain_colors_int_0_tuple;
PyObject *const_int_pos_14;
PyObject *const_str_plain_BIT2MODE;
PyObject *const_tuple_str_empty_str_empty_tuple;
PyObject *const_str_plain__mode;
PyObject *const_str_plain_mode;
PyObject *const_str_digest_8f247cd7fdec594cba5605eae948c18a;
PyObject *const_str_plain_raw;
PyObject *const_dict_081f6fdfd93b43d15743fe3bb2488d18;
PyObject *const_dict_e8b3c241cbf913a2f931e836c2279c5f;
PyObject *const_int_pos_32;
PyObject *const_str_plain_A;
PyObject *const_str_plain_RGBA;
PyObject *const_tuple_int_pos_24_int_pos_16_tuple;
PyObject *const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9;
PyObject *const_int_pos_22;
PyObject *const_str_plain_USE_RAW_ALPHA;
PyObject *const_tuple_str_plain_BGRA_str_plain_RGBA_tuple;
PyObject *const_str_plain_RLE8;
PyObject *const_str_plain_RLE4;
PyObject *const_str_plain_bmp_rle;
PyObject *const_str_digest_2ca5bee3624901db4a74359fa4b6871e;
PyObject *const_str_plain_P;
PyObject *const_int_pos_65536;
PyObject *const_str_digest_cfa454b4dd32d0109b78adbfe098b106;
PyObject *const_tuple_int_0_int_pos_255_tuple;
PyObject *const_str_plain_padding;
PyObject *const_str_plain_o8;
PyObject *const_str_plain_grayscale;
PyObject *const_str_plain_1;
PyObject *const_str_plain_L;
PyObject *const_str_plain_ImagePalette;
PyObject *const_str_plain_BGRX;
PyObject *const_str_plain_BGR;
PyObject *const_str_plain_palette;
PyObject *const_int_pos_31;
PyObject *const_int_neg_4;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_tile;
PyObject *const_str_digest_018fa3a8297e7fda007fbc3da9393e2c;
PyObject *const_float_39_3701;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_4ab0f9aaf08160ca1ff70c4131176341;
PyObject *const_tuple_int_pos_14_tuple;
PyObject *const_str_plain__accept;
PyObject *const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f;
PyObject *const_str_plain__bitmap;
PyObject *const_tuple_str_plain_offset_tuple;
PyObject *const_str_digest_ea43babb238944275468af1b9f1e22c1;
PyObject *const_str_plain_fd;
PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
PyObject *const_str_plain_state;
PyObject *const_str_plain_xsize;
PyObject *const_str_plain_ysize;
PyObject *const_str_plain_data;
PyObject *const_str_plain_self;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_x;
PyObject *const_str_plain_max;
PyObject *const_int_pos_15;
PyObject *const_str_plain_num_pixels;
PyObject *const_str_plain_first_pixel;
PyObject *const_str_plain_second_pixel;
PyObject *const_bytes_null;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_bytes_read;
PyObject *const_str_plain_byte_count;
PyObject *const_str_plain_SEEK_CUR;
PyObject *const_str_plain_set_as_raw;
PyObject *const_tuple_int_neg_1_int_0_tuple;
PyObject *const_str_plain__save;
PyObject *const_str_plain_SAVE;
PyObject *const_str_digest_4a6352c6771b4dd5e216bc9acc20f853;
PyObject *const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4;
PyObject *const_str_plain_encoderinfo;
PyObject *const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple;
PyObject *const_str_plain_size;
PyObject *const_xrange_0_256;
PyObject *const_str_plain_im;
PyObject *const_str_plain_getpalette;
PyObject *const_tuple_str_plain_RGB_str_plain_BGRX_tuple;
PyObject *const_int_pos_54;
PyObject *const_int_hex_ffffffff;
PyObject *const_str_digest_41321b8c38f9299ee0d891975210802f;
PyObject *const_str_plain_write;
PyObject *const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b;
PyObject *const_str_plain_o32;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_int_pos_40_tuple;
PyObject *const_str_plain_o16;
PyObject *const_tuple_bytes_empty_tuple;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_float_0_5;
PyObject *const_str_digest_7120d4204cc4762ca7a220b081a44610;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_Any;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain__binary;
PyObject *const_tuple_str_plain_i16le_tuple;
PyObject *const_str_plain_i16le;
PyObject *const_tuple_str_plain_i32le_tuple;
PyObject *const_str_plain_i32le;
PyObject *const_tuple_str_plain_o8_tuple;
PyObject *const_tuple_str_plain_o16le_tuple;
PyObject *const_str_plain_o16le;
PyObject *const_tuple_str_plain_o32le_tuple;
PyObject *const_str_plain_o32le;
PyObject *const_dict_58d7ae98441ebd965650132eb201c985;
PyObject *const_dict_38f5e37decacb42d0c9efbc0c4d3adea;
PyObject *const_str_plain__dib_accept;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_BmpImageFile;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_af7895b8e9a7643f2ab308f77e96c311;
PyObject *const_str_digest_fc131ae411c74aac4584d129675a904d;
PyObject *const_int_pos_65;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_7694c8aa5098fdbfc9d126eeda02356f;
PyObject *const_str_plain_format_description;
PyObject *const_str_plain_BMP;
PyObject *const_dict_573115a447ef2f8dd7ef6812133c5976;
PyObject *const_str_plain_items;
PyObject *const_str_plain_k;
PyObject *const_str_plain_v;
PyObject *const_str_plain_vars;
PyObject *const_dict_7a7644b252e6e6939d7e22a2ba55a5b7;
PyObject *const_str_digest_40e9a04769198a44edba14d650f76b42;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__open;
PyObject *const_str_digest_bde65f20a0edb67aa82d817e7642f0ab;
PyObject *const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_PyDecoder;
PyObject *const_str_plain_BmpRleDecoder;
PyObject *const_int_pos_324;
PyObject *const_str_plain__pulls_fd;
PyObject *const_dict_598da6480926a46add7ef4a4fe0cc2f1;
PyObject *const_str_plain_decode;
PyObject *const_str_digest_39192bd16458e9098fb134f1b3e9e35c;
PyObject *const_str_plain_DibImageFile;
PyObject *const_int_pos_400;
PyObject *const_str_plain_DIB;
PyObject *const_str_digest_9184770994a8dfc7f5067f9878a65025;
PyObject *const_dict_6c9a4e8e23277b1848566a99b2c6e76d;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain__dib_save;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_fd4f57dd85021582b209bf03b901798e;
PyObject *const_str_plain_register_open;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_register_extension;
PyObject *const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2;
PyObject *const_str_plain_register_mime;
PyObject *const_str_digest_b29042b8bf76639bd00bc6af12b19b3b;
PyObject *const_str_plain_register_decoder;
PyObject *const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8;
PyObject *const_str_digest_20275c22a73082ce7f012831e8459935;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple;
PyObject *const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_prefix_tuple;
PyObject *const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple;
PyObject *const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple;
PyObject *const_tuple_256122610fca94a7b983e56ed11845b9_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple;
PyObject *const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[231];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.BmpImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 231) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 231 values, got %d\n",
                    UN_TRANSLATE("PIL.BmpImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple", mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32", mod_consts.const_str_plain_i32);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_i32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple", mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header_size", mod_consts.const_str_plain_header_size);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_direction", mod_consts.const_str_plain_direction);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_direction);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__safe_read", mod_consts.const_str_plain__safe_read);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__safe_read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_planes", mod_consts.const_str_plain_planes);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_planes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bits", mod_consts.const_str_plain_bits);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_bits);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMPRESSIONS", mod_consts.const_str_plain_COMPRESSIONS);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMPRESSIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RAW", mod_consts.const_str_plain_RAW);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_RAW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_compression);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette_padding", mod_consts.const_str_plain_palette_padding);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette_padding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple", mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y_flip", mod_consts.const_str_plain_y_flip);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_y_flip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_100000000", mod_consts.const_int_hex_100000000);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_int_hex_100000000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data_size", mod_consts.const_str_plain_data_size);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_data_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pixels_per_meter", mod_consts.const_str_plain_pixels_per_meter);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_pixels_per_meter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_int_pos_28);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colors", mod_consts.const_str_plain_colors);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_colors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dpi", mod_consts.const_str_plain_dpi);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_dpi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BITFIELDS", mod_consts.const_str_plain_BITFIELDS);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_BITFIELDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_r_mask", mod_consts.const_str_plain_r_mask);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_r_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_g_mask", mod_consts.const_str_plain_g_mask);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_g_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b_mask", mod_consts.const_str_plain_b_mask);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_b_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_a_mask", mod_consts.const_str_plain_a_mask);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_a_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header_data", mod_consts.const_str_plain_header_data);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_file_info", mod_consts.const_str_plain_file_info);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb_mask", mod_consts.const_str_plain_rgb_mask);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgb_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgba_mask", mod_consts.const_str_plain_rgba_mask);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgba_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_514236957af5071113ce8c666067ec48", mod_consts.const_str_digest_514236957af5071113ce8c666067ec48);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_514236957af5071113ce8c666067ec48);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_colors_int_0_tuple", mod_consts.const_tuple_str_plain_colors_int_0_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_colors_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BIT2MODE", mod_consts.const_str_plain_BIT2MODE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_BIT2MODE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_str_empty_tuple", mod_consts.const_tuple_str_empty_str_empty_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a", mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18", mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f", mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_A", mod_consts.const_str_plain_A);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_24_int_pos_16_tuple", mod_consts.const_tuple_int_pos_24_int_pos_16_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_24_int_pos_16_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9", mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_USE_RAW_ALPHA", mod_consts.const_str_plain_USE_RAW_ALPHA);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_USE_RAW_ALPHA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple", mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLE8", mod_consts.const_str_plain_RLE8);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLE8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLE4", mod_consts.const_str_plain_RLE4);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_RLE4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bmp_rle", mod_consts.const_str_plain_bmp_rle);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_bmp_rle);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e", mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106", mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_255_tuple", mod_consts.const_tuple_int_0_int_pos_255_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_255_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padding", mod_consts.const_str_plain_padding);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_o8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale", mod_consts.const_str_plain_grayscale);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGRX", mod_consts.const_str_plain_BGRX);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_BGRX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGR", mod_consts.const_str_plain_BGR);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_BGR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_4", mod_consts.const_int_neg_4);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_neg_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c", mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_39_3701", mod_consts.const_float_39_3701);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_float_39_3701);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341", mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_14_tuple", mod_consts.const_tuple_int_pos_14_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_14_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f", mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__bitmap", mod_consts.const_str_plain__bitmap);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__bitmap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_offset_tuple", mod_consts.const_tuple_str_plain_offset_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1", mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fd", mod_consts.const_str_plain_fd);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state", mod_consts.const_str_plain_state);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xsize", mod_consts.const_str_plain_xsize);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_xsize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ysize", mod_consts.const_str_plain_ysize);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_ysize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_pixels", mod_consts.const_str_plain_num_pixels);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_num_pixels);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_first_pixel", mod_consts.const_str_plain_first_pixel);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_first_pixel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_second_pixel", mod_consts.const_str_plain_second_pixel);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_second_pixel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bytes_read", mod_consts.const_str_plain_bytes_read);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_bytes_read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byte_count", mod_consts.const_str_plain_byte_count);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_byte_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEEK_CUR", mod_consts.const_str_plain_SEEK_CUR);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_CUR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_as_raw", mod_consts.const_str_plain_set_as_raw);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_as_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_neg_1_int_0_tuple", mod_consts.const_tuple_int_neg_1_int_0_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SAVE", mod_consts.const_str_plain_SAVE);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_SAVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853", mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4", mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple", mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_xrange_0_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple", mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_54", mod_consts.const_int_pos_54);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_ffffffff", mod_consts.const_int_hex_ffffffff);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f", mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b", mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32", mod_consts.const_str_plain_o32);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_o32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_40_tuple", mod_consts.const_tuple_int_pos_40_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_40_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16", mod_consts.const_str_plain_o16);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_empty_tuple", mod_consts.const_tuple_bytes_empty_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610", mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain__binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i32le_tuple", mod_consts.const_tuple_str_plain_i32le_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i32le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32le", mod_consts.const_str_plain_i32le);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_i32le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16le_tuple", mod_consts.const_tuple_str_plain_o16le_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o32le_tuple", mod_consts.const_tuple_str_plain_o32le_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o32le_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32le", mod_consts.const_str_plain_o32le);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_o32le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_58d7ae98441ebd965650132eb201c985", mod_consts.const_dict_58d7ae98441ebd965650132eb201c985);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_58d7ae98441ebd965650132eb201c985);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dib_accept", mod_consts.const_str_plain__dib_accept);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain__dib_accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpImageFile", mod_consts.const_str_plain_BmpImageFile);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_BmpImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311", mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d", mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f", mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BMP", mod_consts.const_str_plain_BMP);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_BMP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976", mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_k", mod_consts.const_str_plain_k);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_v", mod_consts.const_str_plain_v);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vars", mod_consts.const_str_plain_vars);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_vars);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7", mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42", mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab", mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple", mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyDecoder", mod_consts.const_str_plain_PyDecoder);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyDecoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpRleDecoder", mod_consts.const_str_plain_BmpRleDecoder);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_BmpRleDecoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_324);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pulls_fd", mod_consts.const_str_plain__pulls_fd);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain__pulls_fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1", mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c", mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DibImageFile", mod_consts.const_str_plain_DibImageFile);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_DibImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_400", mod_consts.const_int_pos_400);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_int_pos_400);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIB", mod_consts.const_str_plain_DIB);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025", mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d", mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dib_save", mod_consts.const_str_plain__dib_save);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain__dib_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e", mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2", mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b", mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_decoder", mod_consts.const_str_plain_register_decoder);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_decoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8", mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935", mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071", mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple", mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple", mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple", mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple", mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple);
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
void checkModuleConstants_PIL$BmpImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple", mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple) && "mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32", mod_consts.const_str_plain_i32);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_i32) && "mod_consts.const_str_plain_i32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple", mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple) && "mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header_size", mod_consts.const_str_plain_header_size);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_size) && "mod_consts.const_str_plain_header_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_direction", mod_consts.const_str_plain_direction);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_direction) && "mod_consts.const_str_plain_direction");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__safe_read", mod_consts.const_str_plain__safe_read);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__safe_read) && "mod_consts.const_str_plain__safe_read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_12", mod_consts.const_int_pos_12);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_12) && "mod_consts.const_int_pos_12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16", mod_consts.const_str_plain_i16);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16) && "mod_consts.const_str_plain_i16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_planes", mod_consts.const_str_plain_planes);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_planes) && "mod_consts.const_str_plain_planes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bits", mod_consts.const_str_plain_bits);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_bits) && "mod_consts.const_str_plain_bits");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMPRESSIONS", mod_consts.const_str_plain_COMPRESSIONS);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMPRESSIONS) && "mod_consts.const_str_plain_COMPRESSIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RAW", mod_consts.const_str_plain_RAW);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_RAW) && "mod_consts.const_str_plain_RAW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_compression) && "mod_consts.const_str_plain_compression");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette_padding", mod_consts.const_str_plain_palette_padding);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette_padding) && "mod_consts.const_str_plain_palette_padding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple", mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple) && "mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_y_flip", mod_consts.const_str_plain_y_flip);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_y_flip) && "mod_consts.const_str_plain_y_flip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_100000000", mod_consts.const_int_hex_100000000);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_int_hex_100000000) && "mod_consts.const_int_hex_100000000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_10", mod_consts.const_int_pos_10);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_10) && "mod_consts.const_int_pos_10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data_size", mod_consts.const_str_plain_data_size);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_data_size) && "mod_consts.const_str_plain_data_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_24) && "mod_consts.const_int_pos_24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pixels_per_meter", mod_consts.const_str_plain_pixels_per_meter);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_pixels_per_meter) && "mod_consts.const_str_plain_pixels_per_meter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_28", mod_consts.const_int_pos_28);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_int_pos_28) && "mod_consts.const_int_pos_28");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colors", mod_consts.const_str_plain_colors);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_colors) && "mod_consts.const_str_plain_colors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dpi", mod_consts.const_str_plain_dpi);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_dpi) && "mod_consts.const_str_plain_dpi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BITFIELDS", mod_consts.const_str_plain_BITFIELDS);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_BITFIELDS) && "mod_consts.const_str_plain_BITFIELDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_r_mask", mod_consts.const_str_plain_r_mask);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_r_mask) && "mod_consts.const_str_plain_r_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_g_mask", mod_consts.const_str_plain_g_mask);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_g_mask) && "mod_consts.const_str_plain_g_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b_mask", mod_consts.const_str_plain_b_mask);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_b_mask) && "mod_consts.const_str_plain_b_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_a_mask", mod_consts.const_str_plain_a_mask);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_a_mask) && "mod_consts.const_str_plain_a_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_header_data", mod_consts.const_str_plain_header_data);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_data) && "mod_consts.const_str_plain_header_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_36", mod_consts.const_int_pos_36);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_36) && "mod_consts.const_int_pos_36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_file_info", mod_consts.const_str_plain_file_info);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_info) && "mod_consts.const_str_plain_file_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb_mask", mod_consts.const_str_plain_rgb_mask);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgb_mask) && "mod_consts.const_str_plain_rgb_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgba_mask", mod_consts.const_str_plain_rgba_mask);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgba_mask) && "mod_consts.const_str_plain_rgba_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_514236957af5071113ce8c666067ec48", mod_consts.const_str_digest_514236957af5071113ce8c666067ec48);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_514236957af5071113ce8c666067ec48) && "mod_consts.const_str_digest_514236957af5071113ce8c666067ec48");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_colors_int_0_tuple", mod_consts.const_tuple_str_plain_colors_int_0_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_colors_int_0_tuple) && "mod_consts.const_tuple_str_plain_colors_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_14", mod_consts.const_int_pos_14);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_14) && "mod_consts.const_int_pos_14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BIT2MODE", mod_consts.const_str_plain_BIT2MODE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_BIT2MODE) && "mod_consts.const_str_plain_BIT2MODE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_str_empty_tuple", mod_consts.const_tuple_str_empty_str_empty_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_tuple) && "mod_consts.const_tuple_str_empty_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a", mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a) && "mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18", mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18) && "mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f", mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f) && "mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_A", mod_consts.const_str_plain_A);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_A) && "mod_consts.const_str_plain_A");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA) && "mod_consts.const_str_plain_RGBA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_24_int_pos_16_tuple", mod_consts.const_tuple_int_pos_24_int_pos_16_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_24_int_pos_16_tuple) && "mod_consts.const_tuple_int_pos_24_int_pos_16_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9", mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9) && "mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_22", mod_consts.const_int_pos_22);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_22) && "mod_consts.const_int_pos_22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_USE_RAW_ALPHA", mod_consts.const_str_plain_USE_RAW_ALPHA);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_USE_RAW_ALPHA) && "mod_consts.const_str_plain_USE_RAW_ALPHA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple", mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple) && "mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLE8", mod_consts.const_str_plain_RLE8);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLE8) && "mod_consts.const_str_plain_RLE8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RLE4", mod_consts.const_str_plain_RLE4);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_RLE4) && "mod_consts.const_str_plain_RLE4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bmp_rle", mod_consts.const_str_plain_bmp_rle);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_bmp_rle) && "mod_consts.const_str_plain_bmp_rle");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e", mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e) && "mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536) && "mod_consts.const_int_pos_65536");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106", mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106) && "mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_pos_255_tuple", mod_consts.const_tuple_int_0_int_pos_255_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_255_tuple) && "mod_consts.const_tuple_int_0_int_pos_255_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padding", mod_consts.const_str_plain_padding);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding) && "mod_consts.const_str_plain_padding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_o8) && "mod_consts.const_str_plain_o8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale", mod_consts.const_str_plain_grayscale);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale) && "mod_consts.const_str_plain_grayscale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_1) && "mod_consts.const_str_plain_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette) && "mod_consts.const_str_plain_ImagePalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGRX", mod_consts.const_str_plain_BGRX);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_BGRX) && "mod_consts.const_str_plain_BGRX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BGR", mod_consts.const_str_plain_BGR);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_BGR) && "mod_consts.const_str_plain_BGR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette) && "mod_consts.const_str_plain_palette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_31) && "mod_consts.const_int_pos_31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_neg_4", mod_consts.const_int_neg_4);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_neg_4) && "mod_consts.const_int_neg_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_tile) && "mod_consts.const_str_plain_tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c", mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c) && "mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_39_3701", mod_consts.const_float_39_3701);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_float_39_3701) && "mod_consts.const_float_39_3701");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341", mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341) && "mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_14_tuple", mod_consts.const_tuple_int_pos_14_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_14_tuple) && "mod_consts.const_tuple_int_pos_14_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__accept) && "mod_consts.const_str_plain__accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f", mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f) && "mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__bitmap", mod_consts.const_str_plain__bitmap);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__bitmap) && "mod_consts.const_str_plain__bitmap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_offset_tuple", mod_consts.const_tuple_str_plain_offset_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_offset_tuple) && "mod_consts.const_tuple_str_plain_offset_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1", mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1) && "mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fd", mod_consts.const_str_plain_fd);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_fd) && "mod_consts.const_str_plain_fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e) && "mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_state", mod_consts.const_str_plain_state);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_state) && "mod_consts.const_str_plain_state");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xsize", mod_consts.const_str_plain_xsize);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_xsize) && "mod_consts.const_str_plain_xsize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ysize", mod_consts.const_str_plain_ysize);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_ysize) && "mod_consts.const_str_plain_ysize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x", mod_consts.const_str_plain_x);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_x) && "mod_consts.const_str_plain_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_15", mod_consts.const_int_pos_15);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_15) && "mod_consts.const_int_pos_15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_num_pixels", mod_consts.const_str_plain_num_pixels);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_num_pixels) && "mod_consts.const_str_plain_num_pixels");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_first_pixel", mod_consts.const_str_plain_first_pixel);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_first_pixel) && "mod_consts.const_str_plain_first_pixel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_second_pixel", mod_consts.const_str_plain_second_pixel);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_second_pixel) && "mod_consts.const_str_plain_second_pixel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_bytes_null) && "mod_consts.const_bytes_null");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bytes_read", mod_consts.const_str_plain_bytes_read);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_bytes_read) && "mod_consts.const_str_plain_bytes_read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byte_count", mod_consts.const_str_plain_byte_count);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_byte_count) && "mod_consts.const_str_plain_byte_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SEEK_CUR", mod_consts.const_str_plain_SEEK_CUR);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_CUR) && "mod_consts.const_str_plain_SEEK_CUR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_as_raw", mod_consts.const_str_plain_set_as_raw);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_as_raw) && "mod_consts.const_str_plain_set_as_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_neg_1_int_0_tuple", mod_consts.const_tuple_int_neg_1_int_0_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_int_0_tuple) && "mod_consts.const_tuple_int_neg_1_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SAVE", mod_consts.const_str_plain_SAVE);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_SAVE) && "mod_consts.const_str_plain_SAVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853", mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853) && "mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4", mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4) && "mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo) && "mod_consts.const_str_plain_encoderinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple", mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple) && "mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_xrange_0_256) && "mod_consts.const_xrange_0_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple", mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple) && "mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_54", mod_consts.const_int_pos_54);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_54) && "mod_consts.const_int_pos_54");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_ffffffff", mod_consts.const_int_hex_ffffffff);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff) && "mod_consts.const_int_hex_ffffffff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f", mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f) && "mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b", mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b) && "mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32", mod_consts.const_str_plain_o32);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_o32) && "mod_consts.const_str_plain_o32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_40_tuple", mod_consts.const_tuple_int_pos_40_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_40_tuple) && "mod_consts.const_tuple_int_pos_40_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16", mod_consts.const_str_plain_o16);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16) && "mod_consts.const_str_plain_o16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_empty_tuple", mod_consts.const_tuple_bytes_empty_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_empty_tuple) && "mod_consts.const_tuple_bytes_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_float_0_5) && "mod_consts.const_float_0_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610", mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610) && "mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO) && "mod_consts.const_str_plain_IO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binary", mod_consts.const_str_plain__binary);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain__binary) && "mod_consts.const_str_plain__binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i16le_tuple", mod_consts.const_tuple_str_plain_i16le_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i16le_tuple) && "mod_consts.const_tuple_str_plain_i16le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16le) && "mod_consts.const_str_plain_i16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i32le_tuple", mod_consts.const_tuple_str_plain_i32le_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i32le_tuple) && "mod_consts.const_tuple_str_plain_i32le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32le", mod_consts.const_str_plain_i32le);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_i32le) && "mod_consts.const_str_plain_i32le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o8_tuple", mod_consts.const_tuple_str_plain_o8_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o8_tuple) && "mod_consts.const_tuple_str_plain_o8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o16le_tuple", mod_consts.const_tuple_str_plain_o16le_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o16le_tuple) && "mod_consts.const_tuple_str_plain_o16le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16le) && "mod_consts.const_str_plain_o16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_o32le_tuple", mod_consts.const_tuple_str_plain_o32le_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_o32le_tuple) && "mod_consts.const_tuple_str_plain_o32le_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32le", mod_consts.const_str_plain_o32le);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_o32le) && "mod_consts.const_str_plain_o32le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_58d7ae98441ebd965650132eb201c985", mod_consts.const_dict_58d7ae98441ebd965650132eb201c985);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_58d7ae98441ebd965650132eb201c985) && "mod_consts.const_dict_58d7ae98441ebd965650132eb201c985");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea", mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea) && "mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dib_accept", mod_consts.const_str_plain__dib_accept);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain__dib_accept) && "mod_consts.const_str_plain__dib_accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpImageFile", mod_consts.const_str_plain_BmpImageFile);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_BmpImageFile) && "mod_consts.const_str_plain_BmpImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311", mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311) && "mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d", mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d) && "mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_int_pos_65) && "mod_consts.const_int_pos_65");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f", mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f) && "mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_description) && "mod_consts.const_str_plain_format_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BMP", mod_consts.const_str_plain_BMP);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_BMP) && "mod_consts.const_str_plain_BMP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976", mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976) && "mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_k", mod_consts.const_str_plain_k);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_k) && "mod_consts.const_str_plain_k");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_v", mod_consts.const_str_plain_v);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_v) && "mod_consts.const_str_plain_v");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_vars", mod_consts.const_str_plain_vars);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_vars) && "mod_consts.const_str_plain_vars");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7", mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7) && "mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42", mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42) && "mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain__open) && "mod_consts.const_str_plain__open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab", mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab) && "mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple", mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple) && "mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyDecoder", mod_consts.const_str_plain_PyDecoder);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyDecoder) && "mod_consts.const_str_plain_PyDecoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BmpRleDecoder", mod_consts.const_str_plain_BmpRleDecoder);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_BmpRleDecoder) && "mod_consts.const_str_plain_BmpRleDecoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_324", mod_consts.const_int_pos_324);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_324) && "mod_consts.const_int_pos_324");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pulls_fd", mod_consts.const_str_plain__pulls_fd);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain__pulls_fd) && "mod_consts.const_str_plain__pulls_fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1", mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1) && "mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c", mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c) && "mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DibImageFile", mod_consts.const_str_plain_DibImageFile);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_DibImageFile) && "mod_consts.const_str_plain_DibImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_400", mod_consts.const_int_pos_400);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_int_pos_400) && "mod_consts.const_int_pos_400");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIB", mod_consts.const_str_plain_DIB);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIB) && "mod_consts.const_str_plain_DIB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025", mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025) && "mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d", mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d) && "mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dib_save", mod_consts.const_str_plain__dib_save);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain__dib_save) && "mod_consts.const_str_plain__dib_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e", mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e) && "mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_open) && "mod_consts.const_str_plain_register_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2", mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2) && "mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b", mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b) && "mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_decoder", mod_consts.const_str_plain_register_decoder);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_decoder) && "mod_consts.const_str_plain_register_decoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8", mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8) && "mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935", mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935) && "mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071", mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071) && "mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_tuple", mod_consts.const_tuple_str_plain_prefix_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_tuple) && "mod_consts.const_tuple_str_plain_prefix_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple", mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple) && "mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple) && "mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple", mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple) && "mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple", mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple) && "mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple", mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple) && "mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 20
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
static PyObject *module_var_accessor_PIL$BmpImagePlugin$BIT2MODE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BIT2MODE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BIT2MODE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BIT2MODE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BIT2MODE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BIT2MODE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BIT2MODE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BIT2MODE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BIT2MODE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BmpImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BmpImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BmpImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BmpImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$BmpRleDecoder(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpRleDecoder);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BmpRleDecoder);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BmpRleDecoder, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BmpRleDecoder);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BmpRleDecoder, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpRleDecoder);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpRleDecoder);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpRleDecoder);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$DibImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DibImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DibImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DibImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DibImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DibImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DibImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DibImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DibImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$Image(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$ImagePalette(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$SAVE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$USE_RAW_ALPHA(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_USE_RAW_ALPHA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USE_RAW_ALPHA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USE_RAW_ALPHA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_USE_RAW_ALPHA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_USE_RAW_ALPHA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_USE_RAW_ALPHA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_USE_RAW_ALPHA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_USE_RAW_ALPHA);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$_accept(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$_dib_accept(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dib_accept);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dib_accept, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dib_accept);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dib_accept, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$_dib_save(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dib_save);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dib_save, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dib_save);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dib_save, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$_save(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$i16(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$i32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_i32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_i32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_i32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_i32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_i32);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$k(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$o16(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$o32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_o32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_o32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o32);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$BmpImagePlugin$o8(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$BmpImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$BmpImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$BmpImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ba93cd953f12c8e717dc11b3b70871d8;
static PyCodeObject *code_objects_610327e80726c29986fda14124f54abb;
static PyCodeObject *code_objects_6f95db69a8908f0165e557eb11a18ae0;
static PyCodeObject *code_objects_e258421d2b518fd4bb27d21a8ac09fd3;
static PyCodeObject *code_objects_6e7a856b47dfee048efa7e7981f40e1f;
static PyCodeObject *code_objects_f93ec395659f55e71fe70d4d9c5a1187;
static PyCodeObject *code_objects_176f2279df013bd5780c73f3551cbf26;
static PyCodeObject *code_objects_489fb42ed5f27dc0dd74245646fc0123;
static PyCodeObject *code_objects_b6aea686c082c347df8bb6e18de16957;
static PyCodeObject *code_objects_3f7cbce4f3afa42ab194ce0741c3b0dd;
static PyCodeObject *code_objects_f0242d1ceea665c46df4090c8d0b86c1;
static PyCodeObject *code_objects_9ece6503aed0777f6ecabf501706dabd;
static PyCodeObject *code_objects_e132ec32c70d7e0d75b869b99dc7cd75;
static PyCodeObject *code_objects_2fd8d85ebfb9bbba57527dfd0cab2cc8;
static PyCodeObject *code_objects_77cb4ee8dce894083f345ee7f15ace57;
static PyCodeObject *code_objects_3d4dc1e9c9227b0e8be327431175f736;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_20275c22a73082ce7f012831e8459935); CHECK_OBJECT(module_filename_obj);
code_objects_ba93cd953f12c8e717dc11b3b70871d8 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_610327e80726c29986fda14124f54abb = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_6f95db69a8908f0165e557eb11a18ae0 = MAKE_CODE_OBJECT(module_filename_obj, 449, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_e258421d2b518fd4bb27d21a8ac09fd3 = MAKE_CODE_OBJECT(module_filename_obj, 440, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_6e7a856b47dfee048efa7e7981f40e1f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071, mod_consts.const_str_digest_531b5f03cfbae3e5d98ea4f6850a6071, NULL, NULL, 0, 0, 0);
code_objects_f93ec395659f55e71fe70d4d9c5a1187 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BmpImageFile, mod_consts.const_str_plain_BmpImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_176f2279df013bd5780c73f3551cbf26 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BmpRleDecoder, mod_consts.const_str_plain_BmpRleDecoder, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_489fb42ed5f27dc0dd74245646fc0123 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DibImageFile, mod_consts.const_str_plain_DibImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b6aea686c082c347df8bb6e18de16957 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__accept, mod_consts.const_str_plain__accept, mod_consts.const_tuple_str_plain_prefix_tuple, NULL, 1, 0, 0);
code_objects_3f7cbce4f3afa42ab194ce0741c3b0dd = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__bitmap, mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42, mod_consts.const_tuple_9ebf22a3d4ddac2e039c5bea4256314d_tuple, NULL, 3, 0, 0);
code_objects_f0242d1ceea665c46df4090c8d0b86c1 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__dib_accept, mod_consts.const_str_plain__dib_accept, mod_consts.const_tuple_str_plain_prefix_tuple, NULL, 1, 0, 0);
code_objects_9ece6503aed0777f6ecabf501706dabd = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__dib_save, mod_consts.const_str_plain__dib_save, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple, NULL, 3, 0, 0);
code_objects_e132ec32c70d7e0d75b869b99dc7cd75 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab, mod_consts.const_tuple_256122610fca94a7b983e56ed11845b9_tuple, NULL, 1, 0, 0);
code_objects_2fd8d85ebfb9bbba57527dfd0cab2cc8 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_77cb4ee8dce894083f345ee7f15ace57 = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_afa9bef96fff65c3ef67b0085d0fb763_tuple, NULL, 4, 0, 0);
code_objects_3d4dc1e9c9227b0e8be327431175f736 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decode, mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c, mod_consts.const_tuple_c34c9658df487c82d21c2eb8152e097a_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__2__dib_accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__3__bitmap(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__4__open(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__5_decode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__6__open(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__7__dib_save(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__8__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$BmpImagePlugin$$$function__1__accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__1__accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept = MAKE_FUNCTION_FRAME(tstate, code_objects_b6aea686c082c347df8bb6e18de16957, module_PIL$BmpImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__1__accept = cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__1__accept);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__1__accept) == 2);

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


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__1__accept->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__1__accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__1__accept,
    type_description_1,
    par_prefix
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__1__accept == cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__1__accept = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__1__accept);

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


static PyObject *impl_PIL$BmpImagePlugin$$$function__2__dib_accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept = MAKE_FUNCTION_FRAME(tstate, code_objects_f0242d1ceea665c46df4090c8d0b86c1, module_PIL$BmpImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept = cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_prefix);
tmp_args_element_value_1 = par_prefix;
frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept->m_frame.f_lineno = 59;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_eed525227ad8595246f0c7eb0a3fd503_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept,
    type_description_1,
    par_prefix
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept == cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__2__dib_accept);

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


static PyObject *impl_PIL$BmpImagePlugin$$$function__3__bitmap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_header = python_pars[1];
PyObject *par_offset = python_pars[2];
PyObject *var_file_info = NULL;
PyObject *var_SUPPORTED = NULL;
PyObject *var_args = NULL;
PyObject *var_read = NULL;
PyObject *var_seek = NULL;
PyObject *var_header_data = NULL;
PyObject *var_masks = NULL;
PyObject *var_idx = NULL;
PyObject *var_mask = NULL;
PyObject *var_msg = NULL;
PyObject *var_raw_mode = NULL;
PyObject *var_decoder_name = NULL;
PyObject *var_MASK_MODES = NULL;
PyObject *var_padding = NULL;
PyObject *var_palette = NULL;
PyObject *var_grayscale = NULL;
PyObject *var_indices = NULL;
PyObject *var_ind = NULL;
PyObject *var_val = NULL;
PyObject *var_rgb = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap = MAKE_FUNCTION_FRAME(tstate, code_objects_3f7cbce4f3afa42ab194ce0741c3b0dd, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap = cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap) == 2);

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


exception_lineno = 79;
type_description_1 = "ooooooooooooooooooooooo";
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
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 79;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fp);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_3;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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



exception_lineno = 80;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_read;
    var_read = tmp_assign_source_4;
    Py_INCREF(var_read);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_seek;
    var_seek = tmp_assign_source_5;
    Py_INCREF(var_seek);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_header);
tmp_truth_name_1 = CHECK_IF_TRUE(par_header);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_seek);
tmp_called_value_1 = var_seek;
CHECK_OBJECT(par_header);
tmp_args_element_value_1 = par_header;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 82;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_header_size;
tmp_called_value_2 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_read);
tmp_called_value_3 = var_read;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 85;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_int_pos_4_tuple);

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 85;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_direction;
tmp_dict_value_1 = const_int_neg_1;
tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_file_info;
    var_file_info = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_1 = var_file_info;
tmp_key_value_1 = mod_consts.const_str_plain_header_size;
tmp_isinstance_inst_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_raise_type_2;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 91;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_expression_value_6 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__safe_read);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_fp);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_2 = var_file_info;
tmp_key_value_2 = mod_consts.const_str_plain_header_size;
tmp_sub_expr_left_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = mod_consts.const_int_pos_4;
tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_header_data;
    var_header_data = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_3;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_3 = var_file_info;
tmp_key_value_3 = mod_consts.const_str_plain_header_size;
tmp_cmp_expr_left_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_12;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooooooooooooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_5 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_5 = var_header_data;
tmp_args_element_value_6 = const_int_0;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 98;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_width;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_6 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_7 = var_header_data;
tmp_args_element_value_8 = mod_consts.const_int_pos_2;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_height;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_7 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_9 = var_header_data;
tmp_args_element_value_10 = mod_consts.const_int_pos_4;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_planes;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_8 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_11 = var_header_data;
tmp_args_element_value_12 = mod_consts.const_int_pos_6;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_bits;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_RAW;
tmp_dictset_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_compression;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
tmp_dictset_value = mod_consts.const_int_pos_3;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_palette_padding;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_key_value_4;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_4 = var_file_info;
tmp_key_value_4 = mod_consts.const_str_plain_header_size;
tmp_cmp_expr_left_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_8b80c8954ca2a2155fda5d57f1ba618f_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_header_data);
tmp_expression_value_10 = var_header_data;
tmp_subscript_value_2 = mod_consts.const_int_pos_7;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 7);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_255;
tmp_dictset_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_y_flip;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_key_value_5;
PyObject *tmp_dict_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_5 = var_file_info;
tmp_key_value_5 = mod_consts.const_str_plain_y_flip;
tmp_dict_value_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_dict_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dict_value_2);

exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_dictset_value = const_int_pos_1;
goto condexpr_end_1;
condexpr_false_1:;
tmp_dictset_value = const_int_neg_1;
condexpr_end_1:;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_direction;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_9 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_13 = var_header_data;
tmp_args_element_value_14 = const_int_0;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_width;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_key_value_6;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_6 = var_file_info;
tmp_key_value_6 = mod_consts.const_str_plain_y_flip;
tmp_operand_value_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_value_10 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_15 = var_header_data;
tmp_args_element_value_16 = mod_consts.const_int_pos_4;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_sub_expr_left_2 = mod_consts.const_int_hex_100000000;
tmp_called_value_11 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_17 = var_header_data;
tmp_args_element_value_18 = mod_consts.const_int_pos_4;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_sub_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_height;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
tmp_called_value_12 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_19 = var_header_data;
tmp_args_element_value_20 = mod_consts.const_int_pos_8;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_planes;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
tmp_called_value_13 = module_var_accessor_PIL$BmpImagePlugin$i16(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i16);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_21 = var_header_data;
tmp_args_element_value_22 = mod_consts.const_int_pos_10;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_bits;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_value_14 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_23 = var_header_data;
tmp_args_element_value_24 = mod_consts.const_int_pos_12;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_compression;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
tmp_called_value_15 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_25 = var_header_data;
tmp_args_element_value_26 = mod_consts.const_int_pos_16;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 125;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_data_size;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
tmp_called_value_16 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_27 = var_header_data;
tmp_args_element_value_28 = mod_consts.const_int_pos_20;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_2);
tmp_called_value_17 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_29 = var_header_data;
tmp_args_element_value_30 = mod_consts.const_int_pos_24;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_pixels_per_meter;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
tmp_called_value_18 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_header_data);
tmp_args_element_value_31 = var_header_data;
tmp_args_element_value_32 = mod_consts.const_int_pos_28;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_colors;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
tmp_dictset_value = mod_consts.const_int_pos_4;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_palette_padding;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_key_value_7;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_7 = var_file_info;
tmp_key_value_7 = mod_consts.const_str_plain_pixels_per_meter;
tmp_isinstance_inst_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_7, tmp_key_value_7);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 132;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 132;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscript_1;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_key_value_8;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_8 = var_file_info;
tmp_key_value_8 = mod_consts.const_str_plain_pixels_per_meter;
tmp_iter_arg_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_8, tmp_key_value_8);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_arg_1 = MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_ass_subvalue_1 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooo";
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


exception_lineno = 133;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_dict_arg_value_9;
PyObject *tmp_key_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_9 = var_file_info;
tmp_key_value_9 = mod_consts.const_str_plain_compression;
tmp_cmp_expr_left_5 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_9, tmp_key_value_9);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_BITFIELDS;
tmp_cmp_expr_right_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST3(tstate, mod_consts.const_str_plain_r_mask,mod_consts.const_str_plain_g_mask,mod_consts.const_str_plain_b_mask);
{
    PyObject *old = var_masks;
    var_masks = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
nuitka_digit tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_header_data);
tmp_len_arg_1 = var_header_data;
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = 48;
tmp_condition_result_10 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_7;
nuitka_digit tmp_cmp_expr_right_7;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_header_data);
tmp_len_arg_2 = var_header_data;
tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = 52;
tmp_condition_result_11 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_masks);
tmp_list_arg_value_1 = var_masks;
tmp_item_value_1 = mod_consts.const_str_plain_a_mask;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_9;
branch_no_9:;
tmp_dictset_value = const_int_0;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_a_mask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_end_9:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_33;
tmp_called_value_19 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_masks);
tmp_args_element_value_33 = var_masks;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 141;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_33);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
exception_lineno = 141;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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



exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_15;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_mask;
    var_mask = tmp_assign_source_16;
    Py_INCREF(var_mask);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_called_value_20 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (var_header_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_header_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_34 = var_header_data;
tmp_add_expr_left_1 = mod_consts.const_int_pos_36;
CHECK_OBJECT(var_idx);
tmp_mult_expr_left_1 = var_idx;
tmp_mult_expr_right_1 = mod_consts.const_int_pos_4;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_35 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_dictset_dict = var_file_info;
CHECK_OBJECT(var_mask);
tmp_dictset_key = var_mask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto branch_end_8;
branch_no_8:;
tmp_dictset_value = const_int_0;
CHECK_OBJECT(var_file_info);
tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_a_mask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(var_masks);
tmp_iter_arg_5 = var_masks;
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
exception_lineno = 153;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_19 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_mask;
    var_mask = tmp_assign_source_19;
    Py_INCREF(var_mask);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_36;
PyObject *tmp_called_value_22;
tmp_called_value_21 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_read == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_read);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_called_value_22 = var_read;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 154;
tmp_args_element_value_36 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_22, mod_consts.const_tuple_int_pos_4_tuple);

if (tmp_args_element_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 154;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_36);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_dictset_dict = var_file_info;
CHECK_OBJECT(var_mask);
tmp_dictset_key = var_mask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_2;
loop_end_2:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_end_8:;
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_dict_arg_value_10;
PyObject *tmp_key_value_10;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 155;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_10 = var_file_info;
tmp_key_value_10 = mod_consts.const_str_plain_r_mask;
tmp_isinstance_inst_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_10, tmp_key_value_10);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_4;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 155;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 155;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_5;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_dict_arg_value_11;
PyObject *tmp_key_value_11;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_11 = var_file_info;
tmp_key_value_11 = mod_consts.const_str_plain_g_mask;
tmp_isinstance_inst_4 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_11, tmp_key_value_11);
if (tmp_isinstance_inst_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_4 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_inst_4);
Py_DECREF(tmp_isinstance_inst_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_5;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 156;
tmp_raise_type_5 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 156;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_11:;
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_6;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
PyObject *tmp_dict_arg_value_12;
PyObject *tmp_key_value_12;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_12 = var_file_info;
tmp_key_value_12 = mod_consts.const_str_plain_b_mask;
tmp_isinstance_inst_5 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_12, tmp_key_value_12);
if (tmp_isinstance_inst_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_5 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
CHECK_OBJECT(tmp_isinstance_inst_5);
Py_DECREF(tmp_isinstance_inst_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_6;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 157;
tmp_raise_type_6 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 157;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_12:;
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_7;
PyObject *tmp_isinstance_inst_6;
PyObject *tmp_isinstance_cls_6;
PyObject *tmp_dict_arg_value_13;
PyObject *tmp_key_value_13;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_13 = var_file_info;
tmp_key_value_13 = mod_consts.const_str_plain_a_mask;
tmp_isinstance_inst_6 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_13, tmp_key_value_13);
if (tmp_isinstance_inst_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_6 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
CHECK_OBJECT(tmp_isinstance_inst_6);
Py_DECREF(tmp_isinstance_inst_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_7;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 158;
tmp_raise_type_7 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_dict_arg_value_14;
PyObject *tmp_key_value_14;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_14 = var_file_info;
tmp_key_value_14 = mod_consts.const_str_plain_r_mask;
tmp_tuple_element_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_14, tmp_key_value_14);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_dict_arg_value_15;
PyObject *tmp_key_value_15;
PyObject *tmp_dict_arg_value_16;
PyObject *tmp_key_value_16;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_3);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}

tmp_dict_arg_value_15 = var_file_info;
tmp_key_value_15 = mod_consts.const_str_plain_g_mask;
tmp_tuple_element_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_15, tmp_key_value_15);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_3);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}

tmp_dict_arg_value_16 = var_file_info;
tmp_key_value_16 = mod_consts.const_str_plain_b_mask;
tmp_tuple_element_3 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_16, tmp_key_value_16);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
if (var_file_info == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dictset_dict = var_file_info;
tmp_dictset_key = mod_consts.const_str_plain_rgb_mask;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_file_info;
tmp_subscript_value_4 = mod_consts.const_str_plain_r_mask;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_7;
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 0, tmp_tuple_element_4);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}

tmp_expression_value_15 = var_file_info;
tmp_subscript_value_5 = mod_consts.const_str_plain_g_mask;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 1, tmp_tuple_element_4);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}

tmp_expression_value_16 = var_file_info;
tmp_subscript_value_6 = mod_consts.const_str_plain_b_mask;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 2, tmp_tuple_element_4);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}

tmp_expression_value_17 = var_file_info;
tmp_subscript_value_7 = mod_consts.const_str_plain_a_mask;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_ass_subvalue_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
if (var_file_info == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_2 = var_file_info;
tmp_ass_subscript_2 = mod_consts.const_str_plain_rgba_mask;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_514236957af5071113ce8c666067ec48;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_dict_arg_value_17;
PyObject *tmp_key_value_17;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_file_info);
tmp_dict_arg_value_17 = var_file_info;
tmp_key_value_17 = mod_consts.const_str_plain_header_size;
tmp_format_value_1 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_17, tmp_key_value_17);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_20 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_20 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 172;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 172;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_4:;
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_8;
PyObject *tmp_isinstance_inst_7;
PyObject *tmp_isinstance_cls_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_8;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_18 = var_file_info;
tmp_subscript_value_8 = mod_consts.const_str_plain_width;
tmp_isinstance_inst_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
if (tmp_isinstance_inst_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_7 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
CHECK_OBJECT(tmp_isinstance_inst_7);
Py_DECREF(tmp_isinstance_inst_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_9;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 176;
tmp_raise_type_9 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_9;
PyObject *tmp_isinstance_inst_8;
PyObject *tmp_isinstance_cls_8;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_9;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 177;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = var_file_info;
tmp_subscript_value_9 = mod_consts.const_str_plain_height;
tmp_isinstance_inst_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
if (tmp_isinstance_inst_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_8 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_8, tmp_isinstance_cls_8);
CHECK_OBJECT(tmp_isinstance_inst_8);
Py_DECREF(tmp_isinstance_inst_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_10;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 177;
tmp_raise_type_10 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 177;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_15:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_10;
PyObject *tmp_ass_attr_target_1;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 178;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_file_info;
tmp_subscript_value_10 = mod_consts.const_str_plain_width;
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_11;
PyTuple_SET_ITEM(tmp_ass_attr_value_1, 0, tmp_tuple_element_6);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 178;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}

tmp_expression_value_21 = var_file_info;
tmp_subscript_value_11 = mod_consts.const_str_plain_height;
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_ass_attr_value_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_ass_attr_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__size, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_10;
PyObject *tmp_isinstance_inst_9;
PyObject *tmp_isinstance_cls_9;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_12;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = var_file_info;
tmp_subscript_value_12 = mod_consts.const_str_plain_bits;
tmp_isinstance_inst_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
if (tmp_isinstance_inst_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_9 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_9, tmp_isinstance_cls_9);
CHECK_OBJECT(tmp_isinstance_inst_9);
Py_DECREF(tmp_isinstance_inst_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_raise_type_11;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 181;
tmp_raise_type_11 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 181;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_16:;
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_11;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_23;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = var_file_info;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_get);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 182;
tmp_operand_value_11 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_23, mod_consts.const_tuple_str_plain_colors_int_0_tuple);

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_operand_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
CHECK_OBJECT(tmp_operand_value_11);
Py_DECREF(tmp_operand_value_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_13;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_lshift_expr_left_1 = const_int_pos_1;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = var_file_info;
tmp_subscript_value_13 = mod_consts.const_str_plain_bits;
tmp_lshift_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_13);
if (tmp_lshift_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_3 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_right_1);
Py_DECREF(tmp_lshift_expr_right_1);
if (tmp_ass_subvalue_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_3 = var_file_info;
tmp_ass_subscript_3 = mod_consts.const_str_plain_colors;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_17:;
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_12;
PyObject *tmp_isinstance_inst_10;
PyObject *tmp_isinstance_cls_10;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_14;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_file_info;
tmp_subscript_value_14 = mod_consts.const_str_plain_palette_padding;
tmp_isinstance_inst_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_14);
if (tmp_isinstance_inst_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_10 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_10, tmp_isinstance_cls_10);
CHECK_OBJECT(tmp_isinstance_inst_10);
Py_DECREF(tmp_isinstance_inst_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_raise_type_12;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 184;
tmp_raise_type_12 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 184;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_18:;
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_13;
PyObject *tmp_isinstance_inst_11;
PyObject *tmp_isinstance_cls_11;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_15;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = var_file_info;
tmp_subscript_value_15 = mod_consts.const_str_plain_colors;
tmp_isinstance_inst_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_15);
if (tmp_isinstance_inst_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_11 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_11, tmp_isinstance_cls_11);
CHECK_OBJECT(tmp_isinstance_inst_11);
Py_DECREF(tmp_isinstance_inst_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_raise_type_13;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 185;
tmp_raise_type_13 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 185;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_19:;
{
nuitka_bool tmp_condition_result_22;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_16;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_17;
CHECK_OBJECT(par_offset);
tmp_cmp_expr_left_8 = par_offset;
tmp_add_expr_left_2 = mod_consts.const_int_pos_14;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_file_info;
tmp_subscript_value_16 = mod_consts.const_str_plain_header_size;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_16);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = var_file_info;
tmp_subscript_value_17 = mod_consts.const_str_plain_bits;
tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_17);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_8;
tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_22 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_22 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_18;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_19;
CHECK_OBJECT(par_offset);
tmp_iadd_expr_left_1 = par_offset;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = var_file_info;
tmp_subscript_value_18 = mod_consts.const_str_plain_palette_padding;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_18);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_mult_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = var_file_info;
tmp_subscript_value_19 = mod_consts.const_str_plain_colors;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_19);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = tmp_iadd_expr_left_1;
par_offset = tmp_assign_source_21;

}
branch_no_20:;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_37;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_20;
PyObject *tmp_args_element_value_38;
tmp_expression_value_31 = module_var_accessor_PIL$BmpImagePlugin$BIT2MODE(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BIT2MODE);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain_get);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_called_value_24);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_32 = var_file_info;
tmp_subscript_value_20 = mod_consts.const_str_plain_bits;
tmp_args_element_value_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_20);
if (tmp_args_element_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_args_element_value_38 = mod_consts.const_tuple_str_empty_str_empty_tuple;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 190;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_iter_arg_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_ass_attr_value_2 = tmp_tuple_unpack_3__element_1;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__mode, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_raw_mode;
    var_raw_mode = tmp_assign_source_25;
    Py_INCREF(var_raw_mode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(par_self);
tmp_expression_value_33 = par_self;
tmp_operand_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_mode);
if (tmp_operand_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
CHECK_OBJECT(tmp_operand_value_14);
Py_DECREF(tmp_operand_value_14);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_digest_8f247cd7fdec594cba5605eae948c18a;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_21;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_7);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}

tmp_expression_value_34 = var_file_info;
tmp_subscript_value_21 = mod_consts.const_str_plain_bits;
tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_21);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_26 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_26 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 193;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 193;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_21:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_plain_raw;
{
    PyObject *old = var_decoder_name;
    var_decoder_name = tmp_assign_source_27;
    Py_INCREF(var_decoder_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_22;
PyObject *tmp_expression_value_36;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_23;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_35 = var_file_info;
tmp_subscript_value_22 = mod_consts.const_str_plain_compression;
tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_22);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_37 = par_self;
tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_23 = mod_consts.const_str_plain_BITFIELDS;
tmp_cmp_expr_right_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_23);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_081f6fdfd93b43d15743fe3bb2488d18);
{
    PyObject *old = var_SUPPORTED;
    var_SUPPORTED = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = DICT_COPY(tstate, mod_consts.const_dict_e8b3c241cbf913a2f931e836c2279c5f);
{
    PyObject *old = var_MASK_MODES;
    var_MASK_MODES = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_25;
PyObject *tmp_key_value_18;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_24;
PyObject *tmp_dict_arg_value_18;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_38 = var_file_info;
tmp_subscript_value_24 = mod_consts.const_str_plain_bits;
tmp_key_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_24);
if (tmp_key_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_SUPPORTED);
tmp_dict_arg_value_18 = var_SUPPORTED;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_18, tmp_key_value_18);
CHECK_OBJECT(tmp_key_value_18);
Py_DECREF(tmp_key_value_18);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_25 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
nuitka_bool tmp_condition_result_26;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_25;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_26;
PyObject *tmp_dict_arg_value_19;
PyObject *tmp_key_value_19;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_27;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_39 = var_file_info;
tmp_subscript_value_25 = mod_consts.const_str_plain_bits;
tmp_cmp_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_25);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = mod_consts.const_int_pos_32;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_40 = var_file_info;
tmp_subscript_value_26 = mod_consts.const_str_plain_rgba_mask;
tmp_cmp_expr_left_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_26);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_SUPPORTED);
tmp_dict_arg_value_19 = var_SUPPORTED;
if (var_file_info == NULL) {
Py_DECREF(tmp_cmp_expr_left_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_41 = var_file_info;
tmp_subscript_value_27 = mod_consts.const_str_plain_bits;
tmp_key_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_27);
if (tmp_key_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_19, tmp_key_value_19);
CHECK_OBJECT(tmp_key_value_19);
Py_DECREF(tmp_key_value_19);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_26 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_26 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_15;
PyObject *tmp_isinstance_inst_12;
PyObject *tmp_isinstance_cls_12;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_28;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_42 = var_file_info;
tmp_subscript_value_28 = mod_consts.const_str_plain_rgba_mask;
tmp_isinstance_inst_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_28);
if (tmp_isinstance_inst_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_12 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_12, tmp_isinstance_cls_12);
CHECK_OBJECT(tmp_isinstance_inst_12);
Py_DECREF(tmp_isinstance_inst_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_raise_type_15;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 230;
tmp_raise_type_15 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 230;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_25:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_dict_arg_value_20;
PyObject *tmp_key_value_20;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_29;
CHECK_OBJECT(var_MASK_MODES);
tmp_dict_arg_value_20 = var_MASK_MODES;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_43 = var_file_info;
tmp_subscript_value_29 = mod_consts.const_str_plain_bits;
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_29);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_key_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_30;
PyTuple_SET_ITEM(tmp_key_value_20, 0, tmp_tuple_element_8);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}

tmp_expression_value_44 = var_file_info;
tmp_subscript_value_30 = mod_consts.const_str_plain_rgba_mask;
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_30);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_key_value_20, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_key_value_20);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_assign_source_30 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_20, tmp_key_value_20);
CHECK_OBJECT(tmp_key_value_20);
Py_DECREF(tmp_key_value_20);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw_mode;
    assert(old != NULL);
    var_raw_mode = tmp_assign_source_30;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_3;
bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_45;
PyObject *tmp_ass_attr_target_3;
tmp_cmp_expr_left_13 = mod_consts.const_str_plain_A;
CHECK_OBJECT(var_raw_mode);
tmp_cmp_expr_right_13 = var_raw_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_28 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_28 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_ass_attr_value_3 = mod_consts.const_str_plain_RGBA;
Py_INCREF(tmp_ass_attr_value_3);
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_45 = par_self;
tmp_ass_attr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_mode);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__mode, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_24;
branch_no_24:;
{
bool tmp_condition_result_29;
int tmp_and_left_truth_3;
bool tmp_and_left_value_3;
bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_31;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_32;
PyObject *tmp_dict_arg_value_21;
PyObject *tmp_key_value_21;
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_33;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_46 = var_file_info;
tmp_subscript_value_31 = mod_consts.const_str_plain_bits;
tmp_cmp_expr_left_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_31);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_14 = mod_consts.const_tuple_int_pos_24_int_pos_16_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_47 = var_file_info;
tmp_subscript_value_32 = mod_consts.const_str_plain_rgb_mask;
tmp_cmp_expr_left_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_32);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_SUPPORTED);
tmp_dict_arg_value_21 = var_SUPPORTED;
if (var_file_info == NULL) {
Py_DECREF(tmp_cmp_expr_left_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_48 = var_file_info;
tmp_subscript_value_33 = mod_consts.const_str_plain_bits;
tmp_key_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_33);
if (tmp_key_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_15);

exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_15 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_21, tmp_key_value_21);
CHECK_OBJECT(tmp_key_value_21);
Py_DECREF(tmp_key_value_21);
if (tmp_cmp_expr_right_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_15);

exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_15, tmp_cmp_expr_left_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
CHECK_OBJECT(tmp_cmp_expr_right_15);
Py_DECREF(tmp_cmp_expr_right_15);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 1) ? true : false;
tmp_condition_result_29 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_29 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_29 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
bool tmp_condition_result_30;
PyObject *tmp_operand_value_16;
PyObject *tmp_isinstance_inst_13;
PyObject *tmp_isinstance_cls_13;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_34;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_49 = var_file_info;
tmp_subscript_value_34 = mod_consts.const_str_plain_rgb_mask;
tmp_isinstance_inst_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_34);
if (tmp_isinstance_inst_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_13 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_13, tmp_isinstance_cls_13);
CHECK_OBJECT(tmp_isinstance_inst_13);
Py_DECREF(tmp_isinstance_inst_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_30 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_raise_type_16;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 237;
tmp_raise_type_16 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 237;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_27:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_dict_arg_value_22;
PyObject *tmp_key_value_22;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_35;
CHECK_OBJECT(var_MASK_MODES);
tmp_dict_arg_value_22 = var_MASK_MODES;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_50 = var_file_info;
tmp_subscript_value_35 = mod_consts.const_str_plain_bits;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_35);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_key_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_36;
PyTuple_SET_ITEM(tmp_key_value_22, 0, tmp_tuple_element_9);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_9;
}

tmp_expression_value_51 = var_file_info;
tmp_subscript_value_36 = mod_consts.const_str_plain_rgb_mask;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_36);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_key_value_22, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_key_value_22);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_assign_source_31 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_22, tmp_key_value_22);
CHECK_OBJECT(tmp_key_value_22);
Py_DECREF(tmp_key_value_22);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw_mode;
    assert(old != NULL);
    var_raw_mode = tmp_assign_source_31;
    Py_DECREF(old);
}

}
goto branch_end_26;
branch_no_26:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 241;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 241;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_26:;
branch_end_24:;
goto branch_end_23;
branch_no_23:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_7b3d22cf3697d3bdb60854511bfe5ef9;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 244;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 244;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_23:;
goto branch_end_22;
branch_no_22:;
{
nuitka_bool tmp_condition_result_31;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_37;
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_38;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_52 = var_file_info;
tmp_subscript_value_37 = mod_consts.const_str_plain_compression;
tmp_cmp_expr_left_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_37);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_54 = par_self;
tmp_expression_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_16);

exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_38 = mod_consts.const_str_plain_RAW;
tmp_cmp_expr_right_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_38);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_cmp_expr_right_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_16);

exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_31 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
CHECK_OBJECT(tmp_cmp_expr_right_16);
Py_DECREF(tmp_cmp_expr_right_16);
if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
nuitka_bool tmp_condition_result_32;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_39;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_3;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_55 = var_file_info;
tmp_subscript_value_39 = mod_consts.const_str_plain_bits;
tmp_cmp_expr_left_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_39);
if (tmp_cmp_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_17 = mod_consts.const_int_pos_32;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
CHECK_OBJECT(tmp_cmp_expr_left_17);
Py_DECREF(tmp_cmp_expr_left_17);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_header);
tmp_cmp_expr_left_18 = par_header;
tmp_cmp_expr_right_18 = mod_consts.const_int_pos_22;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_mvar_value_1 = module_var_accessor_PIL$BmpImagePlugin$USE_RAW_ALPHA(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_USE_RAW_ALPHA);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_right_value_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_4 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_32 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_32 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_7;
tmp_iter_arg_7 = mod_consts.const_tuple_str_plain_BGRA_str_plain_RGBA_tuple;
tmp_assign_source_32 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
assert(!(tmp_assign_source_32 == NULL));
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_12;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_11;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_raw_mode;
    assert(old != NULL);
    var_raw_mode = tmp_assign_source_35;
    Py_INCREF(var_raw_mode);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_ass_attr_value_4 = tmp_tuple_unpack_4__element_2;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__mode, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
bool tmp_condition_result_33;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_40;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_57;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_41;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_56 = var_file_info;
tmp_subscript_value_40 = mod_consts.const_str_plain_compression;
tmp_cmp_expr_left_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_40);
if (tmp_cmp_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_58 = par_self;
tmp_expression_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_19);

exception_lineno = 251;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_41 = mod_consts.const_str_plain_RLE8;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_41);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_19);

exception_lineno = 251;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_59;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_42;
PyTuple_SET_ITEM(tmp_cmp_expr_right_19, 0, tmp_tuple_element_10);
CHECK_OBJECT(par_self);
tmp_expression_value_60 = par_self;
tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_10;
}
tmp_subscript_value_42 = mod_consts.const_str_plain_RLE4;
tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_42);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_19, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_right_19);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_19, tmp_cmp_expr_left_19);
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
CHECK_OBJECT(tmp_cmp_expr_right_19);
Py_DECREF(tmp_cmp_expr_right_19);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_33 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_33 != false) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_str_plain_bmp_rle;
{
    PyObject *old = var_decoder_name;
    assert(old != NULL);
    var_decoder_name = tmp_assign_source_36;
    Py_INCREF(var_decoder_name);
    Py_DECREF(old);
}

}
goto branch_end_30;
branch_no_30:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = mod_consts.const_str_digest_2ca5bee3624901db4a74359fa4b6871e;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_43;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_11);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_11;
}

tmp_expression_value_61 = var_file_info;
tmp_subscript_value_43 = mod_consts.const_str_plain_compression;
tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_43);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_11;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_11);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_assign_source_37 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_37 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_5;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_5 = var_msg;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 257;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_5);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 257;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_end_30:;
branch_end_28:;
branch_end_22:;
{
nuitka_bool tmp_condition_result_34;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(par_self);
tmp_expression_value_62 = par_self;
tmp_cmp_expr_left_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_20 = mod_consts.const_str_plain_P;
tmp_condition_result_34 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_17;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_44;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_expression_value_63 = var_file_info;
tmp_subscript_value_44 = mod_consts.const_str_plain_colors;
tmp_assign_source_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_44);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
tmp_cmp_expr_left_21 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_21 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_39 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_36;
PyObject *tmp_operand_value_18;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_18 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_36 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_36 != false) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_17 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_17);
goto try_return_handler_13;
branch_no_33:;
{
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_22 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_22 = mod_consts.const_int_pos_65536;
tmp_operand_value_17 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_operand_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_13;
}
goto try_return_handler_13;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
CHECK_OBJECT(tmp_operand_value_17);
Py_DECREF(tmp_operand_value_17);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = mod_consts.const_str_digest_cfa454b4dd32d0109b78adbfe098b106;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_45;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_12);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_12;
}

tmp_expression_value_64 = var_file_info;
tmp_subscript_value_45 = mod_consts.const_str_plain_colors;
tmp_format_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_45);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_12;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_12);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_string_concat_values_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_assign_source_40 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_40 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_20;
PyObject *tmp_make_exception_arg_6;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_6 = var_msg;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 264;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_6);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 264;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
goto branch_end_32;
branch_no_32:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_46;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_65 = var_file_info;
tmp_subscript_value_46 = mod_consts.const_str_plain_palette_padding;
tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_46);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_padding;
    var_padding = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_39;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_47;
if (var_read == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_read);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_25 = var_read;
CHECK_OBJECT(var_padding);
tmp_mult_expr_left_3 = var_padding;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_66 = var_file_info;
tmp_subscript_value_47 = mod_consts.const_str_plain_colors;
tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_47);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_39 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 267;
tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_39);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = Py_True;
{
    PyObject *old = var_grayscale;
    var_grayscale = tmp_assign_source_43;
    Py_INCREF(var_grayscale);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
nuitka_bool tmp_condition_result_37;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_48;
PyObject *tmp_list_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_49;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_67 = var_file_info;
tmp_subscript_value_48 = mod_consts.const_str_plain_colors;
tmp_cmp_expr_left_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_48);
if (tmp_cmp_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_23 = mod_consts.const_int_pos_2;
tmp_condition_result_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
CHECK_OBJECT(tmp_cmp_expr_left_23);
Py_DECREF(tmp_cmp_expr_left_23);
if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_assign_source_44 = mod_consts.const_tuple_int_0_int_pos_255_tuple;
Py_INCREF(tmp_assign_source_44);
goto condexpr_end_4;
condexpr_false_4:;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_68 = var_file_info;
tmp_subscript_value_49 = mod_consts.const_str_plain_colors;
tmp_xrange_low_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_49);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_44 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_4:;
{
    PyObject *old = var_indices;
    var_indices = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_40;
tmp_called_value_26 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(var_indices);
tmp_args_element_value_40 = var_indices;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 276;
tmp_iter_arg_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_40);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_45 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_46 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
exception_lineno = 276;
        goto try_except_handler_14;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_9 = tmp_for_loop_3__iter_value;
tmp_assign_source_47 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_15;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_48 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_49 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_16;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_15;
// End of try:
try_end_11:;
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_50;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_50 = tmp_tuple_unpack_5__element_1;
{
    PyObject *old = var_ind;
    var_ind = tmp_assign_source_50;
    Py_INCREF(var_ind);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_51;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_51 = tmp_tuple_unpack_5__element_2;
{
    PyObject *old = var_val;
    var_val = tmp_assign_source_51;
    Py_INCREF(var_val);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
PyObject *tmp_assign_source_52;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_50;
PyObject *tmp_start_value_1;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
CHECK_OBJECT(var_palette);
tmp_expression_value_69 = var_palette;
CHECK_OBJECT(var_ind);
tmp_mult_expr_left_4 = var_ind;
if (var_padding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_mult_expr_right_4 = var_padding;
tmp_start_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(var_ind);
tmp_mult_expr_left_5 = var_ind;
if (var_padding == NULL) {
Py_DECREF(tmp_start_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_mult_expr_right_5 = var_padding;
tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_add_expr_right_3 = mod_consts.const_int_pos_3;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_subscript_value_50 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_50 == NULL));
tmp_assign_source_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_50);
CHECK_OBJECT(tmp_subscript_value_50);
Py_DECREF(tmp_subscript_value_50);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = var_rgb;
    var_rgb = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_38;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_41;
CHECK_OBJECT(var_rgb);
tmp_cmp_expr_left_24 = var_rgb;
tmp_called_value_27 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(var_val);
tmp_args_element_value_41 = var_val;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 278;
tmp_mult_expr_left_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_41);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_mult_expr_right_6 = mod_consts.const_int_pos_3;
tmp_cmp_expr_right_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_cmp_expr_right_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
CHECK_OBJECT(tmp_cmp_expr_right_24);
Py_DECREF(tmp_cmp_expr_right_24);
if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = Py_False;
{
    PyObject *old = var_grayscale;
    var_grayscale = tmp_assign_source_53;
    Py_INCREF(var_grayscale);
    Py_XDECREF(old);
}

}
branch_no_34:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooooooooooooo";
    goto try_except_handler_14;
}
goto loop_start_3;
loop_end_3:;
goto try_end_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_39;
int tmp_truth_name_4;
if (var_grayscale == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grayscale);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_4 = CHECK_IF_TRUE(var_grayscale);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_39 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_ass_attr_value_5;
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_51;
PyObject *tmp_ass_attr_target_5;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_70 = var_file_info;
tmp_subscript_value_51 = mod_consts.const_str_plain_colors;
tmp_cmp_expr_left_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_51);
if (tmp_cmp_expr_left_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_25 = mod_consts.const_int_pos_2;
tmp_condition_result_40 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
CHECK_OBJECT(tmp_cmp_expr_left_25);
Py_DECREF(tmp_cmp_expr_left_25);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
tmp_ass_attr_value_5 = mod_consts.const_str_plain_1;
goto condexpr_end_5;
condexpr_false_5:;
tmp_ass_attr_value_5 = mod_consts.const_str_plain_L;
condexpr_end_5:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain__mode, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(par_self);
tmp_expression_value_71 = par_self;
tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_mode);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_raw_mode;
    assert(old != NULL);
    var_raw_mode = tmp_assign_source_54;
    Py_DECREF(old);
}

}
goto branch_end_35;
branch_no_35:;
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
tmp_ass_attr_value_6 = mod_consts.const_str_plain_P;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain__mode, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_72;
PyObject *tmp_args_element_value_42;
nuitka_bool tmp_condition_result_41;
PyObject *tmp_cmp_expr_left_26;
PyObject *tmp_cmp_expr_right_26;
PyObject *tmp_args_element_value_43;
PyObject *tmp_ass_attr_target_7;
tmp_expression_value_72 = module_var_accessor_PIL$BmpImagePlugin$ImagePalette(tstate);
if (unlikely(tmp_expression_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_expression_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_raw);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_padding == NULL) {
Py_DECREF(tmp_called_value_28);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 288;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_26 = var_padding;
tmp_cmp_expr_right_26 = mod_consts.const_int_pos_4;
tmp_condition_result_41 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
if (tmp_condition_result_41 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_28);

exception_lineno = 288;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
tmp_args_element_value_42 = mod_consts.const_str_plain_BGRX;
goto condexpr_end_6;
condexpr_false_6:;
tmp_args_element_value_42 = mod_consts.const_str_plain_BGR;
condexpr_end_6:;
CHECK_OBJECT(var_palette);
tmp_args_element_value_43 = var_palette;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 287;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_ass_attr_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_ass_attr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_palette, tmp_ass_attr_value_7);
CHECK_OBJECT(tmp_ass_attr_value_7);
Py_DECREF(tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_35:;
branch_end_32:;
branch_no_31:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_52;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_74;
PyObject *tmp_ass_subscript_4;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_73 = var_file_info;
tmp_subscript_value_52 = mod_consts.const_str_plain_compression;
tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_52);
if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_74 = par_self;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_4);

exception_lineno = 292;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_compression;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
CHECK_OBJECT(tmp_ass_subvalue_4);
Py_DECREF(tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_raw_mode);
tmp_list_element_1 = var_raw_mode;
tmp_assign_source_55 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_55, 0, tmp_list_element_1);
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_42;
PyObject *tmp_cmp_expr_left_27;
PyObject *tmp_cmp_expr_right_27;
CHECK_OBJECT(var_decoder_name);
tmp_cmp_expr_left_27 = var_decoder_name;
tmp_cmp_expr_right_27 = mod_consts.const_str_plain_bmp_rle;
tmp_condition_result_42 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
if (tmp_condition_result_42 != false) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_cmp_expr_left_28;
PyObject *tmp_cmp_expr_right_28;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_53;
PyObject *tmp_expression_value_76;
PyObject *tmp_expression_value_77;
PyObject *tmp_subscript_value_54;
CHECK_OBJECT(var_args);
tmp_list_arg_value_2 = var_args;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_75 = var_file_info;
tmp_subscript_value_53 = mod_consts.const_str_plain_compression;
tmp_cmp_expr_left_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_53);
if (tmp_cmp_expr_left_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_77 = par_self;
tmp_expression_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_COMPRESSIONS);
if (tmp_expression_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_28);

exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_54 = mod_consts.const_str_plain_RLE4;
tmp_cmp_expr_right_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_54);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
if (tmp_cmp_expr_right_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_28);

exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_item_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
CHECK_OBJECT(tmp_cmp_expr_left_28);
Py_DECREF(tmp_cmp_expr_left_28);
CHECK_OBJECT(tmp_cmp_expr_right_28);
Py_DECREF(tmp_cmp_expr_right_28);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
goto branch_end_36;
branch_no_36:;
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_19;
PyObject *tmp_isinstance_inst_14;
PyObject *tmp_isinstance_cls_14;
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_55;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_78 = var_file_info;
tmp_subscript_value_55 = mod_consts.const_str_plain_width;
tmp_isinstance_inst_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_55);
if (tmp_isinstance_inst_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_14 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_14, tmp_isinstance_cls_14);
CHECK_OBJECT(tmp_isinstance_inst_14);
Py_DECREF(tmp_isinstance_inst_14);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_raise_type_21;
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 297;
tmp_raise_type_21 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 297;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_37:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_56;
PyObject *tmp_expression_value_80;
PyObject *tmp_subscript_value_57;
CHECK_OBJECT(var_args);
tmp_list_arg_value_3 = var_args;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_79 = var_file_info;
tmp_subscript_value_56 = mod_consts.const_str_plain_width;
tmp_mult_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_56);
if (tmp_mult_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_file_info == NULL) {
Py_DECREF(tmp_mult_expr_left_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_80 = var_file_info;
tmp_subscript_value_57 = mod_consts.const_str_plain_bits;
tmp_mult_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_57);
if (tmp_mult_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_7);

exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_left_7);
Py_DECREF(tmp_mult_expr_left_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = mod_consts.const_int_pos_31;
tmp_rshift_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_rshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_3;
tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
CHECK_OBJECT(tmp_rshift_expr_left_1);
Py_DECREF(tmp_rshift_expr_left_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_neg_4;
tmp_item_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_36:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_58;
CHECK_OBJECT(var_args);
tmp_list_arg_value_4 = var_args;
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_81 = var_file_info;
tmp_subscript_value_58 = mod_consts.const_str_plain_direction;
tmp_item_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_58);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
PyObject *tmp_ass_attr_value_8;
PyObject *tmp_list_element_2;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_82;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
PyObject *tmp_tuple_element_13;
PyObject *tmp_args_element_value_46;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_85;
PyObject *tmp_args_element_value_47;
PyObject *tmp_tuple_arg_2;
PyObject *tmp_ass_attr_target_8;
tmp_expression_value_82 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain__Tile);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decoder_name);
tmp_args_element_value_44 = var_decoder_name;
tmp_tuple_element_13 = const_int_0;
tmp_args_element_value_45 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_59;
PyObject *tmp_expression_value_84;
PyObject *tmp_subscript_value_60;
PyTuple_SET_ITEM0(tmp_args_element_value_45, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_45, 1, tmp_tuple_element_13);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_13;
}

tmp_expression_value_83 = var_file_info;
tmp_subscript_value_59 = mod_consts.const_str_plain_width;
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_59);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_args_element_value_45, 2, tmp_tuple_element_13);
if (var_file_info == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_file_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_13;
}

tmp_expression_value_84 = var_file_info;
tmp_subscript_value_60 = mod_consts.const_str_plain_height;
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_60);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooooooooooooo";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_args_element_value_45, 3, tmp_tuple_element_13);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_args_element_value_45);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
CHECK_OBJECT(par_offset);
tmp_or_left_value_2 = par_offset;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_args_element_value_45);

exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_85 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_args_element_value_45);

exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 304;
tmp_or_right_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_args_element_value_45);

exception_lineno = 304;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_46 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_args_element_value_46 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(var_args);
tmp_tuple_arg_2 = var_args;
tmp_args_element_value_47 = PySequence_Tuple(tmp_tuple_arg_2);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_46);

exception_lineno = 305;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame.f_lineno = 301;
{
    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_8 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_ass_attr_value_8, 0, tmp_list_element_2);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_8, mod_consts.const_str_plain_tile, tmp_ass_attr_value_8);
CHECK_OBJECT(tmp_ass_attr_value_8);
Py_DECREF(tmp_ass_attr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap,
    type_description_1,
    par_self,
    par_header,
    par_offset,
    var_file_info,
    var_SUPPORTED,
    var_args,
    var_read,
    var_seek,
    var_header_data,
    var_masks,
    var_idx,
    var_mask,
    var_msg,
    var_raw_mode,
    var_decoder_name,
    var_MASK_MODES,
    var_padding,
    var_palette,
    var_grayscale,
    var_indices,
    var_ind,
    var_val,
    var_rgb
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap == cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__3__bitmap);

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
CHECK_OBJECT(par_offset);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
par_offset = NULL;
Py_XDECREF(var_file_info);
var_file_info = NULL;
Py_XDECREF(var_SUPPORTED);
var_SUPPORTED = NULL;
CHECK_OBJECT(var_args);
CHECK_OBJECT(var_args);
Py_DECREF(var_args);
var_args = NULL;
Py_XDECREF(var_read);
var_read = NULL;
CHECK_OBJECT(var_seek);
CHECK_OBJECT(var_seek);
Py_DECREF(var_seek);
var_seek = NULL;
Py_XDECREF(var_header_data);
var_header_data = NULL;
Py_XDECREF(var_masks);
var_masks = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_raw_mode);
CHECK_OBJECT(var_raw_mode);
Py_DECREF(var_raw_mode);
var_raw_mode = NULL;
CHECK_OBJECT(var_decoder_name);
CHECK_OBJECT(var_decoder_name);
Py_DECREF(var_decoder_name);
var_decoder_name = NULL;
Py_XDECREF(var_MASK_MODES);
var_MASK_MODES = NULL;
Py_XDECREF(var_padding);
var_padding = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_grayscale);
var_grayscale = NULL;
Py_XDECREF(var_indices);
var_indices = NULL;
Py_XDECREF(var_ind);
var_ind = NULL;
Py_XDECREF(var_val);
var_val = NULL;
Py_XDECREF(var_rgb);
var_rgb = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_offset);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
par_offset = NULL;
Py_XDECREF(var_file_info);
var_file_info = NULL;
Py_XDECREF(var_SUPPORTED);
var_SUPPORTED = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_read);
var_read = NULL;
Py_XDECREF(var_seek);
var_seek = NULL;
Py_XDECREF(var_header_data);
var_header_data = NULL;
Py_XDECREF(var_masks);
var_masks = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_raw_mode);
var_raw_mode = NULL;
Py_XDECREF(var_decoder_name);
var_decoder_name = NULL;
Py_XDECREF(var_MASK_MODES);
var_MASK_MODES = NULL;
Py_XDECREF(var_padding);
var_padding = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_grayscale);
var_grayscale = NULL;
Py_XDECREF(var_indices);
var_indices = NULL;
Py_XDECREF(var_ind);
var_ind = NULL;
Py_XDECREF(var_val);
var_val = NULL;
Py_XDECREF(var_rgb);
var_rgb = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_header);
Py_DECREF(par_header);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_locals {
PyObject *var_x;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_x = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ba93cd953f12c8e717dc11b3b70871d8, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 133;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_truediv_expr_left_1 = generator_heap->var_x;
tmp_truediv_expr_right_1 = mod_consts.const_float_39_3701;
tmp_expression_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_truediv_expr_left_1, sizeof(PyObject *), &tmp_truediv_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_truediv_expr_left_1, sizeof(PyObject *), &tmp_truediv_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 133;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_x
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_context,
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_4ab0f9aaf08160ca1ff70c4131176341,
#endif
        code_objects_ba93cd953f12c8e717dc11b3b70871d8,
        closure,
        1,
#if 1
        sizeof(struct PIL$BmpImagePlugin$$$function__3__bitmap$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_PIL$BmpImagePlugin$$$function__4__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_head_data = NULL;
PyObject *var_offset = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__4__open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open = MAKE_FUNCTION_FRAME(tstate, code_objects_e132ec32c70d7e0d75b869b99dc7cd75, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__4__open = cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__4__open);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__4__open) == 2);

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


exception_lineno = 312;
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
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 312;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 312;
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


exception_lineno = 313;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 313;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_14_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_head_data;
    var_head_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$BmpImagePlugin$_accept(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_head_data);
tmp_args_element_value_1 = var_head_data;
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 315;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_8981cffaaf03286e98d8ff2e38b0e22f;
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 317;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 317;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_PIL$BmpImagePlugin$i32(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_i32);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_head_data);
tmp_args_element_value_2 = var_head_data;
tmp_args_element_value_3 = mod_consts.const_int_pos_10;
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__bitmap);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_offset);
tmp_kw_call_value_0_1 = var_offset;
frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame.f_lineno = 321;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_offset_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__4__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__4__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__4__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__4__open,
    type_description_1,
    par_self,
    var_head_data,
    NULL,
    var_offset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__4__open == cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__4__open = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__4__open);

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
CHECK_OBJECT(var_head_data);
CHECK_OBJECT(var_head_data);
Py_DECREF(var_head_data);
var_head_data = NULL;
CHECK_OBJECT(var_offset);
CHECK_OBJECT(var_offset);
Py_DECREF(var_offset);
var_offset = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_head_data);
var_head_data = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
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


static PyObject *impl_PIL$BmpImagePlugin$$$function__5_decode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_buffer = python_pars[1];
PyObject *var_rle4 = NULL;
PyObject *var_data = NULL;
PyObject *var_x = NULL;
PyObject *var_dest_length = NULL;
PyObject *var_pixels = NULL;
PyObject *var_byte = NULL;
PyObject *var_num_pixels = NULL;
PyObject *var_first_pixel = NULL;
PyObject *var_second_pixel = NULL;
PyObject *var_index = NULL;
PyObject *var_bytes_read = NULL;
PyObject *var_right = NULL;
PyObject *var_up = NULL;
PyObject *var_byte_count = NULL;
PyObject *var_byte_read = NULL;
PyObject *var_rawmode = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__5_decode;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode = MAKE_FUNCTION_FRAME(tstate, code_objects_3d4dc1e9c9227b0e8be327431175f736, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__5_decode = cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__5_decode);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__5_decode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fd);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooooooooooooooo";
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
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 328;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 328;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_args);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rle4;
    var_rle4 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = BYTEARRAY_COPY(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
{
    PyObject *old = var_x;
    var_x = tmp_assign_source_3;
    Py_INCREF(var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_state);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_state);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 332;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ysize);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 332;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dest_length;
    var_dest_length = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = var_data;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_dest_length);
tmp_cmp_expr_right_2 = var_dest_length;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooooooooooo";
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
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_8;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fd);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 334;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_pixels;
    var_pixels = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_9;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 335;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_fd);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 335;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_byte;
    var_byte = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_pixels);
tmp_operand_value_2 = var_pixels;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_byte);
tmp_operand_value_3 = var_byte;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_pixels);
tmp_expression_value_10 = var_pixels;
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_num_pixels;
    var_num_pixels = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(var_num_pixels);
tmp_truth_name_1 = CHECK_IF_TRUE(var_num_pixels);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
if (var_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_1 = var_x;
CHECK_OBJECT(var_num_pixels);
tmp_add_expr_right_1 = var_num_pixels;
tmp_cmp_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = par_self;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_state);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = par_self;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_state);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_x == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_1 = var_x;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 343;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_num_pixels;
    assert(old != NULL);
    var_num_pixels = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
CHECK_OBJECT(var_rle4);
tmp_truth_name_2 = CHECK_IF_TRUE(var_rle4);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
tmp_called_value_2 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_byte);
tmp_expression_value_15 = var_byte;
tmp_subscript_value_3 = const_int_0;
tmp_rshift_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
if (tmp_rshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_4;
tmp_args_element_value_3 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
CHECK_OBJECT(tmp_rshift_expr_left_1);
Py_DECREF(tmp_rshift_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 345;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_first_pixel;
    var_first_pixel = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_4;
tmp_called_value_3 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_byte);
tmp_expression_value_16 = var_byte;
tmp_subscript_value_4 = const_int_0;
tmp_bitand_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_4, 0);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_15;
tmp_args_element_value_4 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 346;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_second_pixel;
    var_second_pixel = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
if (var_num_pixels == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_pixels);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 347;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_xrange_low_1 = var_num_pixels;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 347;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_index;
    var_index = tmp_assign_source_13;
    Py_INCREF(var_index);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_index);
tmp_mod_expr_left_1 = var_index;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_data;
if (var_first_pixel == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_first_pixel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 349;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_right_1 = var_first_pixel;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_14 = tmp_iadd_expr_left_1;
var_data = tmp_assign_source_14;

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_2 = var_data;
if (var_second_pixel == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_second_pixel);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 351;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_right_2 = var_second_pixel;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_15 = tmp_iadd_expr_left_2;
var_data = tmp_assign_source_15;

}
branch_end_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
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
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_3 = var_data;
CHECK_OBJECT(var_byte);
tmp_mult_expr_left_2 = var_byte;
if (var_num_pixels == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_pixels);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_2 = var_num_pixels;
tmp_iadd_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = tmp_iadd_expr_left_3;
var_data = tmp_assign_source_16;

}
branch_end_6:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_4 = var_x;
if (var_num_pixels == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_num_pixels);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 354;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_right_4 = var_num_pixels;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = tmp_iadd_expr_left_4;
var_x = tmp_assign_source_17;

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(var_byte);
tmp_expression_value_17 = var_byte;
tmp_subscript_value_5 = const_int_0;
tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_5, 0);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
loop_start_3:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = var_data;
tmp_mod_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_mod_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_mod_expr_left_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = par_self;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_state);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_2);

exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_mod_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_2);

exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = BINARY_OPERATION_MOD_OBJECT_LONG_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_left_2);
Py_DECREF(tmp_mod_expr_left_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_operand_value_4 = RICH_COMPARE_NE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
goto loop_end_3;
branch_no_9:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_5 = var_data;
tmp_iadd_expr_right_5 = mod_consts.const_bytes_null;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_BYTES(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = tmp_iadd_expr_left_5;
var_data = tmp_assign_source_18;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = const_int_0;
{
    PyObject *old = var_x;
    var_x = tmp_assign_source_19;
    Py_INCREF(var_x);
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(var_byte);
tmp_expression_value_20 = var_byte;
tmp_subscript_value_6 = const_int_0;
tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_pos_1;
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
goto loop_end_1;
goto branch_end_10;
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_byte);
tmp_expression_value_21 = var_byte;
tmp_subscript_value_7 = const_int_0;
tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_7, 0);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_2;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_22;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 366;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_fd);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 366;
tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_read,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bytes_read;
    var_bytes_read = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
nuitka_digit tmp_cmp_expr_right_9;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(var_bytes_read);
tmp_len_arg_3 = var_bytes_read;
tmp_cmp_expr_left_9 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = 2;
tmp_condition_result_12 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_1;
branch_no_12:;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_bytes_read);
tmp_iter_arg_2 = var_bytes_read;
tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_22 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
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



exception_lineno = 369;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_24;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_up;
    var_up = tmp_assign_source_25;
    Py_INCREF(var_up);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_26;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_6 = var_data;
tmp_mult_expr_left_3 = mod_consts.const_bytes_null;
CHECK_OBJECT(var_right);
tmp_add_expr_left_2 = var_right;
CHECK_OBJECT(var_up);
tmp_mult_expr_left_4 = var_up;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = par_self;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_state);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_6 = BINARY_OPERATION_MULT_OBJECT_BYTES_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_iadd_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = tmp_iadd_expr_left_6;
var_data = tmp_assign_source_26;

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_len_arg_4;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_data);
tmp_len_arg_4 = var_data;
tmp_mod_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_mod_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_self == NULL) {
Py_DECREF(tmp_mod_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 371;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = par_self;
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_state);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_3);

exception_lineno = 371;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_xsize);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_mod_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_3);

exception_lineno = 371;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = BINARY_OPERATION_MOD_OBJECT_LONG_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_left_3);
Py_DECREF(tmp_mod_expr_left_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    var_x = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_3;
CHECK_OBJECT(var_rle4);
tmp_truth_name_3 = CHECK_IF_TRUE(var_rle4);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(var_byte);
tmp_expression_value_27 = var_byte;
tmp_subscript_value_8 = const_int_0;
tmp_floordiv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_8, 0);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_28 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_byte_count;
    var_byte_count = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 377;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_fd);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_byte_count);
tmp_args_element_value_5 = var_byte_count;
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 377;
tmp_assign_source_29 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_read, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bytes_read;
    var_bytes_read = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_bytes_read);
tmp_iter_arg_3 = var_bytes_read;
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_31 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 378;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_32 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_byte_read;
    var_byte_read = tmp_assign_source_32;
    Py_INCREF(var_byte_read);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_rshift_expr_left_2;
PyObject *tmp_rshift_expr_right_2;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 379;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_iadd_expr_left_7 = var_data;
tmp_called_value_4 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_byte_read);
tmp_rshift_expr_left_2 = var_byte_read;
tmp_rshift_expr_right_2 = mod_consts.const_int_pos_4;
tmp_args_element_value_6 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 379;
tmp_iadd_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_iadd_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
CHECK_OBJECT(tmp_iadd_expr_right_7);
Py_DECREF(tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_33 = tmp_iadd_expr_left_7;
var_data = tmp_assign_source_33;

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
CHECK_OBJECT(var_data);
tmp_iadd_expr_left_8 = var_data;
tmp_called_value_5 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_byte_read);
tmp_bitand_expr_left_2 = var_byte_read;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_15;
tmp_args_element_value_7 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 380;
tmp_iadd_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iadd_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
CHECK_OBJECT(tmp_iadd_expr_right_8);
Py_DECREF(tmp_iadd_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_34 = tmp_iadd_expr_left_8;
var_data = tmp_assign_source_34;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_4;
loop_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_9;
CHECK_OBJECT(var_byte);
tmp_expression_value_29 = var_byte;
tmp_subscript_value_9 = const_int_0;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_9, 0);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_byte_count;
    var_byte_count = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_8;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 383;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_30 = par_self;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_fd);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_byte_count);
tmp_args_element_value_8 = var_byte_count;
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 383;
tmp_assign_source_36 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, const_str_plain_read, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_bytes_read;
    var_bytes_read = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iadd_expr_left_9;
PyObject *tmp_iadd_expr_right_9;
if (var_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 384;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_9 = var_data;
CHECK_OBJECT(var_bytes_read);
tmp_iadd_expr_right_9 = var_bytes_read;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_37 = tmp_iadd_expr_left_9;
var_data = tmp_assign_source_37;

}
branch_end_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_len_arg_5;
if (var_bytes_read == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bytes_read);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 385;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_5 = var_bytes_read;
tmp_cmp_expr_left_10 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_byte_count == NULL) {
Py_DECREF(tmp_cmp_expr_left_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byte_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 385;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_10 = var_byte_count;
tmp_condition_result_14 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
goto loop_end_1;
branch_no_14:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iadd_expr_left_10;
PyObject *tmp_iadd_expr_right_10;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_10;
if (var_x == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 387;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_10 = var_x;
CHECK_OBJECT(var_byte);
tmp_expression_value_31 = var_byte;
tmp_subscript_value_10 = const_int_0;
tmp_iadd_expr_right_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_10, 0);
if (tmp_iadd_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_10, tmp_iadd_expr_right_10);
CHECK_OBJECT(tmp_iadd_expr_right_10);
Py_DECREF(tmp_iadd_expr_right_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_38 = tmp_iadd_expr_left_10;
var_x = tmp_assign_source_38;

}
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_called_instance_6;
PyObject *tmp_expression_value_32;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 390;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = par_self;
tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_fd);
if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 390;
tmp_mod_expr_left_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_mod_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_4 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_left_4);
Py_DECREF(tmp_mod_expr_left_4);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = const_int_0;
tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_35;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 391;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = par_self;
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_fd);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = const_int_pos_1;
tmp_expression_value_35 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_35 == NULL));
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_SEEK_CUR);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 391;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 391;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_15:;
branch_end_11:;
branch_end_10:;
branch_end_8:;
branch_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_39;
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_36;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 392;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_36 = par_self;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = mod_consts.const_str_plain_L;
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_39 = mod_consts.const_str_plain_L;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_39 = mod_consts.const_str_plain_P;
condexpr_end_1:;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_39;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_37;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_11;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_tuple_element_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = par_self;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_set_as_raw);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_bytes_arg_1 = var_data;
tmp_args_element_value_11 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rawmode);
tmp_args_element_value_12 = var_rawmode;
tmp_tuple_element_1 = const_int_0;
tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_11;
PyTuple_SET_ITEM0(tmp_args_element_value_13, 0, tmp_tuple_element_1);
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_39 = par_self;
tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain_args);
if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_11 = const_int_neg_1;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_11, -1);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_13);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame.f_lineno = 393;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__5_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__5_decode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__5_decode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__5_decode,
    type_description_1,
    par_self,
    par_buffer,
    var_rle4,
    var_data,
    var_x,
    var_dest_length,
    var_pixels,
    var_byte,
    var_num_pixels,
    var_first_pixel,
    var_second_pixel,
    var_index,
    var_bytes_read,
    var_right,
    var_up,
    var_byte_count,
    var_byte_read,
    var_rawmode
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__5_decode == cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__5_decode = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__5_decode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = mod_consts.const_tuple_int_neg_1_int_0_tuple;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_rle4);
CHECK_OBJECT(var_rle4);
Py_DECREF(var_rle4);
var_rle4 = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_x);
var_x = NULL;
CHECK_OBJECT(var_dest_length);
CHECK_OBJECT(var_dest_length);
Py_DECREF(var_dest_length);
var_dest_length = NULL;
Py_XDECREF(var_pixels);
var_pixels = NULL;
Py_XDECREF(var_byte);
var_byte = NULL;
Py_XDECREF(var_num_pixels);
var_num_pixels = NULL;
Py_XDECREF(var_first_pixel);
var_first_pixel = NULL;
Py_XDECREF(var_second_pixel);
var_second_pixel = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_bytes_read);
var_bytes_read = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_up);
var_up = NULL;
Py_XDECREF(var_byte_count);
var_byte_count = NULL;
Py_XDECREF(var_byte_read);
var_byte_read = NULL;
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rle4);
var_rle4 = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_dest_length);
var_dest_length = NULL;
Py_XDECREF(var_pixels);
var_pixels = NULL;
Py_XDECREF(var_byte);
var_byte = NULL;
Py_XDECREF(var_num_pixels);
var_num_pixels = NULL;
Py_XDECREF(var_first_pixel);
var_first_pixel = NULL;
Py_XDECREF(var_second_pixel);
var_second_pixel = NULL;
Py_XDECREF(var_index);
var_index = NULL;
Py_XDECREF(var_bytes_read);
var_bytes_read = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_up);
var_up = NULL;
Py_XDECREF(var_byte_count);
var_byte_count = NULL;
Py_XDECREF(var_byte_read);
var_byte_read = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
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
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_buffer);
Py_DECREF(par_buffer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$BmpImagePlugin$$$function__6__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__6__open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open = MAKE_FUNCTION_FRAME(tstate, code_objects_2fd8d85ebfb9bbba57527dfd0cab2cc8, module_PIL$BmpImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__6__open = cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__6__open);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__6__open) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_PIL$BmpImagePlugin$$$function__6__open->m_frame.f_lineno = 405;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__bitmap);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__6__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__6__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__6__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__6__open,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__6__open == cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__6__open = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__6__open);

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


static PyObject *impl_PIL$BmpImagePlugin$$$function__7__dib_save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save = MAKE_FUNCTION_FRAME(tstate, code_objects_9ece6503aed0777f6ecabf501706dabd, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save = cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_PIL$BmpImagePlugin$_save(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
CHECK_OBJECT(par_fp);
tmp_args_element_value_2 = par_fp;
CHECK_OBJECT(par_filename);
tmp_args_element_value_3 = par_filename;
tmp_args_element_value_4 = Py_False;
frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save->m_frame.f_lineno = 423;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save,
    type_description_1,
    par_im,
    par_fp,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save == cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__7__dib_save);

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


static PyObject *impl_PIL$BmpImagePlugin$$$function__8__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *par_bitmap_header = python_pars[3];
PyObject *var_rawmode = NULL;
PyObject *var_bits = NULL;
PyObject *var_colors = NULL;
PyObject *var_e = NULL;
PyObject *var_msg = NULL;
PyObject *var_info = NULL;
PyObject *var_dpi = NULL;
PyObject *var_ppm = NULL;
PyObject *var_stride = NULL;
PyObject *var_image = NULL;
PyObject *var_palette = NULL;
PyObject *var_offset = NULL;
PyObject *var_file_size = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
PyObject *tmp_genexpr_3__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$function__8__save;
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
static struct Nuitka_FrameObject *cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save)) {
    Py_XDECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save = MAKE_FUNCTION_FRAME(tstate, code_objects_77cb4ee8dce894083f345ee7f15ace57, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_type_description == NULL);
frame_frame_PIL$BmpImagePlugin$$$function__8__save = cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$function__8__save);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$function__8__save) == 2);

// Framed code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_PIL$BmpImagePlugin$SAVE(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SAVE);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
    goto try_except_handler_3;
}
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
    goto try_except_handler_3;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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



exception_lineno = 430;
type_description_1 = "oooooooooooooNoooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__8__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__8__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_5;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_4a6352c6771b4dd5e216bc9acc20f853;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im);
tmp_expression_value_3 = par_im;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooooNoooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooooooNoooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ba1b8126167fc89a047f1c6dc0d784b4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_6 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 433;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 433;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooooooNoooo";
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
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 429;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame)) {
        frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooNoooo";
goto try_except_handler_5;
branch_end_1:;
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_7;
    Py_INCREF(var_rawmode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_bits;
    var_bits = tmp_assign_source_8;
    Py_INCREF(var_bits);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_colors;
    var_colors = tmp_assign_source_9;
    Py_INCREF(var_colors);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_im);
tmp_expression_value_4 = par_im;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encoderinfo);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_info);
tmp_expression_value_5 = var_info;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 437;
tmp_assign_source_11 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_dpi_tuple_int_pos_96_int_pos_96_tuple_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dpi;
    var_dpi = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_arg_1;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_dpi);
tmp_iter_arg_2 = var_dpi;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_tuple_arg_1 = MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_12 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ppm;
    var_ppm = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
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


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_mult_expr_right_1 = var_bits;
tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_int_pos_7;
tmp_floordiv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_8;
tmp_add_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_3;
tmp_bitand_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_neg_4;
tmp_assign_source_14 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stride;
    var_stride = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_stride);
tmp_mult_expr_left_2 = var_stride;
CHECK_OBJECT(par_im);
tmp_expression_value_9 = par_im;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_size);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_pos_1;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image;
    var_image = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_im);
tmp_expression_value_10 = par_im;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_1;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "oooooooooooooNoooo";
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
PyObject *tmp_assign_source_16;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_bytes_arg_value_1 = const_bytes_empty;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = mod_consts.const_tuple_int_0_int_pos_255_tuple;
tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = tmp_genexpr_2__$0;
    tmp_genexpr_2__$0 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_assign_source_16 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_L;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooNoooo";
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
PyObject *tmp_assign_source_18;
PyObject *tmp_bytes_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_bytes_arg_value_2 = const_bytes_empty;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_4;
tmp_iter_arg_4 = mod_consts.const_xrange_0_256;
tmp_assign_source_19 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
assert(!(tmp_assign_source_19 == NULL));
{
    PyObject *old = tmp_genexpr_3__$0;
    tmp_genexpr_3__$0 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_3__$0);
tmp_iterable_value_2 = MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr(tstate, tmp_closure_3);

goto try_return_handler_9;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(tmp_genexpr_3__$0);
CHECK_OBJECT(tmp_genexpr_3__$0);
Py_DECREF(tmp_genexpr_3__$0);
tmp_genexpr_3__$0 = NULL;
goto outline_result_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_assign_source_18 = BYTES_JOIN(tstate, tmp_bytes_arg_value_2, tmp_iterable_value_2);
CHECK_OBJECT(tmp_iterable_value_2);
Py_DECREF(tmp_iterable_value_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_im);
tmp_expression_value_12 = par_im;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_P;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "oooooooooooooNoooo";
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_im);
tmp_expression_value_13 = par_im;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 451;
tmp_assign_source_20 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getpalette,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_RGB_str_plain_BGRX_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_palette);
tmp_len_arg_1 = var_palette;
tmp_floordiv_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_2 = mod_consts.const_int_pos_4;
tmp_assign_source_21 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 452;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_colors;
    assert(old != NULL);
    var_colors = tmp_assign_source_21;
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = Py_None;
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_22;
    Py_INCREF(var_palette);
    Py_XDECREF(old);
}

}
branch_end_4:;
branch_end_3:;
branch_end_2:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
CHECK_OBJECT(par_bitmap_header);
tmp_truth_name_1 = CHECK_IF_TRUE(par_bitmap_header);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 457;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
tmp_add_expr_left_3 = mod_consts.const_int_pos_54;
CHECK_OBJECT(var_colors);
tmp_mult_expr_left_3 = var_colors;
tmp_mult_expr_right_3 = mod_consts.const_int_pos_4;
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(var_offset);
tmp_add_expr_left_4 = var_offset;
CHECK_OBJECT(var_image);
tmp_add_expr_right_4 = var_image;
tmp_assign_source_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_file_size;
    var_file_size = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_file_size);
tmp_cmp_expr_left_5 = var_file_size;
tmp_cmp_expr_right_5 = mod_consts.const_int_hex_ffffffff;
tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooooooooooooNoooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_41321b8c38f9299ee0d891975210802f;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 462;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 462;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooNoooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_fp);
tmp_expression_value_14 = par_fp;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_write);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_7 = mod_consts.const_bytes_digest_181e1eeb195f3bcd8ad8a954f597cb5b;
tmp_called_value_3 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 465;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_file_size);
tmp_args_element_value_2 = var_file_size;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 465;
tmp_add_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 465;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 465;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 466;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 466;
tmp_add_expr_right_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_int_0_tuple);

if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 466;
type_description_1 = "oooooooooooooNoooo";
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

exception_lineno = 466;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 467;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_offset);
tmp_args_element_value_3 = var_offset;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 467;
tmp_add_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 467;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 467;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 463;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
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
PyObject *tmp_called_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_called_value_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_12;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_fp);
tmp_expression_value_15 = par_fp;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_write);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 472;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 472;
tmp_add_expr_left_17 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_int_pos_40_tuple);

if (tmp_add_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 472;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 473;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_17 = par_im;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_size);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 473;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = const_int_0;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_4, 0);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 473;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 473;
tmp_add_expr_right_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_add_expr_right_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_17);

exception_lineno = 473;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 473;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 474;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_19 = par_im;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_size);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 474;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 474;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 474;
tmp_add_expr_right_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_add_expr_right_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_16);

exception_lineno = 474;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 474;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = module_var_accessor_PIL$BmpImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_15);

exception_lineno = 475;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 475;
tmp_add_expr_right_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_int_pos_1_tuple);

if (tmp_add_expr_right_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_15);

exception_lineno = 475;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 475;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_PIL$BmpImagePlugin$o16(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o16);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 476;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bits);
tmp_args_element_value_7 = var_bits;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 476;
tmp_add_expr_right_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
if (tmp_add_expr_right_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_14);

exception_lineno = 476;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 476;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 477;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 477;
tmp_add_expr_right_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_int_0_tuple);

if (tmp_add_expr_right_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_13);

exception_lineno = 477;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 477;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_12);

exception_lineno = 478;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_image);
tmp_args_element_value_8 = var_image;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 478;
tmp_add_expr_right_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
if (tmp_add_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_12);

exception_lineno = 478;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 478;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_11);

exception_lineno = 479;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ppm);
tmp_expression_value_20 = var_ppm;
tmp_subscript_value_6 = const_int_0;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_6, 0);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_11);

exception_lineno = 479;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 479;
tmp_add_expr_right_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_add_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_11);

exception_lineno = 479;
type_description_1 = "oooooooooooooNoooo";
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
Py_DECREF(tmp_called_value_6);

exception_lineno = 479;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_10);

exception_lineno = 480;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ppm);
tmp_expression_value_21 = var_ppm;
tmp_subscript_value_7 = const_int_pos_1;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_7, 1);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_10);

exception_lineno = 480;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 480;
tmp_add_expr_right_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_add_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_10);

exception_lineno = 480;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_left_10);
Py_DECREF(tmp_add_expr_left_10);
CHECK_OBJECT(tmp_add_expr_right_10);
Py_DECREF(tmp_add_expr_right_10);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 480;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 481;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_colors);
tmp_args_element_value_11 = var_colors;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 481;
tmp_add_expr_right_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_11);
if (tmp_add_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 481;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
CHECK_OBJECT(tmp_add_expr_right_9);
Py_DECREF(tmp_add_expr_right_9);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 481;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = module_var_accessor_PIL$BmpImagePlugin$o32(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_o32);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 482;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_colors);
tmp_args_element_value_12 = var_colors;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 482;
tmp_add_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_12);
if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 482;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
CHECK_OBJECT(tmp_add_expr_right_8);
Py_DECREF(tmp_add_expr_right_8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 482;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 471;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_fp);
tmp_called_instance_2 = par_fp;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 485;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_write,
    PyTuple_GET_ITEM(mod_consts.const_tuple_bytes_empty_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
if (var_palette == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 487;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_palette);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_fp);
tmp_expression_value_22 = par_fp;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_write);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
if (var_palette == NULL) {
Py_DECREF(tmp_called_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 488;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = var_palette;
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 488;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 488;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_7:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_add_expr_left_18;
PyObject *tmp_add_expr_right_18;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_tuple_element_2;
tmp_expression_value_23 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 490;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__save);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_14 = par_im;
CHECK_OBJECT(par_fp);
tmp_args_element_value_15 = par_fp;
tmp_expression_value_24 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 491;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain__Tile);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 491;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = mod_consts.const_str_plain_raw;
tmp_add_expr_left_18 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_im);
tmp_expression_value_25 = par_im;
tmp_add_expr_right_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_called_value_20);

exception_lineno = 491;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
CHECK_OBJECT(tmp_add_expr_right_18);
Py_DECREF(tmp_add_expr_right_18);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_called_value_20);

exception_lineno = 491;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = const_int_0;
CHECK_OBJECT(var_rawmode);
tmp_tuple_element_2 = var_rawmode;
tmp_args_element_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_element_value_20, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_stride);
tmp_tuple_element_2 = var_stride;
PyTuple_SET_ITEM0(tmp_args_element_value_20, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = const_int_neg_1;
PyTuple_SET_ITEM0(tmp_args_element_value_20, 2, tmp_tuple_element_2);
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 491;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 491;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_16, 0, tmp_list_element_1);
frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame.f_lineno = 490;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;
type_description_1 = "oooooooooooooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$function__8__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$function__8__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$function__8__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$function__8__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    par_bitmap_header,
    var_rawmode,
    var_bits,
    var_colors,
    var_e,
    var_msg,
    var_info,
    var_dpi,
    var_ppm,
    var_stride,
    NULL,
    var_image,
    var_palette,
    var_offset,
    var_file_size
);


// Release cached frame if used for exception.
if (frame_frame_PIL$BmpImagePlugin$$$function__8__save == cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save);
    cache_frame_frame_PIL$BmpImagePlugin$$$function__8__save = NULL;
}

assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$function__8__save);

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
CHECK_OBJECT(var_rawmode);
CHECK_OBJECT(var_rawmode);
Py_DECREF(var_rawmode);
var_rawmode = NULL;
CHECK_OBJECT(var_bits);
CHECK_OBJECT(var_bits);
Py_DECREF(var_bits);
var_bits = NULL;
CHECK_OBJECT(var_colors);
CHECK_OBJECT(var_colors);
Py_DECREF(var_colors);
var_colors = NULL;
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
CHECK_OBJECT(var_dpi);
CHECK_OBJECT(var_dpi);
Py_DECREF(var_dpi);
var_dpi = NULL;
CHECK_OBJECT(var_ppm);
CHECK_OBJECT(var_ppm);
Py_DECREF(var_ppm);
var_ppm = NULL;
CHECK_OBJECT(var_stride);
CHECK_OBJECT(var_stride);
Py_DECREF(var_stride);
var_stride = NULL;
CHECK_OBJECT(var_image);
CHECK_OBJECT(var_image);
Py_DECREF(var_image);
var_image = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_file_size);
var_file_size = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_bits);
var_bits = NULL;
Py_XDECREF(var_colors);
var_colors = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_dpi);
var_dpi = NULL;
Py_XDECREF(var_ppm);
var_ppm = NULL;
Py_XDECREF(var_stride);
var_stride = NULL;
Py_XDECREF(var_image);
var_image = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
Py_XDECREF(var_file_size);
var_file_size = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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
CHECK_OBJECT(par_bitmap_header);
Py_DECREF(par_bitmap_header);
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
CHECK_OBJECT(par_bitmap_header);
Py_DECREF(par_bitmap_header);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_locals {
PyObject *var_x;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_x = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e258421d2b518fd4bb27d21a8ac09fd3, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 440;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_mult_expr_left_1 = generator_heap->var_x;
tmp_mult_expr_right_1 = mod_consts.const_float_39_3701;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_float_0_5;
tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_x
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_context,
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610,
#endif
        code_objects_e258421d2b518fd4bb27d21a8ac09fd3,
        closure,
        1,
#if 1
        sizeof(struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_locals {
PyObject *var_i;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_locals *generator_heap = (struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_i = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_610327e80726c29986fda14124f54abb, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 447;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_1 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 447;
tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_3;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_bytes_null;
tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_i
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_context,
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610,
#endif
        code_objects_610327e80726c29986fda14124f54abb,
        closure,
        1,
#if 1
        sizeof(struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_locals {
PyObject *var_i;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_locals *generator_heap = (struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_i = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6f95db69a8908f0165e557eb11a18ae0, module_PIL$BmpImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 449;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_PIL$BmpImagePlugin$o8(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_o8);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_1 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 449;
tmp_mult_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_3;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_bytes_null;
tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_mult_expr_left_1, sizeof(PyObject *), &tmp_mult_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 449;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_i
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_context,
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610,
#endif
        code_objects_6f95db69a8908f0165e557eb11a18ae0,
        closure,
        1,
#if 1
        sizeof(struct PIL$BmpImagePlugin$$$function__8__save$$$genexpr__3_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__1__accept,
        mod_consts.const_str_plain__accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b6aea686c082c347df8bb6e18de16957,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__2__dib_accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__2__dib_accept,
        mod_consts.const_str_plain__dib_accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f0242d1ceea665c46df4090c8d0b86c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__3__bitmap(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__3__bitmap,
        mod_consts.const_str_plain__bitmap,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_40e9a04769198a44edba14d650f76b42,
#endif
        code_objects_3f7cbce4f3afa42ab194ce0741c3b0dd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_digest_018fa3a8297e7fda007fbc3da9393e2c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__4__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__4__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bde65f20a0edb67aa82d817e7642f0ab,
#endif
        code_objects_e132ec32c70d7e0d75b869b99dc7cd75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        mod_consts.const_str_digest_ea43babb238944275468af1b9f1e22c1,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__5_decode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__5_decode,
        mod_consts.const_str_plain_decode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39192bd16458e9098fb134f1b3e9e35c,
#endif
        code_objects_3d4dc1e9c9227b0e8be327431175f736,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__6__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__6__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9184770994a8dfc7f5067f9878a65025,
#endif
        code_objects_2fd8d85ebfb9bbba57527dfd0cab2cc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__7__dib_save(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__7__dib_save,
        mod_consts.const_str_plain__dib_save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9ece6503aed0777f6ecabf501706dabd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__8__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$BmpImagePlugin$$$function__8__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_77cb4ee8dce894083f345ee7f15ace57,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$BmpImagePlugin,
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

static function_impl_code const function_table_PIL$BmpImagePlugin[] = {
impl_PIL$BmpImagePlugin$$$function__1__accept,
impl_PIL$BmpImagePlugin$$$function__2__dib_accept,
impl_PIL$BmpImagePlugin$$$function__3__bitmap,
impl_PIL$BmpImagePlugin$$$function__4__open,
impl_PIL$BmpImagePlugin$$$function__5_decode,
impl_PIL$BmpImagePlugin$$$function__6__open,
impl_PIL$BmpImagePlugin$$$function__7__dib_save,
impl_PIL$BmpImagePlugin$$$function__8__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$BmpImagePlugin);
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
        module_PIL$BmpImagePlugin,
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
        function_table_PIL$BmpImagePlugin,
        sizeof(function_table_PIL$BmpImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.BmpImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$BmpImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$BmpImagePlugin");

    // Store the module for future use.
    module_PIL$BmpImagePlugin = module;

    moduledict_PIL$BmpImagePlugin = MODULE_DICT(module_PIL$BmpImagePlugin);

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
        PRINT_STRING("PIL$BmpImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$BmpImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$BmpImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.BmpImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$BmpImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$BmpImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$BmpImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$BmpImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$BmpImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$BmpImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$BmpImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$BmpImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_BmpImageFile$for_loop_1__for_iterator = NULL;
PyObject *tmp_BmpImageFile$for_loop_1__iter_value = NULL;
PyObject *tmp_BmpImageFile$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_BmpImageFile$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_BmpImageFile$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$BmpImagePlugin = MAKE_MODULE_FRAME(code_objects_6e7a856b47dfee048efa7e7981f40e1f, module_PIL$BmpImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$BmpImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$BmpImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_9);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_str_plain_ImagePalette_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 30;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_ImagePalette,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette, tmp_assign_source_13);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_i16le_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 31;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_i16le,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_i16le);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i16, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_i32le_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 32;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_i32le,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_i32le);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_i32, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_4 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_o8_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 33;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_o8,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_o8);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o8, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_5 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_o16le_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 34;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_o16le,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_o16le);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o16, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__binary;
tmp_globals_arg_value_6 = (PyObject *)moduledict_PIL$BmpImagePlugin;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_o32le_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 35;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_PIL$BmpImagePlugin,
        mod_consts.const_str_plain_o32le,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_o32le);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_o32, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = DICT_COPY(tstate, mod_consts.const_dict_58d7ae98441ebd965650132eb201c985);
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BIT2MODE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_USE_RAW_ALPHA, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__1__accept(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_38f5e37decacb42d0c9efbc0c4d3adea);

tmp_assign_source_22 = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__2__dib_accept(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_accept, tmp_assign_source_22);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ImageFile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
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


exception_lineno = 65;

    goto try_except_handler_3;
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


exception_lineno = 65;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_26;
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


exception_lineno = 65;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_27;
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


exception_lineno = 65;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_BmpImageFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 65;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
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


exception_lineno = 65;

    goto try_except_handler_3;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_7, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
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


exception_lineno = 65;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_3;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 65;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
branch_end_1:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_fc131ae411c74aac4584d129675a904d;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_BmpImageFile;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_65;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_f93ec395659f55e71fe70d4d9c5a1187, module_PIL$BmpImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2, locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_plain_BMP;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = DICT_COPY(tstate, mod_consts.const_dict_573115a447ef2f8dd7ef6812133c5976);
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_COMPRESSIONS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = PyObject_GetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_COMPRESSIONS);

if (unlikely(tmp_expression_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMPRESSIONS);

exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2->m_frame.f_lineno = 74;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
{
    PyObject *old = tmp_BmpImageFile$for_loop_1__for_iterator;
    tmp_BmpImageFile$for_loop_1__for_iterator = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__for_iterator);
tmp_next_source_1 = tmp_BmpImageFile$for_loop_1__for_iterator;
tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_31 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_2 = "o";
exception_lineno = 74;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_BmpImageFile$for_loop_1__iter_value;
    tmp_BmpImageFile$for_loop_1__iter_value = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_BmpImageFile$for_loop_1__iter_value;
tmp_assign_source_32 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_BmpImageFile$tuple_unpack_1__source_iter;
    tmp_BmpImageFile$tuple_unpack_1__source_iter = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_BmpImageFile$tuple_unpack_1__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_BmpImageFile$tuple_unpack_1__element_1;
    tmp_BmpImageFile$tuple_unpack_1__element_1 = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_BmpImageFile$tuple_unpack_1__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_BmpImageFile$tuple_unpack_1__element_2;
    tmp_BmpImageFile$tuple_unpack_1__element_2 = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_BmpImageFile$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_8;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
Py_DECREF(tmp_BmpImageFile$tuple_unpack_1__source_iter);
tmp_BmpImageFile$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_7;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__source_iter);
Py_DECREF(tmp_BmpImageFile$tuple_unpack_1__source_iter);
tmp_BmpImageFile$tuple_unpack_1__source_iter = NULL;
CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__element_1);
tmp_dictset_value = tmp_BmpImageFile$tuple_unpack_1__element_1;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_k, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_7;
}
Py_XDECREF(tmp_BmpImageFile$tuple_unpack_1__element_1);
tmp_BmpImageFile$tuple_unpack_1__element_1 = NULL;

CHECK_OBJECT(tmp_BmpImageFile$tuple_unpack_1__element_2);
tmp_dictset_value = tmp_BmpImageFile$tuple_unpack_1__element_2;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_v, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_7;
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_BmpImageFile$tuple_unpack_1__element_1);
tmp_BmpImageFile$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_BmpImageFile$tuple_unpack_1__element_2);
tmp_BmpImageFile$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
Py_XDECREF(tmp_BmpImageFile$tuple_unpack_1__element_2);
tmp_BmpImageFile$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_3;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = PyObject_GetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_v);

if (unlikely(tmp_ass_subvalue_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_res = MAPPING_HAS_ITEM(tstate, locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_vars);

if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_value_3 = PyObject_GetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_vars);

if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
Py_DECREF(tmp_ass_subvalue_1);
RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_vars);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2->m_frame.f_lineno = 75;
tmp_ass_subscribed_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_ass_subscribed_1 = locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65;
Py_INCREF(tmp_ass_subscribed_1);
condexpr_end_2:;
tmp_ass_subscript_1 = PyObject_GetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain_k);

if (tmp_ass_subscript_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_ass_subscript_1 = module_var_accessor_PIL$BmpImagePlugin$k(tstate);
if (unlikely(tmp_ass_subscript_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
        Py_INCREF(tmp_ass_subscript_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_6;
    }
}

tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_BmpImageFile$for_loop_1__iter_value);
tmp_BmpImageFile$for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__for_iterator);
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__for_iterator);
Py_DECREF(tmp_BmpImageFile$for_loop_1__for_iterator);
tmp_BmpImageFile$for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_BmpImageFile$for_loop_1__iter_value);
tmp_BmpImageFile$for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__for_iterator);
CHECK_OBJECT(tmp_BmpImageFile$for_loop_1__for_iterator);
Py_DECREF(tmp_BmpImageFile$for_loop_1__for_iterator);
tmp_BmpImageFile$for_loop_1__for_iterator = NULL;
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_int_0_int_0_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_7a7644b252e6e6939d7e22a2ba55a5b7);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__3__bitmap(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain__bitmap, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__4__open(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__1_BmpImageFile_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_4f91408d01edc8ff314ed19f8d333ee5_tuple;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_BmpImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65);
locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65);
locals_PIL$BmpImagePlugin$$$class__1_BmpImageFile_65 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 65;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpImageFile, tmp_assign_source_29);
}
goto try_end_6;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_PIL$BmpImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_PyDecoder);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_BmpRleDecoder;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 324;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_9;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 324;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 324;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
branch_end_4:;
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_BmpRleDecoder;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_324;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3 = MAKE_CLASS_FRAME(tstate, code_objects_176f2279df013bd5780c73f3551cbf26, module_PIL$BmpImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3, locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3) == 2);

// Framed code:
tmp_dictset_value = Py_True;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, mod_consts.const_str_plain__pulls_fd, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_598da6480926a46add7ef4a4fe0cc2f1);

tmp_dictset_value = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__5_decode(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, mod_consts.const_str_plain_decode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_BmpRleDecoder;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto try_except_handler_11;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_42 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324);
locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324);
locals_PIL$BmpImagePlugin$$$class__2_BmpRleDecoder_324 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 324;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BmpRleDecoder, tmp_assign_source_42);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_DibImageFile;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 400;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_11, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_12;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 400;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 400;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
branch_end_7:;
{
PyObject *tmp_assign_source_50;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_af7895b8e9a7643f2ab308f77e96c311;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_DibImageFile;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_400;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4 = MAKE_CLASS_FRAME(tstate, code_objects_489fb42ed5f27dc0dd74245646fc0123, module_PIL$BmpImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4, locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4);
assert(Py_REFCNT(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_DIB;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_str_digest_7694c8aa5098fdbfc9d126eeda02356f;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__6__open(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$BmpImagePlugin$$$class__3_DibImageFile_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_DibImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto try_except_handler_14;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_50 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_50);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400);
locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400);
locals_PIL$BmpImagePlugin$$$class__3_DibImageFile_400 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 400;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DibImageFile, tmp_assign_source_50);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
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
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = DICT_COPY(tstate, mod_consts.const_dict_6c9a4e8e23277b1848566a99b2c6e76d);
UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SAVE, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_53 = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__7__dib_save(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__dib_save, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_8;
tmp_defaults_2 = mod_consts.const_tuple_true_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_fd4f57dd85021582b209bf03b901798e);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_54 = MAKE_FUNCTION_PIL$BmpImagePlugin$$$function__8__save(tstate, tmp_defaults_2, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_54);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_22 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_register_open);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;

    goto frame_exception_exit_1;
}
tmp_expression_value_23 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 500;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_format);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 500;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 500;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$BmpImagePlugin$_accept(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 500;

    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_5;
tmp_expression_value_24 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_register_save);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;

    goto frame_exception_exit_1;
}
tmp_expression_value_25 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 501;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_format);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 501;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_PIL$BmpImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 501;

    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 501;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_7;
tmp_expression_value_26 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_register_extension);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;

    goto frame_exception_exit_1;
}
tmp_expression_value_27 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_8);

exception_lineno = 503;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_format);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 503;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_digest_ad55bc4c4352c79ec48d6f5e7a30f8a2;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 503;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_element_value_9;
tmp_expression_value_28 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 505;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_register_mime);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;

    goto frame_exception_exit_1;
}
tmp_expression_value_29 = module_var_accessor_PIL$BmpImagePlugin$BmpImageFile(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpImageFile);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 505;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain_format);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 505;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 505;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_expression_value_30 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 507;

    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_register_decoder);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_bmp_rle;
tmp_args_element_value_11 = module_var_accessor_PIL$BmpImagePlugin$BmpRleDecoder(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BmpRleDecoder);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 507;

    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 507;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_expression_value_31 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_register_open);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_expression_value_32 = module_var_accessor_PIL$BmpImagePlugin$DibImageFile(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DibImageFile);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_format);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = module_var_accessor_PIL$BmpImagePlugin$DibImageFile(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DibImageFile);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 509;

    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = module_var_accessor_PIL$BmpImagePlugin$_dib_accept(tstate);
if (unlikely(tmp_args_element_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dib_accept);
}

if (tmp_args_element_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 509;

    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 509;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_element_value_16;
tmp_expression_value_33 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_register_save);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_expression_value_34 = module_var_accessor_PIL$BmpImagePlugin$DibImageFile(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DibImageFile);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain_format);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 510;

    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = module_var_accessor_PIL$BmpImagePlugin$_dib_save(tstate);
if (unlikely(tmp_args_element_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dib_save);
}

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_args_element_value_15);

exception_lineno = 510;

    goto frame_exception_exit_1;
}
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 510;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_element_value_18;
tmp_expression_value_35 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;

    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_register_extension);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;

    goto frame_exception_exit_1;
}
tmp_expression_value_36 = module_var_accessor_PIL$BmpImagePlugin$DibImageFile(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DibImageFile);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 512;

    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain_format);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 512;

    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = mod_consts.const_str_digest_2faeda2d7dc02f33bf8119f46b6cd1e8;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 512;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_37;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_38;
PyObject *tmp_args_element_value_20;
tmp_expression_value_37 = module_var_accessor_PIL$BmpImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_register_mime);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_expression_value_38 = module_var_accessor_PIL$BmpImagePlugin$DibImageFile(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DibImageFile);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_14);

exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_format);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_14);

exception_lineno = 514;

    goto frame_exception_exit_1;
}
tmp_args_element_value_20 = mod_consts.const_str_digest_b29042b8bf76639bd00bc6af12b19b3b;
frame_frame_PIL$BmpImagePlugin->m_frame.f_lineno = 514;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$BmpImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$BmpImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$BmpImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$BmpImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$BmpImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.BmpImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$BmpImagePlugin);
    return module_PIL$BmpImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$BmpImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$BmpImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
