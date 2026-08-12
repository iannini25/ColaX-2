/* Generated code for Python module 'PIL$ImageOps'
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



/* The "module_PIL$ImageOps" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageOps;
PyDictObject *moduledict_PIL$ImageOps;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_066dfb7766ef09a994df6a690d22b70c;
PyObject *const_tuple_str_plain_ImageColor_tuple;
PyObject *const_str_plain_ImageColor;
PyObject *const_str_plain_getcolor;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_P;
PyObject *const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d;
PyObject *const_tuple_str_plain_L_str_plain_RGB_tuple;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain_point;
PyObject *const_str_plain_lut;
PyObject *const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1;
PyObject *const_str_plain_convert;
PyObject *const_tuple_str_plain_L_tuple;
PyObject *const_str_plain_histogram;
PyObject *const_int_pos_256;
PyObject *const_str_plain_ignore;
PyObject *const_str_plain_h;
PyObject *const_str_plain_cutoff;
PyObject *const_xrange_0_256;
PyObject *const_str_plain_n;
PyObject *const_int_pos_100;
PyObject *const_str_plain_cut;
PyObject *const_xrange_255_neg1_neg1;
PyObject *const_str_plain_hi;
PyObject *const_str_plain_lo;
PyObject *const_list_e2aba17168786245d6b6e3d7016f8784_list;
PyObject *const_float_255_0;
PyObject *const_str_plain_scale;
PyObject *const_str_plain_offset;
PyObject *const_int_pos_255;
PyObject *const_str_plain_append;
PyObject *const_str_plain__lut;
PyObject *const_str_digest_48bd9d5e94145d5dd81a74137237fc11;
PyObject *const_str_plain_L;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain__color;
PyObject *const_str_plain_red;
PyObject *const_str_plain_green;
PyObject *const_str_plain_blue;
PyObject *const_int_pos_2;
PyObject *const_tuple_str_plain_RGB_tuple;
PyObject *const_str_digest_fc479f134b75772dcc1882a17a0d62c4;
PyObject *const_str_plain_width;
PyObject *const_str_plain_height;
PyObject *const_str_plain_round;
PyObject *const_str_plain_resize;
PyObject *const_tuple_str_plain_resample_tuple;
PyObject *const_str_digest_d5bd363a00c606d863baa321bed96191;
PyObject *const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6;
PyObject *const_str_plain_contain;
PyObject *const_str_plain_size;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_new;
PyObject *const_str_plain_palette;
PyObject *const_str_plain_getpalette;
PyObject *const_str_plain_putpalette;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_str_plain_paste;
PyObject *const_str_plain_out;
PyObject *const_str_digest_12ad32218e7d38713dc409220242d564;
PyObject *const_str_plain__border;
PyObject *const_str_plain_crop;
PyObject *const_str_digest_f4361b21fab231aa414ae827b9c9b523;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_6f15e8e85b056e68df7ff9e33febf26e;
PyObject *const_str_digest_37d895330350d809c5330d8d9f88323c;
PyObject *const_str_plain_transform;
PyObject *const_str_plain_Transform;
PyObject *const_str_plain_MESH;
PyObject *const_str_plain_getmesh;
PyObject *const_str_digest_32a4bb90af7c6047e049f0d71161347c;
PyObject *const_str_plain_image;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_add;
PyObject *const_str_plain_step;
PyObject *const_str_digest_b66496e8feaccb547f510d315199ba76;
PyObject *const_str_plain_ImagePalette;
PyObject *const_str_plain_color;
PyObject *const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c;
PyObject *const_float_0_5;
PyObject *const_str_plain_bleed;
PyObject *const_str_plain_centering_x;
PyObject *const_str_plain_centering_y;
PyObject *const_tuple_str_plain_box_tuple;
PyObject *const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a;
PyObject *const_str_plain_transpose;
PyObject *const_str_plain_Transpose;
PyObject *const_str_plain_FLIP_TOP_BOTTOM;
PyObject *const_str_digest_712596ff4d2d572c94f0d6e4d255656c;
PyObject *const_str_digest_8d03ceab54e428493531a2032f386980;
PyObject *const_list_170c0bc0f993a1733d8778c17d663abd_list;
PyObject *const_str_plain_1;
PyObject *const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1;
PyObject *const_str_plain_FLIP_LEFT_RIGHT;
PyObject *const_str_digest_e3c9704fda121c93bff79864bb1a57e9;
PyObject *const_int_pos_8;
PyObject *const_str_plain_mask;
PyObject *const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41;
PyObject *const_str_digest_fd1b6221dfb4e63c3934fc71004d7900;
PyObject *const_str_plain_load;
PyObject *const_str_plain_getexif;
PyObject *const_str_plain_ExifTags;
PyObject *const_str_plain_Base;
PyObject *const_str_plain_Orientation;
PyObject *const_int_pos_3;
PyObject *const_str_plain_ROTATE_180;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_str_plain_TRANSPOSE;
PyObject *const_int_pos_6;
PyObject *const_str_plain_ROTATE_270;
PyObject *const_int_pos_7;
PyObject *const_str_plain_TRANSVERSE;
PyObject *const_str_plain_ROTATE_90;
PyObject *const_str_plain_im;
PyObject *const_str_plain__size;
PyObject *const_str_plain_transposed_image;
PyObject *const_str_plain_exif;
PyObject *const_str_plain_info;
PyObject *const_str_plain_tobytes;
PyObject *const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64;
PyObject *const_str_plain_hex;
PyObject *const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple;
PyObject *const_str_plain_exif_image;
PyObject *const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple;
PyObject *const_str_plain_key;
PyObject *const_str_plain_re;
PyObject *const_str_plain_sub;
PyObject *const_str_plain_encode;
PyObject *const_str_digest_e31745474ebcf0114e568b4f61ca7428;
PyObject *const_str_plain_pattern;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_678f4b11f72301dfb1cdc8179025facb;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_functools;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Sequence_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Protocol;
PyObject *const_str_plain_overload;
PyObject *const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple;
PyObject *const_dict_b67f87a08a69039f44c1b91988e0565b;
PyObject *const_dict_858d20354f4e928d9ef6e4616b52df77;
PyObject *const_dict_f27765acc2293bb7797573d8b3cd3e2c;
PyObject *const_tuple_int_0_none_none_false_tuple;
PyObject *const_dict_14dd44032ebfb8016147fc67d40d7950;
PyObject *const_str_plain_autocontrast;
PyObject *const_tuple_none_int_0_int_pos_255_int_pos_127_tuple;
PyObject *const_dict_c003cbbb08a2290a167f1554500acc39;
PyObject *const_str_plain_colorize;
PyObject *const_str_plain_Resampling;
PyObject *const_str_plain_BICUBIC;
PyObject *const_dict_d1bcaee9235c07d213828b75fb214861;
PyObject *const_str_plain_cover;
PyObject *const_tuple_float_0_5_float_0_5_tuple;
PyObject *const_dict_82d41c9f2af47bc5e18c8ced4fdd4328;
PyObject *const_str_plain_pad;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_06d28aa710ed0b0461e2d49afa2be138;
PyObject *const_dict_6e59e305e1cf31886bea7b02ff7207c1;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_SupportsGetMesh;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_7804e186dc18e8851577a827cae056a9;
PyObject *const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95;
PyObject *const_int_pos_420;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_10374c2e368db55fd4cf4ec42c94ea67;
PyObject *const_str_digest_1531781be5a7b1ead687087a53a749f3;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_BILINEAR;
PyObject *const_dict_622106a19503ca778e3bc4e854d0ba48;
PyObject *const_str_plain_deform;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_b07c7e1e00b9e104bca2579c2a78723f;
PyObject *const_str_plain_equalize;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_dict_8b74ee4b0aeedb78441bd54112404beb;
PyObject *const_str_plain_expand;
PyObject *const_dict_04ad71b4d03055c591a1abafb7000083;
PyObject *const_str_plain_fit;
PyObject *const_dict_66ab2f018d54b7caf34e75b75d9aea3b;
PyObject *const_str_plain_flip;
PyObject *const_str_plain_grayscale;
PyObject *const_str_plain_invert;
PyObject *const_str_plain_mirror;
PyObject *const_dict_9b0d5a110bd6a08888eaa99cb2f24867;
PyObject *const_str_plain_posterize;
PyObject *const_tuple_int_pos_128_tuple;
PyObject *const_dict_0a79bbea496c148d6eb527827f7f3400;
PyObject *const_str_plain_solarize;
PyObject *const_dict_bdc2e715339d1427e801085144d498f6;
PyObject *const_str_plain_exif_transpose;
PyObject *const_dict_4c3f4edd60756b2065f0649150119420;
PyObject *const_dict_ca8fcfa176299e85617495a6bccd4fa2;
PyObject *const_dict_75f8b5b7e6213c75f4feeaec7792cf0c;
PyObject *const_str_digest_d0bb38022e94e9278d0f9bd19854f40b;
PyObject *const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple;
PyObject *const_str_digest_d446b483bfe1facf2173b6ad114e920e;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple;
PyObject *const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple;
PyObject *const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple;
PyObject *const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple;
PyObject *const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple;
PyObject *const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple;
PyObject *const_tuple_a318b6115997d4f003b9d1c392a81247_tuple;
PyObject *const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple;
PyObject *const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple;
PyObject *const_tuple_str_plain_image_str_plain_in_place_tuple;
PyObject *const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple;
PyObject *const_tuple_0120f2707b1b74449c611d17091c8461_tuple;
PyObject *const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple;
PyObject *const_tuple_str_plain_image_tuple;
PyObject *const_tuple_str_plain_self_str_plain_image_tuple;
PyObject *const_tuple_str_plain_image_str_plain_lut_tuple;
PyObject *const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple;
PyObject *const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple;
PyObject *const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple;
PyObject *const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[229];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageOps"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 229) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 229 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageOps"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c", mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ImageColor_tuple", mod_consts.const_tuple_str_plain_ImageColor_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageColor_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageColor", mod_consts.const_str_plain_ImageColor);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageColor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcolor", mod_consts.const_str_plain_getcolor);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_getcolor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d", mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_point);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lut", mod_consts.const_str_plain_lut);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_lut);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1", mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_L_tuple", mod_consts.const_tuple_str_plain_L_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_histogram", mod_consts.const_str_plain_histogram);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_histogram);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h", mod_consts.const_str_plain_h);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_h);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cutoff", mod_consts.const_str_plain_cutoff);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_cutoff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_xrange_0_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n", mod_consts.const_str_plain_n);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut", mod_consts.const_str_plain_cut);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_cut);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_255_neg1_neg1", mod_consts.const_xrange_255_neg1_neg1);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_xrange_255_neg1_neg1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_hi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lo", mod_consts.const_str_plain_lo);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_lo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list", mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_255_0", mod_consts.const_float_255_0);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_float_255_0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scale", mod_consts.const_str_plain_scale);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_scale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__lut", mod_consts.const_str_plain__lut);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__lut);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11", mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sequence", mod_consts.const_str_plain_Sequence);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__color", mod_consts.const_str_plain__color);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__color);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_red", mod_consts.const_str_plain_red);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_red);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_green", mod_consts.const_str_plain_green);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_green);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blue", mod_consts.const_str_plain_blue);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_blue);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGB_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4", mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resize", mod_consts.const_str_plain_resize);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_resize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_resample_tuple", mod_consts.const_tuple_str_plain_resample_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resample_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191", mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6", mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contain", mod_consts.const_str_plain_contain);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_contain);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putpalette", mod_consts.const_str_plain_putpalette);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_putpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paste", mod_consts.const_str_plain_paste);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_paste);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564", mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__border", mod_consts.const_str_plain__border);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__border);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_crop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523", mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e", mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c", mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transform", mod_consts.const_str_plain_transform);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Transform", mod_consts.const_str_plain_Transform);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Transform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MESH", mod_consts.const_str_plain_MESH);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_MESH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmesh", mod_consts.const_str_plain_getmesh);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmesh);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c", mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image", mod_consts.const_str_plain_image);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reduce", mod_consts.const_str_plain_reduce);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operator", mod_consts.const_str_plain_operator);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_step", mod_consts.const_str_plain_step);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_step);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76", mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_color", mod_consts.const_str_plain_color);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c", mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bleed", mod_consts.const_str_plain_bleed);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_bleed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_centering_x", mod_consts.const_str_plain_centering_x);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_centering_x);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_centering_y", mod_consts.const_str_plain_centering_y);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_centering_y);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_box_tuple", mod_consts.const_tuple_str_plain_box_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a", mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transpose", mod_consts.const_str_plain_transpose);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_transpose);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Transpose", mod_consts.const_str_plain_Transpose);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Transpose);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLIP_TOP_BOTTOM", mod_consts.const_str_plain_FLIP_TOP_BOTTOM);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_FLIP_TOP_BOTTOM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c", mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980", mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list", mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1", mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLIP_LEFT_RIGHT", mod_consts.const_str_plain_FLIP_LEFT_RIGHT);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_FLIP_LEFT_RIGHT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9", mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mask", mod_consts.const_str_plain_mask);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_mask);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41", mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900", mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getexif", mod_consts.const_str_plain_getexif);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_getexif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifTags", mod_consts.const_str_plain_ExifTags);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifTags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_180", mod_consts.const_str_plain_ROTATE_180);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_180);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRANSPOSE", mod_consts.const_str_plain_TRANSPOSE);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPOSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_270", mod_consts.const_str_plain_ROTATE_270);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_270);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRANSVERSE", mod_consts.const_str_plain_TRANSVERSE);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSVERSE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_90", mod_consts.const_str_plain_ROTATE_90);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_90);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transposed_image", mod_consts.const_str_plain_transposed_image);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_transposed_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64", mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple", mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_image", mod_consts.const_str_plain_exif_image);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple", mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428", mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pattern", mod_consts.const_str_plain_pattern);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_pattern);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb", mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_functools);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Sequence_tuple", mod_consts.const_tuple_str_plain_Sequence_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Literal", mod_consts.const_str_plain_Literal);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Protocol", mod_consts.const_str_plain_Protocol);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b", mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77", mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c", mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_none_none_false_tuple", mod_consts.const_tuple_int_0_none_none_false_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_none_none_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950", mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_autocontrast", mod_consts.const_str_plain_autocontrast);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_autocontrast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple", mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39", mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colorize", mod_consts.const_str_plain_colorize);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_colorize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Resampling", mod_consts.const_str_plain_Resampling);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Resampling);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BICUBIC", mod_consts.const_str_plain_BICUBIC);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861", mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cover", mod_consts.const_str_plain_cover);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_cover);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_0_5_float_0_5_tuple", mod_consts.const_tuple_float_0_5_float_0_5_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_float_0_5_float_0_5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328", mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pad", mod_consts.const_str_plain_pad);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_pad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138", mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1", mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsGetMesh", mod_consts.const_str_plain_SupportsGetMesh);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGetMesh);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9", mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95", mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_420", mod_consts.const_int_pos_420);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_420);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67", mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3", mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BILINEAR", mod_consts.const_str_plain_BILINEAR);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_BILINEAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48", mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deform", mod_consts.const_str_plain_deform);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_deform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f", mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_equalize", mod_consts.const_str_plain_equalize);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_equalize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb", mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expand", mod_consts.const_str_plain_expand);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_expand);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083", mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fit", mod_consts.const_str_plain_fit);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_fit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b", mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flip", mod_consts.const_str_plain_flip);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_flip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale", mod_consts.const_str_plain_grayscale);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mirror", mod_consts.const_str_plain_mirror);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_mirror);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867", mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_posterize", mod_consts.const_str_plain_posterize);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_posterize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400", mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_solarize", mod_consts.const_str_plain_solarize);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_solarize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bdc2e715339d1427e801085144d498f6", mod_consts.const_dict_bdc2e715339d1427e801085144d498f6);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_bdc2e715339d1427e801085144d498f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_transpose", mod_consts.const_str_plain_exif_transpose);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif_transpose);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4c3f4edd60756b2065f0649150119420", mod_consts.const_dict_4c3f4edd60756b2065f0649150119420);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_4c3f4edd60756b2065f0649150119420);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2", mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c", mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b", mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple", mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e", mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple", mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple", mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple", mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple", mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple", mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple", mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple", mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple", mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple", mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple", mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple", mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple", mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_image_tuple", mod_consts.const_tuple_str_plain_self_str_plain_image_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple", mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple", mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple", mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple", mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple", mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple);
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
void checkModuleConstants_PIL$ImageOps(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c", mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c) && "mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ImageColor_tuple", mod_consts.const_tuple_str_plain_ImageColor_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageColor_tuple) && "mod_consts.const_tuple_str_plain_ImageColor_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageColor", mod_consts.const_str_plain_ImageColor);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageColor) && "mod_consts.const_str_plain_ImageColor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcolor", mod_consts.const_str_plain_getcolor);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_getcolor) && "mod_consts.const_str_plain_getcolor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d", mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d) && "mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple) && "mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_point) && "mod_consts.const_str_plain_point");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lut", mod_consts.const_str_plain_lut);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_lut) && "mod_consts.const_str_plain_lut");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1", mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1) && "mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert) && "mod_consts.const_str_plain_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_L_tuple", mod_consts.const_tuple_str_plain_L_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_L_tuple) && "mod_consts.const_tuple_str_plain_L_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_histogram", mod_consts.const_str_plain_histogram);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_histogram) && "mod_consts.const_str_plain_histogram");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore) && "mod_consts.const_str_plain_ignore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_h", mod_consts.const_str_plain_h);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_h) && "mod_consts.const_str_plain_h");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cutoff", mod_consts.const_str_plain_cutoff);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_cutoff) && "mod_consts.const_str_plain_cutoff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_xrange_0_256) && "mod_consts.const_xrange_0_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n", mod_consts.const_str_plain_n);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_n) && "mod_consts.const_str_plain_n");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_100) && "mod_consts.const_int_pos_100");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut", mod_consts.const_str_plain_cut);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_cut) && "mod_consts.const_str_plain_cut");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_255_neg1_neg1", mod_consts.const_xrange_255_neg1_neg1);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_xrange_255_neg1_neg1) && "mod_consts.const_xrange_255_neg1_neg1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hi", mod_consts.const_str_plain_hi);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_hi) && "mod_consts.const_str_plain_hi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lo", mod_consts.const_str_plain_lo);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_lo) && "mod_consts.const_str_plain_lo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list", mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list) && "mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_255_0", mod_consts.const_float_255_0);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_float_255_0) && "mod_consts.const_float_255_0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scale", mod_consts.const_str_plain_scale);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_scale) && "mod_consts.const_str_plain_scale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offset", mod_consts.const_str_plain_offset);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset) && "mod_consts.const_str_plain_offset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__lut", mod_consts.const_str_plain__lut);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__lut) && "mod_consts.const_str_plain__lut");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11", mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11) && "mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sequence", mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence) && "mod_consts.const_str_plain_Sequence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__color", mod_consts.const_str_plain__color);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__color) && "mod_consts.const_str_plain__color");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_red", mod_consts.const_str_plain_red);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_red) && "mod_consts.const_str_plain_red");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_green", mod_consts.const_str_plain_green);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_green) && "mod_consts.const_str_plain_green");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blue", mod_consts.const_str_plain_blue);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_blue) && "mod_consts.const_str_plain_blue");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGB_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGB_tuple) && "mod_consts.const_tuple_str_plain_RGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4", mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4) && "mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_round) && "mod_consts.const_str_plain_round");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resize", mod_consts.const_str_plain_resize);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_resize) && "mod_consts.const_str_plain_resize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_resample_tuple", mod_consts.const_tuple_str_plain_resample_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resample_tuple) && "mod_consts.const_tuple_str_plain_resample_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191", mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191) && "mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6", mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6) && "mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_contain", mod_consts.const_str_plain_contain);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_contain) && "mod_consts.const_str_plain_contain");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette) && "mod_consts.const_str_plain_palette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_putpalette", mod_consts.const_str_plain_putpalette);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_putpalette) && "mod_consts.const_str_plain_putpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_min) && "mod_consts.const_str_plain_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paste", mod_consts.const_str_plain_paste);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_paste) && "mod_consts.const_str_plain_paste");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_out) && "mod_consts.const_str_plain_out");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564", mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564) && "mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__border", mod_consts.const_str_plain__border);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__border) && "mod_consts.const_str_plain__border");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_crop) && "mod_consts.const_str_plain_crop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523", mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523) && "mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e", mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e) && "mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c", mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c) && "mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transform", mod_consts.const_str_plain_transform);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform) && "mod_consts.const_str_plain_transform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Transform", mod_consts.const_str_plain_Transform);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Transform) && "mod_consts.const_str_plain_Transform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MESH", mod_consts.const_str_plain_MESH);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_MESH) && "mod_consts.const_str_plain_MESH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmesh", mod_consts.const_str_plain_getmesh);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmesh) && "mod_consts.const_str_plain_getmesh");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c", mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c) && "mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image", mod_consts.const_str_plain_image);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_image) && "mod_consts.const_str_plain_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reduce", mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce) && "mod_consts.const_str_plain_reduce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operator", mod_consts.const_str_plain_operator);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator) && "mod_consts.const_str_plain_operator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_step", mod_consts.const_str_plain_step);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_step) && "mod_consts.const_str_plain_step");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76", mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76) && "mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePalette", mod_consts.const_str_plain_ImagePalette);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePalette) && "mod_consts.const_str_plain_ImagePalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_color", mod_consts.const_str_plain_color);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_color) && "mod_consts.const_str_plain_color");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c", mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c) && "mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_float_0_5) && "mod_consts.const_float_0_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bleed", mod_consts.const_str_plain_bleed);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_bleed) && "mod_consts.const_str_plain_bleed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_centering_x", mod_consts.const_str_plain_centering_x);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_centering_x) && "mod_consts.const_str_plain_centering_x");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_centering_y", mod_consts.const_str_plain_centering_y);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_centering_y) && "mod_consts.const_str_plain_centering_y");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_box_tuple", mod_consts.const_tuple_str_plain_box_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_box_tuple) && "mod_consts.const_tuple_str_plain_box_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a", mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a) && "mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transpose", mod_consts.const_str_plain_transpose);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_transpose) && "mod_consts.const_str_plain_transpose");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Transpose", mod_consts.const_str_plain_Transpose);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Transpose) && "mod_consts.const_str_plain_Transpose");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLIP_TOP_BOTTOM", mod_consts.const_str_plain_FLIP_TOP_BOTTOM);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_FLIP_TOP_BOTTOM) && "mod_consts.const_str_plain_FLIP_TOP_BOTTOM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c", mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c) && "mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980", mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980) && "mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list", mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list) && "mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_1", mod_consts.const_str_plain_1);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_1) && "mod_consts.const_str_plain_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1", mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1) && "mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FLIP_LEFT_RIGHT", mod_consts.const_str_plain_FLIP_LEFT_RIGHT);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_FLIP_LEFT_RIGHT) && "mod_consts.const_str_plain_FLIP_LEFT_RIGHT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9", mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9) && "mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mask", mod_consts.const_str_plain_mask);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_mask) && "mod_consts.const_str_plain_mask");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41", mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41) && "mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900", mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900) && "mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getexif", mod_consts.const_str_plain_getexif);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_getexif) && "mod_consts.const_str_plain_getexif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifTags", mod_consts.const_str_plain_ExifTags);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifTags) && "mod_consts.const_str_plain_ExifTags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base) && "mod_consts.const_str_plain_Base");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation) && "mod_consts.const_str_plain_Orientation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_180", mod_consts.const_str_plain_ROTATE_180);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_180) && "mod_consts.const_str_plain_ROTATE_180");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRANSPOSE", mod_consts.const_str_plain_TRANSPOSE);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSPOSE) && "mod_consts.const_str_plain_TRANSPOSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_6", mod_consts.const_int_pos_6);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_6) && "mod_consts.const_int_pos_6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_270", mod_consts.const_str_plain_ROTATE_270);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_270) && "mod_consts.const_str_plain_ROTATE_270");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRANSVERSE", mod_consts.const_str_plain_TRANSVERSE);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSVERSE) && "mod_consts.const_str_plain_TRANSVERSE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ROTATE_90", mod_consts.const_str_plain_ROTATE_90);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_ROTATE_90) && "mod_consts.const_str_plain_ROTATE_90");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transposed_image", mod_consts.const_str_plain_transposed_image);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_transposed_image) && "mod_consts.const_str_plain_transposed_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif) && "mod_consts.const_str_plain_exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes) && "mod_consts.const_str_plain_tobytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64", mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64) && "mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex) && "mod_consts.const_str_plain_hex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple", mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple) && "mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_image", mod_consts.const_str_plain_exif_image);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif_image) && "mod_consts.const_str_plain_exif_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple", mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple) && "mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key", mod_consts.const_str_plain_key);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_key) && "mod_consts.const_str_plain_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub) && "mod_consts.const_str_plain_sub");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428", mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428) && "mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pattern", mod_consts.const_str_plain_pattern);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_pattern) && "mod_consts.const_str_plain_pattern");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb", mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb) && "mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_functools", mod_consts.const_str_plain_functools);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_functools) && "mod_consts.const_str_plain_functools");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e) && "mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Sequence_tuple", mod_consts.const_tuple_str_plain_Sequence_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple) && "mod_consts.const_tuple_str_plain_Sequence_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Literal", mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal) && "mod_consts.const_str_plain_Literal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Protocol", mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol) && "mod_consts.const_str_plain_Protocol");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple", mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple) && "mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b", mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b) && "mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77", mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77) && "mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c", mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c) && "mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_none_none_false_tuple", mod_consts.const_tuple_int_0_none_none_false_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_none_none_false_tuple) && "mod_consts.const_tuple_int_0_none_none_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950", mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950) && "mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_autocontrast", mod_consts.const_str_plain_autocontrast);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_autocontrast) && "mod_consts.const_str_plain_autocontrast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple", mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple) && "mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39", mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39) && "mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colorize", mod_consts.const_str_plain_colorize);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_colorize) && "mod_consts.const_str_plain_colorize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Resampling", mod_consts.const_str_plain_Resampling);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Resampling) && "mod_consts.const_str_plain_Resampling");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BICUBIC", mod_consts.const_str_plain_BICUBIC);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_BICUBIC) && "mod_consts.const_str_plain_BICUBIC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861", mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861) && "mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cover", mod_consts.const_str_plain_cover);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_cover) && "mod_consts.const_str_plain_cover");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_0_5_float_0_5_tuple", mod_consts.const_tuple_float_0_5_float_0_5_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_float_0_5_float_0_5_tuple) && "mod_consts.const_tuple_float_0_5_float_0_5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328", mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328) && "mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pad", mod_consts.const_str_plain_pad);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_pad) && "mod_consts.const_str_plain_pad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138", mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138) && "mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1", mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1) && "mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsGetMesh", mod_consts.const_str_plain_SupportsGetMesh);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsGetMesh) && "mod_consts.const_str_plain_SupportsGetMesh");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9", mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9) && "mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95", mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95) && "mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_420", mod_consts.const_int_pos_420);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_420) && "mod_consts.const_int_pos_420");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67", mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67) && "mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3", mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3) && "mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BILINEAR", mod_consts.const_str_plain_BILINEAR);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_BILINEAR) && "mod_consts.const_str_plain_BILINEAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48", mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48) && "mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deform", mod_consts.const_str_plain_deform);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_deform) && "mod_consts.const_str_plain_deform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f", mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f) && "mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_equalize", mod_consts.const_str_plain_equalize);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_equalize) && "mod_consts.const_str_plain_equalize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb", mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb) && "mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_expand", mod_consts.const_str_plain_expand);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_expand) && "mod_consts.const_str_plain_expand");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083", mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083) && "mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fit", mod_consts.const_str_plain_fit);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_fit) && "mod_consts.const_str_plain_fit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b", mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b) && "mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_flip", mod_consts.const_str_plain_flip);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_flip) && "mod_consts.const_str_plain_flip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale", mod_consts.const_str_plain_grayscale);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale) && "mod_consts.const_str_plain_grayscale");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert) && "mod_consts.const_str_plain_invert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mirror", mod_consts.const_str_plain_mirror);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_mirror) && "mod_consts.const_str_plain_mirror");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867", mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867) && "mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_posterize", mod_consts.const_str_plain_posterize);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_posterize) && "mod_consts.const_str_plain_posterize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple) && "mod_consts.const_tuple_int_pos_128_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400", mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400) && "mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_solarize", mod_consts.const_str_plain_solarize);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_solarize) && "mod_consts.const_str_plain_solarize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bdc2e715339d1427e801085144d498f6", mod_consts.const_dict_bdc2e715339d1427e801085144d498f6);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_bdc2e715339d1427e801085144d498f6) && "mod_consts.const_dict_bdc2e715339d1427e801085144d498f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_transpose", mod_consts.const_str_plain_exif_transpose);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif_transpose) && "mod_consts.const_str_plain_exif_transpose");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4c3f4edd60756b2065f0649150119420", mod_consts.const_dict_4c3f4edd60756b2065f0649150119420);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_4c3f4edd60756b2065f0649150119420) && "mod_consts.const_dict_4c3f4edd60756b2065f0649150119420");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2", mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2) && "mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c", mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c) && "mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b", mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b) && "mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple", mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple) && "mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e", mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e) && "mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple", mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple) && "mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple", mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple) && "mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple", mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple) && "mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple", mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple) && "mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple", mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple) && "mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple", mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple) && "mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple", mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple", mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple) && "mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple", mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple", mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple) && "mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple", mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple) && "mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple", mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple) && "mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_tuple", mod_consts.const_tuple_str_plain_image_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_tuple) && "mod_consts.const_tuple_str_plain_image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_image_tuple", mod_consts.const_tuple_str_plain_self_str_plain_image_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_image_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple", mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple", mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple) && "mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple", mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple) && "mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple", mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple) && "mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple", mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple) && "mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 14
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
static PyObject *module_var_accessor_PIL$ImageOps$ExifTags(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExifTags);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExifTags, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ExifTags);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ExifTags, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$ImagePalette(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$Sequence(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$_border(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__border);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__border);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__border, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__border);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__border, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__border);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__border);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__border);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$_color(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__color);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__color);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__color, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__color);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__color, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__color);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__color);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__color);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$_lut(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__lut);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lut);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lut, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__lut);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__lut, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__lut);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__lut);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__lut);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$contain(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_contain);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contain);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contain, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contain);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contain, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_contain);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_contain);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contain);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$operator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_operator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_operator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$overload(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageOps$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageOps->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageOps->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageOps->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1775b4e7376d834d815ef273703ad95b;
static PyCodeObject *code_objects_4da413bf7af2164e816d4e973e030301;
static PyCodeObject *code_objects_5c67f858fc3d71fb2e2ef29b366e942d;
static PyCodeObject *code_objects_8ecbbddbcd6ae95aaec87db649329fbe;
static PyCodeObject *code_objects_0b0ea5bb5ea82cbd55017d9717866eb9;
static PyCodeObject *code_objects_46b3503c81d27bb76dd595fc8d738bb7;
static PyCodeObject *code_objects_1188aec7da4d49a44a860338b2e59f89;
static PyCodeObject *code_objects_d00557bdbbbc42253ff4bb265181e390;
static PyCodeObject *code_objects_64b9f54ce7e56a46a92c03b4c2f985fa;
static PyCodeObject *code_objects_332ca72177f4eb6f8937d263466a4e87;
static PyCodeObject *code_objects_8c51a4b72dd8753b2c225eb85e62c71d;
static PyCodeObject *code_objects_d69f622fb95c27ca1f66eb42b275dd4a;
static PyCodeObject *code_objects_1de195970c16e76a0ada4d0126206952;
static PyCodeObject *code_objects_9052105a35fc89f36b98aa98fed280c8;
static PyCodeObject *code_objects_cd116f9ea4c7e08a0a98faf3b432a363;
static PyCodeObject *code_objects_8a18c22d466fc1fc8b281944839d1883;
static PyCodeObject *code_objects_cceca6ce9bde2adbceb22f93dbc6ca1f;
static PyCodeObject *code_objects_f8db97c9e86646d6134ed66c11cf5384;
static PyCodeObject *code_objects_190c5334594d9f87623b9f22d5890b9f;
static PyCodeObject *code_objects_195d813c60c4cd30bb816b28eaf3c790;
static PyCodeObject *code_objects_bf33e1b8abc3934d693b732732b0ebe4;
static PyCodeObject *code_objects_e6826b078c1341687af47c96f52a14fb;
static PyCodeObject *code_objects_1de51f40a2f7558a01aa67c2c07432d9;
static PyCodeObject *code_objects_1b07967bd8469baca9437e3906cba519;
static PyCodeObject *code_objects_f5592b36c74116160416104617ea361d;
static PyCodeObject *code_objects_05cb445af7b2fcd5ae2e3e05cbec2b14;
static PyCodeObject *code_objects_42a5d55fd2dae474f6651f0ca8fea67a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d0bb38022e94e9278d0f9bd19854f40b); CHECK_OBJECT(module_filename_obj);
code_objects_1775b4e7376d834d815ef273703ad95b = MAKE_CODE_OBJECT(module_filename_obj, 739, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb, mod_consts.const_tuple_5ff4d7d52dc02483211efc0ce8c6ee8a_tuple, NULL, 1, 0, 0);
code_objects_4da413bf7af2164e816d4e973e030301 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e, mod_consts.const_str_digest_d446b483bfe1facf2173b6ad114e920e, NULL, NULL, 0, 0, 0);
code_objects_5c67f858fc3d71fb2e2ef29b366e942d = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SupportsGetMesh, mod_consts.const_str_plain_SupportsGetMesh, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8ecbbddbcd6ae95aaec87db649329fbe = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__border, mod_consts.const_str_plain__border, mod_consts.const_tuple_33b5a01271b7f4542cc8cf6bdaf503e3_tuple, NULL, 1, 0, 0);
code_objects_0b0ea5bb5ea82cbd55017d9717866eb9 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__color, mod_consts.const_str_plain__color, mod_consts.const_tuple_str_plain_color_str_plain_mode_str_plain_ImageColor_tuple, NULL, 2, 0, 0);
code_objects_46b3503c81d27bb76dd595fc8d738bb7 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__lut, mod_consts.const_str_plain__lut, mod_consts.const_tuple_str_plain_image_str_plain_lut_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_1188aec7da4d49a44a860338b2e59f89 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_autocontrast, mod_consts.const_str_plain_autocontrast, mod_consts.const_tuple_cad42589784f433a0353fe2b65a4ae6b_tuple, NULL, 5, 0, 0);
code_objects_d00557bdbbbc42253ff4bb265181e390 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_colorize, mod_consts.const_str_plain_colorize, mod_consts.const_tuple_133e3dfd73aa72808c94028dc7679f9c_tuple, NULL, 7, 0, 0);
code_objects_64b9f54ce7e56a46a92c03b4c2f985fa = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_contain, mod_consts.const_str_plain_contain, mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple, NULL, 3, 0, 0);
code_objects_332ca72177f4eb6f8937d263466a4e87 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cover, mod_consts.const_str_plain_cover, mod_consts.const_tuple_96782fb2658a08503a4fe1ea2d25d670_tuple, NULL, 3, 0, 0);
code_objects_8c51a4b72dd8753b2c225eb85e62c71d = MAKE_CODE_OBJECT(module_filename_obj, 380, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_crop, mod_consts.const_str_plain_crop, mod_consts.const_tuple_a318b6115997d4f003b9d1c392a81247_tuple, NULL, 2, 0, 0);
code_objects_d69f622fb95c27ca1f66eb42b275dd4a = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deform, mod_consts.const_str_plain_deform, mod_consts.const_tuple_str_plain_image_str_plain_deformer_str_plain_resample_tuple, NULL, 3, 0, 0);
code_objects_1de195970c16e76a0ada4d0126206952 = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_equalize, mod_consts.const_str_plain_equalize, mod_consts.const_tuple_39e591ef2945a18214605f5bd1bea3be_tuple, NULL, 2, 0, 0);
code_objects_9052105a35fc89f36b98aa98fed280c8 = MAKE_CODE_OBJECT(module_filename_obj, 681, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_exif_transpose, mod_consts.const_str_plain_exif_transpose, mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple, NULL, 1, 1, 0);
code_objects_cd116f9ea4c7e08a0a98faf3b432a363 = MAKE_CODE_OBJECT(module_filename_obj, 685, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_exif_transpose, mod_consts.const_str_plain_exif_transpose, mod_consts.const_tuple_str_plain_image_str_plain_in_place_tuple, NULL, 1, 1, 0);
code_objects_8a18c22d466fc1fc8b281944839d1883 = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_exif_transpose, mod_consts.const_str_plain_exif_transpose, mod_consts.const_tuple_6804e081a1b9f6ecc25c2dff9f8ce8a0_tuple, NULL, 1, 1, 0);
code_objects_cceca6ce9bde2adbceb22f93dbc6ca1f = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_expand, mod_consts.const_str_plain_expand, mod_consts.const_tuple_0120f2707b1b74449c611d17091c8461_tuple, NULL, 3, 0, 0);
code_objects_f8db97c9e86646d6134ed66c11cf5384 = MAKE_CODE_OBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fit, mod_consts.const_str_plain_fit, mod_consts.const_tuple_df39dcebdae92d07accc1e5c97f39575_tuple, NULL, 5, 0, 0);
code_objects_190c5334594d9f87623b9f22d5890b9f = MAKE_CODE_OBJECT(module_filename_obj, 609, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_flip, mod_consts.const_str_plain_flip, mod_consts.const_tuple_str_plain_image_tuple, NULL, 1, 0, 0);
code_objects_195d813c60c4cd30bb816b28eaf3c790 = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getmesh, mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3, mod_consts.const_tuple_str_plain_self_str_plain_image_tuple, NULL, 2, 0, 0);
code_objects_bf33e1b8abc3934d693b732732b0ebe4 = MAKE_CODE_OBJECT(module_filename_obj, 619, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_grayscale, mod_consts.const_str_plain_grayscale, mod_consts.const_tuple_str_plain_image_tuple, NULL, 1, 0, 0);
code_objects_e6826b078c1341687af47c96f52a14fb = MAKE_CODE_OBJECT(module_filename_obj, 629, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_invert, mod_consts.const_str_plain_invert, mod_consts.const_tuple_str_plain_image_str_plain_lut_tuple, NULL, 1, 0, 0);
code_objects_1de51f40a2f7558a01aa67c2c07432d9 = MAKE_CODE_OBJECT(module_filename_obj, 640, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mirror, mod_consts.const_str_plain_mirror, mod_consts.const_tuple_str_plain_image_tuple, NULL, 1, 0, 0);
code_objects_1b07967bd8469baca9437e3906cba519 = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pad, mod_consts.const_str_plain_pad, mod_consts.const_tuple_e6c1369a5547e3ac29856c7a47be12b8_tuple, NULL, 5, 0, 0);
code_objects_f5592b36c74116160416104617ea361d = MAKE_CODE_OBJECT(module_filename_obj, 650, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_posterize, mod_consts.const_str_plain_posterize, mod_consts.const_tuple_str_plain_image_str_plain_bits_str_plain_mask_str_plain_lut_tuple, NULL, 2, 0, 0);
code_objects_05cb445af7b2fcd5ae2e3e05cbec2b14 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_scale, mod_consts.const_str_plain_scale, mod_consts.const_tuple_832b111291e8b837aff00c6bcf4dc456_tuple, NULL, 3, 0, 0);
code_objects_42a5d55fd2dae474f6651f0ca8fea67a = MAKE_CODE_OBJECT(module_filename_obj, 663, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_solarize, mod_consts.const_str_plain_solarize, mod_consts.const_tuple_2ed794188b9ba0a3e08651cc96715635_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__10_scale(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__11_getmesh(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__12_deform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__13_equalize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__14_expand(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__15_fit(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__16_flip(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__17_grayscale(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__18_invert(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__19_mirror(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__1__border(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__20_posterize(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__21_solarize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__22_exif_transpose(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__23_exif_transpose(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__24_exif_transpose(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__2__color(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__3__lut(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__4_autocontrast(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__5_colorize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__6_contain(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__7_cover(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__8_pad(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__9_crop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageOps$$$function__1__border(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_border = python_pars[0];
PyObject *var_left = NULL;
PyObject *var_top = NULL;
PyObject *var_right = NULL;
PyObject *var_bottom = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__element_4 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__1__border;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
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
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__1__border = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__1__border)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__1__border);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__1__border == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__1__border = MAKE_FUNCTION_FRAME(tstate, code_objects_8ecbbddbcd6ae95aaec87db649329fbe, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__1__border->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__1__border = cache_frame_frame_PIL$ImageOps$$$function__1__border;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__1__border);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__1__border) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_border);
tmp_isinstance_inst_1 = par_border;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_border);
tmp_len_arg_1 = par_border;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_border);
tmp_assign_source_1 = par_border;
{
    PyObject *old = tmp_assign_unpack_1__assign_source;
    tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    Py_INCREF(tmp_assign_unpack_1__assign_source);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_iter_arg_1 = tmp_assign_unpack_1__assign_source;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 36;
type_description_1 = "oooooN";
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
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_5;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_6;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_iter_arg_2 = tmp_assign_unpack_1__assign_source;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;
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



exception_lineno = 36;
type_description_1 = "oooooN";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_2;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_10;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_11;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_border);
tmp_len_arg_2 = par_border;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 4;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_border);
tmp_iter_arg_3 = par_border;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 2, 4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_3;
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 3, 4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_4;
    tmp_tuple_unpack_3__element_4 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooooN";
    goto try_except_handler_8;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_4);
tmp_tuple_unpack_3__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_17;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_18;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_19 = tmp_tuple_unpack_3__element_3;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_19;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_4);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_4;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_20;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_4);
tmp_tuple_unpack_3__element_4 = NULL;

goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_066dfb7766ef09a994df6a690d22b70c;
frame_frame_PIL$ImageOps$$$function__1__border->m_frame.f_lineno = 41;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 41;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooN";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(par_border);
tmp_assign_source_21 = par_border;
{
    PyObject *old = tmp_assign_unpack_2__assign_source;
    tmp_assign_unpack_2__assign_source = tmp_assign_source_21;
    Py_INCREF(tmp_assign_unpack_2__assign_source);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_22 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_22;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_23 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_23;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_24 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_24;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_assign_source_25 = tmp_assign_unpack_2__assign_source;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_25;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__1__border, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__1__border->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__1__border, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__1__border,
    type_description_1,
    par_border,
    var_left,
    var_top,
    var_right,
    var_bottom,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__1__border == cache_frame_frame_PIL$ImageOps$$$function__1__border) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__1__border);
    cache_frame_frame_PIL$ImageOps$$$function__1__border = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__1__border);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_left);
tmp_tuple_element_1 = var_left;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_top);
tmp_tuple_element_1 = var_top;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_right);
tmp_tuple_element_1 = var_right;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_bottom);
tmp_tuple_element_1 = var_bottom;
PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left);
CHECK_OBJECT(var_left);
Py_DECREF(var_left);
var_left = NULL;
CHECK_OBJECT(var_top);
CHECK_OBJECT(var_top);
Py_DECREF(var_top);
var_top = NULL;
CHECK_OBJECT(var_right);
CHECK_OBJECT(var_right);
Py_DECREF(var_right);
var_right = NULL;
CHECK_OBJECT(var_bottom);
CHECK_OBJECT(var_bottom);
Py_DECREF(var_bottom);
var_bottom = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_top);
var_top = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_border);
Py_DECREF(par_border);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_border);
Py_DECREF(par_border);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__2__color(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_color = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *var_ImageColor = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__2__color;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__2__color = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__2__color)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__2__color);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__2__color == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__2__color = MAKE_FUNCTION_FRAME(tstate, code_objects_0b0ea5bb5ea82cbd55017d9717866eb9, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__2__color->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__2__color = cache_frame_frame_PIL$ImageOps$$$function__2__color;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__2__color);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__2__color) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_color);
tmp_isinstance_inst_1 = par_color;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageOps;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ImageColor_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageOps$$$function__2__color->m_frame.f_lineno = 49;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_ImageColor,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ImageColor);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ImageColor;
    var_ImageColor = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_ImageColor);
tmp_called_instance_1 = var_ImageColor;
CHECK_OBJECT(par_color);
tmp_args_element_value_1 = par_color;
CHECK_OBJECT(par_mode);
tmp_args_element_value_2 = par_mode;
frame_frame_PIL$ImageOps$$$function__2__color->m_frame.f_lineno = 51;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_getcolor,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_color;
    assert(old != NULL);
    par_color = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__2__color, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__2__color->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__2__color, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__2__color,
    type_description_1,
    par_color,
    par_mode,
    var_ImageColor
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__2__color == cache_frame_frame_PIL$ImageOps$$$function__2__color) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__2__color);
    cache_frame_frame_PIL$ImageOps$$$function__2__color = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__2__color);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_color);
tmp_return_value = par_color;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
Py_XDECREF(var_ImageColor);
var_ImageColor = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
Py_XDECREF(var_ImageColor);
var_ImageColor = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__3__lut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_lut = python_pars[1];
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__3__lut;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__3__lut = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__3__lut)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__3__lut);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__3__lut == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__3__lut = MAKE_FUNCTION_FRAME(tstate, code_objects_46b3503c81d27bb76dd595fc8d738bb7, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__3__lut->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__3__lut = cache_frame_frame_PIL$ImageOps$$$function__3__lut;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__3__lut);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__3__lut) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_P;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_5ddeba0af0d6db7cd1ce57217b3a5d3d;
frame_frame_PIL$ImageOps$$$function__3__lut->m_frame.f_lineno = 59;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_L_str_plain_RGB_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(par_image);
tmp_expression_value_3 = par_image;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_RGB;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_lut);
tmp_len_arg_1 = par_lut;
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 256;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(par_lut);
tmp_add_expr_left_2 = par_lut;
CHECK_OBJECT(par_lut);
tmp_add_expr_right_2 = par_lut;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_lut);
tmp_add_expr_right_1 = par_lut;
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_lut;
    assert(old != NULL);
    par_lut = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_4 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_point);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (par_lut == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = par_lut;
frame_frame_PIL$ImageOps$$$function__3__lut->m_frame.f_lineno = 63;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8223280acf3e94fb97e2480c7eb9d3e1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mode);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$ImageOps$$$function__3__lut->m_frame.f_lineno = 66;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__3__lut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__3__lut->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__3__lut, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__3__lut,
    type_description_1,
    par_image,
    par_lut,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__3__lut == cache_frame_frame_PIL$ImageOps$$$function__3__lut) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__3__lut);
    cache_frame_frame_PIL$ImageOps$$$function__3__lut = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__3__lut);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_lut);
par_lut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_lut);
par_lut = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
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


static PyObject *impl_PIL$ImageOps$$$function__4_autocontrast(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_cutoff = python_pars[1];
PyObject *par_ignore = python_pars[2];
PyObject *par_mask = python_pars[3];
PyObject *par_preserve_tone = python_pars[4];
PyObject *var_histogram = NULL;
PyObject *var_lut = NULL;
PyObject *var_layer = NULL;
PyObject *var_h = NULL;
PyObject *var_ix = NULL;
PyObject *var_n = NULL;
PyObject *var_cut = NULL;
PyObject *var_lo = NULL;
PyObject *var_hi = NULL;
PyObject *var_scale = NULL;
PyObject *var_offset = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
PyObject *tmp_for_loop_6__for_iterator = NULL;
PyObject *tmp_for_loop_6__iter_value = NULL;
PyObject *tmp_for_loop_7__for_iterator = NULL;
PyObject *tmp_for_loop_7__iter_value = NULL;
PyObject *tmp_for_loop_8__for_iterator = NULL;
PyObject *tmp_for_loop_8__iter_value = NULL;
PyObject *tmp_inplace_assign_subscript_1__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_1__target = NULL;
PyObject *tmp_inplace_assign_subscript_1__value = NULL;
PyObject *tmp_inplace_assign_subscript_2__subscript = NULL;
PyObject *tmp_inplace_assign_subscript_2__target = NULL;
PyObject *tmp_inplace_assign_subscript_2__value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__4_autocontrast;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast = MAKE_FUNCTION_FRAME(tstate, code_objects_1188aec7da4d49a44a860338b2e59f89, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__4_autocontrast = cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__4_autocontrast);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__4_autocontrast) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_preserve_tone);
tmp_truth_name_1 = CHECK_IF_TRUE(par_preserve_tone);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_image);
tmp_called_instance_2 = par_image;
frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame.f_lineno = 102;
tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_L_tuple, 0)
);

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mask);
tmp_args_element_value_1 = par_mask;
frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame.f_lineno = 102;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_histogram, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_histogram;
    var_histogram = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_image);
tmp_called_instance_3 = par_image;
CHECK_OBJECT(par_mask);
tmp_args_element_value_2 = par_mask;
frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame.f_lineno = 104;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_histogram, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_histogram;
    var_histogram = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_lut;
    var_lut = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = const_int_0;
CHECK_OBJECT(var_histogram);
tmp_len_arg_1 = var_histogram;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_xrange_step_1 = mod_consts.const_int_pos_256;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 107;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_layer;
    var_layer = tmp_assign_source_6;
    Py_INCREF(var_layer);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_histogram);
tmp_expression_value_1 = var_histogram;
CHECK_OBJECT(var_layer);
tmp_start_value_1 = var_layer;
CHECK_OBJECT(var_layer);
tmp_add_expr_left_1 = var_layer;
tmp_add_expr_right_1 = mod_consts.const_int_pos_256;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_h;
    var_h = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (par_ignore == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ignore);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_1 = par_ignore;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (par_ignore == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ignore);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 111;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_isinstance_inst_1 = par_ignore;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = const_int_0;
CHECK_OBJECT(var_h);
tmp_ass_subscribed_1 = var_h;
if (par_ignore == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ignore);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 112;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_ass_subscript_1 = par_ignore;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
if (par_ignore == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ignore);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iter_arg_2 = par_ignore;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 114;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_10 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_ix;
    var_ix = tmp_assign_source_10;
    Py_INCREF(var_ix);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = const_int_0;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 115;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}

tmp_ass_subscribed_2 = var_h;
CHECK_OBJECT(var_ix);
tmp_ass_subscript_2 = var_ix;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_end_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_cutoff);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_isinstance_inst_2 = par_cutoff;
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_tuple_element_1;
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 119;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_tuple_element_1 = par_cutoff;
tmp_assign_source_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 119;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = par_cutoff;
PyTuple_SET_ITEM0(tmp_assign_source_11, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_11);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = par_cutoff;
    par_cutoff = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = const_int_0;
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_12;
    Py_INCREF(var_n);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = mod_consts.const_xrange_0_256;
tmp_assign_source_13 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
assert(!(tmp_assign_source_13 == NULL));
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 122;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_15 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_ix;
    var_ix = tmp_assign_source_15;
    Py_INCREF(var_ix);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_add_expr_left_2 = var_n;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_2 = var_h;
CHECK_OBJECT(var_ix);
tmp_subscript_value_2 = var_ix;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_int_arg_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_1 = var_n;
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = par_cutoff;
tmp_subscript_value_3 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_100;
tmp_int_arg_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_17 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
tmp_iter_arg_4 = mod_consts.const_xrange_0_256;
tmp_assign_source_18 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
assert(!(tmp_assign_source_18 == NULL));
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 126;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_20 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_lo;
    var_lo = tmp_assign_source_20;
    Py_INCREF(var_lo);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_left_2 = var_cut;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_4 = var_h;
CHECK_OBJECT(var_lo);
tmp_subscript_value_4 = var_lo;
tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_sub_expr_left_1 = var_cut;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_5 = var_h;
CHECK_OBJECT(var_lo);
tmp_subscript_value_5 = var_lo;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_21 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = const_int_0;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 129;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_ass_subscribed_3 = var_h;
CHECK_OBJECT(var_lo);
tmp_ass_subscript_3 = var_lo;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_22;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}

tmp_assign_source_22 = var_h;
{
    PyObject *old = tmp_inplace_assign_subscript_1__target;
    tmp_inplace_assign_subscript_1__target = tmp_assign_source_22;
    Py_INCREF(tmp_inplace_assign_subscript_1__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(var_lo);
tmp_assign_source_23 = var_lo;
{
    PyObject *old = tmp_inplace_assign_subscript_1__subscript;
    tmp_inplace_assign_subscript_1__subscript = tmp_assign_source_23;
    Py_INCREF(tmp_inplace_assign_subscript_1__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_expression_value_6 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_subscript_value_6 = tmp_inplace_assign_subscript_1__subscript;
tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_inplace_assign_subscript_1__value;
    tmp_inplace_assign_subscript_1__value = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_subscript_1__value;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}

tmp_isub_expr_right_1 = var_cut;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_25 = tmp_isub_expr_left_1;
tmp_inplace_assign_subscript_1__value = tmp_assign_source_25;

}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
tmp_ass_subvalue_4 = tmp_inplace_assign_subscript_1__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
tmp_ass_subscribed_4 = tmp_inplace_assign_subscript_1__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
tmp_ass_subscript_4 = tmp_inplace_assign_subscript_1__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__target);
Py_DECREF(tmp_inplace_assign_subscript_1__target);
tmp_inplace_assign_subscript_1__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__subscript);
Py_DECREF(tmp_inplace_assign_subscript_1__subscript);
tmp_inplace_assign_subscript_1__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_1__value);
Py_DECREF(tmp_inplace_assign_subscript_1__value);
tmp_inplace_assign_subscript_1__value = NULL;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = const_int_0;
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_26;
    Py_INCREF(var_cut);
    Py_XDECREF(old);
}

}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_cut);
tmp_cmp_expr_left_3 = var_cut;
tmp_cmp_expr_right_3 = const_int_0;
tmp_condition_result_7 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_end_4;
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooooooo";
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

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_int_arg_2;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_mult_expr_left_2 = var_n;
if (par_cutoff == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cutoff);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = par_cutoff;
tmp_subscript_value_7 = const_int_pos_1;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_7, 1);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_right_2 = mod_consts.const_int_pos_100;
tmp_int_arg_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_27 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_iter_arg_5;
tmp_iter_arg_5 = mod_consts.const_xrange_255_neg1_neg1;
tmp_assign_source_28 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
assert(!(tmp_assign_source_28 == NULL));
{
    PyObject *old = tmp_for_loop_5__for_iterator;
    tmp_for_loop_5__for_iterator = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_29 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_29 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 137;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_assign_source_30 = tmp_for_loop_5__iter_value;
{
    PyObject *old = var_hi;
    var_hi = tmp_assign_source_30;
    Py_INCREF(var_hi);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_cmp_expr_left_4 = var_cut;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_8 = var_h;
CHECK_OBJECT(var_hi);
tmp_subscript_value_8 = var_hi;
tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_sub_expr_left_2 = var_cut;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_9 = var_h;
CHECK_OBJECT(var_hi);
tmp_subscript_value_9 = var_hi;
tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_31 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = const_int_0;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_ass_subscribed_5 = var_h;
CHECK_OBJECT(var_hi);
tmp_ass_subscript_5 = var_hi;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_32;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}

tmp_assign_source_32 = var_h;
{
    PyObject *old = tmp_inplace_assign_subscript_2__target;
    tmp_inplace_assign_subscript_2__target = tmp_assign_source_32;
    Py_INCREF(tmp_inplace_assign_subscript_2__target);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(var_hi);
tmp_assign_source_33 = var_hi;
{
    PyObject *old = tmp_inplace_assign_subscript_2__subscript;
    tmp_inplace_assign_subscript_2__subscript = tmp_assign_source_33;
    Py_INCREF(tmp_inplace_assign_subscript_2__subscript);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_expression_value_10 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_subscript_value_10 = tmp_inplace_assign_subscript_2__subscript;
tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_inplace_assign_subscript_2__value;
    tmp_inplace_assign_subscript_2__value = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_isub_expr_left_2 = tmp_inplace_assign_subscript_2__value;
if (var_cut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}

tmp_isub_expr_right_2 = var_cut;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_35 = tmp_isub_expr_left_2;
tmp_inplace_assign_subscript_2__value = tmp_assign_source_35;

}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
tmp_ass_subvalue_6 = tmp_inplace_assign_subscript_2__value;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
tmp_ass_subscribed_6 = tmp_inplace_assign_subscript_2__target;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
tmp_ass_subscript_6 = tmp_inplace_assign_subscript_2__subscript;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
Py_XDECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__target);
Py_DECREF(tmp_inplace_assign_subscript_2__target);
tmp_inplace_assign_subscript_2__target = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__subscript);
Py_DECREF(tmp_inplace_assign_subscript_2__subscript);
tmp_inplace_assign_subscript_2__subscript = NULL;
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
CHECK_OBJECT(tmp_inplace_assign_subscript_2__value);
Py_DECREF(tmp_inplace_assign_subscript_2__value);
tmp_inplace_assign_subscript_2__value = NULL;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = const_int_0;
{
    PyObject *old = var_cut;
    var_cut = tmp_assign_source_36;
    Py_INCREF(var_cut);
    Py_XDECREF(old);
}

}
branch_end_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_cut);
tmp_cmp_expr_left_5 = var_cut;
tmp_cmp_expr_right_5 = const_int_0;
tmp_condition_result_9 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
goto loop_end_5;
branch_no_9:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_5;
loop_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
branch_no_4:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_iter_arg_6;
tmp_iter_arg_6 = mod_consts.const_xrange_0_256;
tmp_assign_source_37 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
assert(!(tmp_assign_source_37 == NULL));
{
    PyObject *old = tmp_for_loop_6__for_iterator;
    tmp_for_loop_6__for_iterator = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
tmp_next_source_6 = tmp_for_loop_6__for_iterator;
tmp_assign_source_38 = ITERATOR_NEXT_ITERATOR(tmp_next_source_6);
if (tmp_assign_source_38 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 147;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_6__iter_value;
    tmp_for_loop_6__iter_value = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_for_loop_6__iter_value);
tmp_assign_source_39 = tmp_for_loop_6__iter_value;
{
    PyObject *old = var_lo;
    var_lo = tmp_assign_source_39;
    Py_INCREF(var_lo);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_11;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_3;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 148;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}

tmp_expression_value_11 = var_h;
CHECK_OBJECT(var_lo);
tmp_subscript_value_11 = var_lo;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 148;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
goto loop_end_6;
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_6;
loop_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_7;
tmp_iter_arg_7 = mod_consts.const_xrange_255_neg1_neg1;
tmp_assign_source_40 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
assert(!(tmp_assign_source_40 == NULL));
{
    PyObject *old = tmp_for_loop_7__for_iterator;
    tmp_for_loop_7__for_iterator = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
tmp_next_source_7 = tmp_for_loop_7__for_iterator;
tmp_assign_source_41 = ITERATOR_NEXT_ITERATOR(tmp_next_source_7);
if (tmp_assign_source_41 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 150;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_7__iter_value;
    tmp_for_loop_7__iter_value = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_for_loop_7__iter_value);
tmp_assign_source_42 = tmp_for_loop_7__iter_value;
{
    PyObject *old = var_hi;
    var_hi = tmp_assign_source_42;
    Py_INCREF(var_hi);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_12;
PyObject *tmp_subscript_result_2;
int tmp_truth_name_4;
if (var_h == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_h);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 151;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_12 = var_h;
CHECK_OBJECT(var_hi);
tmp_subscript_value_12 = var_hi;
tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
if (tmp_subscript_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_subscript_result_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_2);

exception_lineno = 151;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_2);
Py_DECREF(tmp_subscript_result_2);
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
goto loop_end_7;
branch_no_11:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_7;
loop_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_2;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_hi == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hi);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_6 = var_hi;
if (var_lo == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lo);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 153;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_6 = var_lo;
tmp_condition_result_12 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_lut;
tmp_value_value_1 = LIST_COPY(tstate, mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
tmp_truediv_expr_left_1 = mod_consts.const_float_255_0;
if (var_hi == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hi);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_left_3 = var_hi;
if (var_lo == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lo);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 157;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_sub_expr_right_3 = var_lo;
tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_43 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_scale;
    var_scale = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_operand_value_2;
if (var_lo == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lo);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}

tmp_operand_value_2 = var_lo;
tmp_mult_expr_left_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_scale);
tmp_mult_expr_right_3 = var_scale;
tmp_assign_source_44 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_offset;
    var_offset = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iter_arg_8;
tmp_iter_arg_8 = mod_consts.const_xrange_0_256;
tmp_assign_source_45 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
assert(!(tmp_assign_source_45 == NULL));
{
    PyObject *old = tmp_for_loop_8__for_iterator;
    tmp_for_loop_8__for_iterator = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_8:;
{
PyObject *tmp_next_source_8;
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
tmp_next_source_8 = tmp_for_loop_8__for_iterator;
tmp_assign_source_46 = ITERATOR_NEXT_ITERATOR(tmp_next_source_8);
if (tmp_assign_source_46 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_8;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooo";
exception_lineno = 159;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_for_loop_8__iter_value;
    tmp_for_loop_8__iter_value = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_for_loop_8__iter_value);
tmp_assign_source_47 = tmp_for_loop_8__iter_value;
{
    PyObject *old = var_ix;
    var_ix = tmp_assign_source_47;
    Py_INCREF(var_ix);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_int_arg_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
CHECK_OBJECT(var_ix);
tmp_mult_expr_left_4 = var_ix;
if (var_scale == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scale);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_mult_expr_right_4 = var_scale;
tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (var_offset == NULL) {
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_add_expr_right_3 = var_offset;
tmp_int_arg_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
tmp_assign_source_48 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_ix;
    assert(old != NULL);
    var_ix = tmp_assign_source_48;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_ix);
tmp_cmp_expr_left_7 = var_ix;
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_13 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = const_int_0;
{
    PyObject *old = var_ix;
    assert(old != NULL);
    var_ix = tmp_assign_source_49;
    Py_INCREF(var_ix);
    Py_DECREF(old);
}

}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_ix);
tmp_cmp_expr_left_8 = var_ix;
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_255;
tmp_condition_result_14 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = mod_consts.const_int_pos_255;
{
    PyObject *old = var_ix;
    assert(old != NULL);
    var_ix = tmp_assign_source_50;
    Py_INCREF(var_ix);
    Py_DECREF(old);
}

}
branch_no_14:;
branch_end_13:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_13 = var_lut;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(var_ix);
tmp_args_element_value_3 = var_ix;
frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame.f_lineno = 165;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_11;
}
goto loop_start_8;
loop_end_8:;
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_2;
// End of try:
try_end_9:;
Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
branch_end_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_10;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_4 = par_image;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 166;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_lut;
frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame.f_lineno = 166;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__4_autocontrast, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__4_autocontrast->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__4_autocontrast, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__4_autocontrast,
    type_description_1,
    par_image,
    par_cutoff,
    par_ignore,
    par_mask,
    par_preserve_tone,
    var_histogram,
    var_lut,
    var_layer,
    var_h,
    var_ix,
    var_n,
    var_cut,
    var_lo,
    var_hi,
    var_scale,
    var_offset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__4_autocontrast == cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast);
    cache_frame_frame_PIL$ImageOps$$$function__4_autocontrast = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__4_autocontrast);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_cutoff);
par_cutoff = NULL;
CHECK_OBJECT(var_histogram);
CHECK_OBJECT(var_histogram);
Py_DECREF(var_histogram);
var_histogram = NULL;
Py_XDECREF(var_lut);
var_lut = NULL;
Py_XDECREF(var_layer);
var_layer = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_ix);
var_ix = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_cut);
var_cut = NULL;
Py_XDECREF(var_lo);
var_lo = NULL;
Py_XDECREF(var_hi);
var_hi = NULL;
Py_XDECREF(var_scale);
var_scale = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cutoff);
par_cutoff = NULL;
Py_XDECREF(var_histogram);
var_histogram = NULL;
Py_XDECREF(var_lut);
var_lut = NULL;
Py_XDECREF(var_layer);
var_layer = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_ix);
var_ix = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_cut);
var_cut = NULL;
Py_XDECREF(var_lo);
var_lo = NULL;
Py_XDECREF(var_hi);
var_hi = NULL;
Py_XDECREF(var_scale);
var_scale = NULL;
Py_XDECREF(var_offset);
var_offset = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_ignore);
Py_DECREF(par_ignore);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
CHECK_OBJECT(par_preserve_tone);
Py_DECREF(par_preserve_tone);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_ignore);
Py_DECREF(par_ignore);
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
CHECK_OBJECT(par_preserve_tone);
Py_DECREF(par_preserve_tone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__5_colorize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_black = python_pars[1];
PyObject *par_white = python_pars[2];
PyObject *par_mid = python_pars[3];
PyObject *par_blackpoint = python_pars[4];
PyObject *par_whitepoint = python_pars[5];
PyObject *par_midpoint = python_pars[6];
PyObject *var_rgb_black = NULL;
PyObject *var_rgb_white = NULL;
PyObject *var_rgb_mid = NULL;
PyObject *var_red = NULL;
PyObject *var_green = NULL;
PyObject *var_blue = NULL;
PyObject *var_i = NULL;
PyObject *var_range_map = NULL;
PyObject *var_range_map1 = NULL;
PyObject *var_range_map2 = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_1__operand_3 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__operand_3 = NULL;
PyObject *tmp_comparison_chain_2__operand_4 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__5_colorize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__5_colorize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__5_colorize)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__5_colorize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__5_colorize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__5_colorize = MAKE_FUNCTION_FRAME(tstate, code_objects_d00557bdbbbc42253ff4bb265181e390, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__5_colorize->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__5_colorize = cache_frame_frame_PIL$ImageOps$$$function__5_colorize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__5_colorize);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__5_colorize) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_L;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooo";
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
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 202;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_mid);
tmp_cmp_expr_left_2 = par_mid;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_blackpoint);
tmp_assign_source_1 = par_blackpoint;
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
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_4:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_whitepoint);
tmp_assign_source_3 = par_whitepoint;
{
    PyObject *old = tmp_comparison_chain_1__operand_3;
    tmp_comparison_chain_1__operand_3 = tmp_assign_source_3;
    Py_INCREF(tmp_comparison_chain_1__operand_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_1__operand_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_3;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    assert(old != NULL);
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_5:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_3;
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_255;
tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__operand_3);
tmp_comparison_chain_1__operand_3 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__operand_3);
tmp_comparison_chain_1__operand_3 = NULL;
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
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooo";
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
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 204;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_5;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(par_blackpoint);
tmp_assign_source_5 = par_blackpoint;
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_5;
    Py_INCREF(tmp_comparison_chain_2__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_6 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_6 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_7:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(par_midpoint);
tmp_assign_source_7 = par_midpoint;
{
    PyObject *old = tmp_comparison_chain_2__operand_3;
    tmp_comparison_chain_2__operand_3 = tmp_assign_source_7;
    Py_INCREF(tmp_comparison_chain_2__operand_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_7 = tmp_comparison_chain_2__operand_2;
CHECK_OBJECT(tmp_comparison_chain_2__operand_3);
tmp_cmp_expr_right_7 = tmp_comparison_chain_2__operand_3;
tmp_assign_source_8 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    assert(old != NULL);
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_7;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_7 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_8:;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(par_whitepoint);
tmp_assign_source_9 = par_whitepoint;
{
    PyObject *old = tmp_comparison_chain_2__operand_4;
    tmp_comparison_chain_2__operand_4 = tmp_assign_source_9;
    Py_INCREF(tmp_comparison_chain_2__operand_4);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_comparison_chain_2__operand_3);
tmp_cmp_expr_left_8 = tmp_comparison_chain_2__operand_3;
CHECK_OBJECT(tmp_comparison_chain_2__operand_4);
tmp_cmp_expr_right_8 = tmp_comparison_chain_2__operand_4;
tmp_assign_source_10 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    assert(old != NULL);
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_8;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_8 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_9:;
{
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_comparison_chain_2__operand_4);
tmp_cmp_expr_left_9 = tmp_comparison_chain_2__operand_4;
tmp_cmp_expr_right_9 = mod_consts.const_int_pos_255;
tmp_operand_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__operand_3);
tmp_comparison_chain_2__operand_3 = NULL;
Py_XDECREF(tmp_comparison_chain_2__operand_4);
tmp_comparison_chain_2__operand_4 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__operand_3);
tmp_comparison_chain_2__operand_3 = NULL;
Py_XDECREF(tmp_comparison_chain_2__operand_4);
tmp_comparison_chain_2__operand_4 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_3;
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 206;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
branch_end_2:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_PIL$ImageOps$Sequence(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyLong_Type;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_PIL$ImageOps$_color(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__color);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_black);
tmp_args_element_value_3 = par_black;
tmp_args_element_value_4 = mod_consts.const_str_plain_RGB;
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 209;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_black;
    var_rgb_black = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = module_var_accessor_PIL$ImageOps$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_PIL$ImageOps$Sequence(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = (PyObject *)&PyLong_Type;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_PIL$ImageOps$_color(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__color);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_5);

exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_white);
tmp_args_element_value_7 = par_white;
tmp_args_element_value_8 = mod_consts.const_str_plain_RGB;
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 210;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 210;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_white;
    var_rgb_white = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(par_mid);
tmp_cmp_expr_left_10 = par_mid;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_10 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_5 = module_var_accessor_PIL$ImageOps$cast(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_PIL$ImageOps$Sequence(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_PIL$ImageOps$_color(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__color);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_9);

exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mid);
tmp_args_element_value_11 = par_mid;
tmp_args_element_value_12 = mod_consts.const_str_plain_RGB;
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 211;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 211;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_13 = Py_None;
Py_INCREF(tmp_assign_source_13);
condexpr_end_1:;
{
    PyObject *old = var_rgb_mid;
    var_rgb_mid = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_red;
    var_red = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_green;
    var_green = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_blue;
    var_blue = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(par_blackpoint);
tmp_xrange_low_1 = par_blackpoint;
tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
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
type_description_1 = "ooooooooooooooooo";
exception_lineno = 219;
        goto try_except_handler_4;
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_4;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 220;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_1 = var_red;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_5 = var_rgb_black;
tmp_subscript_value_4 = const_int_0;
tmp_item_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_4, 0);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_5;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 221;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_2 = var_green;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_6 = var_rgb_black;
tmp_subscript_value_5 = const_int_pos_1;
tmp_item_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_5, 1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_6;
if (var_blue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 222;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_3 = var_blue;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_7 = var_rgb_black;
tmp_subscript_value_6 = mod_consts.const_int_pos_2;
tmp_item_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_6, 2);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_rgb_mid);
tmp_cmp_expr_left_11 = var_rgb_mid;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_xrange_low_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_whitepoint);
tmp_sub_expr_left_1 = par_whitepoint;
CHECK_OBJECT(par_blackpoint);
tmp_sub_expr_right_1 = par_blackpoint;
tmp_xrange_low_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_xrange_low_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_2);
CHECK_OBJECT(tmp_xrange_low_2);
Py_DECREF(tmp_xrange_low_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_range_map;
    var_range_map = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_range_map);
tmp_iter_arg_2 = var_range_map;
tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_22 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_22 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 228;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_23 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_23;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_7;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_9;
PyObject *tmp_len_arg_1;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 229;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_4 = var_red;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_8 = var_rgb_black;
tmp_subscript_value_7 = const_int_0;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_7, 0);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_1 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_9 = var_rgb_white;
tmp_subscript_value_8 = const_int_0;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_8, 0);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_10 = var_rgb_black;
tmp_subscript_value_9 = const_int_0;
tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_9, 0);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_floordiv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_range_map);
tmp_len_arg_1 = var_range_map;
tmp_floordiv_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_floordiv_expr_right_1 == NULL));
tmp_add_expr_right_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
CHECK_OBJECT(tmp_floordiv_expr_right_1);
Py_DECREF(tmp_floordiv_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_item_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_item_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_10;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_12;
PyObject *tmp_len_arg_2;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_5 = var_green;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_11 = var_rgb_black;
tmp_subscript_value_10 = const_int_pos_1;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_10, 1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_2 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_12 = var_rgb_white;
tmp_subscript_value_11 = const_int_pos_1;
tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_11, 1);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_13 = var_rgb_black;
tmp_subscript_value_12 = const_int_pos_1;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_12, 1);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_sub_expr_left_3);

exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_floordiv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_floordiv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_range_map);
tmp_len_arg_2 = var_range_map;
tmp_floordiv_expr_right_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_floordiv_expr_right_2 == NULL));
tmp_add_expr_right_2 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
CHECK_OBJECT(tmp_floordiv_expr_left_2);
Py_DECREF(tmp_floordiv_expr_left_2);
CHECK_OBJECT(tmp_floordiv_expr_right_2);
Py_DECREF(tmp_floordiv_expr_right_2);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_item_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_item_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_13;
PyObject *tmp_floordiv_expr_left_3;
PyObject *tmp_floordiv_expr_right_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_14;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_15;
PyObject *tmp_len_arg_3;
if (var_blue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_list_arg_value_6 = var_blue;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_14 = var_rgb_black;
tmp_subscript_value_13 = mod_consts.const_int_pos_2;
tmp_add_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_13, 2);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_3 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_15 = var_rgb_white;
tmp_subscript_value_14 = mod_consts.const_int_pos_2;
tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_14, 2);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_16 = var_rgb_black;
tmp_subscript_value_15 = mod_consts.const_int_pos_2;
tmp_sub_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_15, 2);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_floordiv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_floordiv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_range_map);
tmp_len_arg_3 = var_range_map;
tmp_floordiv_expr_right_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
assert(!(tmp_floordiv_expr_right_3 == NULL));
tmp_add_expr_right_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
CHECK_OBJECT(tmp_floordiv_expr_left_3);
Py_DECREF(tmp_floordiv_expr_left_3);
CHECK_OBJECT(tmp_floordiv_expr_right_3);
Py_DECREF(tmp_floordiv_expr_right_3);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_item_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_item_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
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
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_xrange_low_3;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
CHECK_OBJECT(par_midpoint);
tmp_sub_expr_left_5 = par_midpoint;
CHECK_OBJECT(par_blackpoint);
tmp_sub_expr_right_5 = par_blackpoint;
tmp_xrange_low_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_xrange_low_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_24 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_3);
CHECK_OBJECT(tmp_xrange_low_3);
Py_DECREF(tmp_xrange_low_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_range_map1;
    var_range_map1 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_xrange_low_4;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
CHECK_OBJECT(par_whitepoint);
tmp_sub_expr_left_6 = par_whitepoint;
CHECK_OBJECT(par_midpoint);
tmp_sub_expr_right_6 = par_midpoint;
tmp_xrange_low_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_xrange_low_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_4);
CHECK_OBJECT(tmp_xrange_low_4);
Py_DECREF(tmp_xrange_low_4);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_range_map2;
    var_range_map2 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_range_map1);
tmp_iter_arg_3 = var_range_map1;
tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_27 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_27 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 244;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_28 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_28;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_7;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_16;
PyObject *tmp_floordiv_expr_left_4;
PyObject *tmp_floordiv_expr_right_4;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_sub_expr_left_7;
PyObject *tmp_sub_expr_right_7;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_17;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_18;
PyObject *tmp_len_arg_4;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_7 = var_red;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_17 = var_rgb_black;
tmp_subscript_value_16 = const_int_0;
tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_16, 0);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_4 = var_i;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_18 = var_rgb_mid;
tmp_subscript_value_17 = const_int_0;
tmp_sub_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_17, 0);
if (tmp_sub_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_19 = var_rgb_black;
tmp_subscript_value_18 = const_int_0;
tmp_sub_expr_right_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_18, 0);
if (tmp_sub_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);
Py_DECREF(tmp_sub_expr_left_7);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
CHECK_OBJECT(tmp_sub_expr_left_7);
Py_DECREF(tmp_sub_expr_left_7);
CHECK_OBJECT(tmp_sub_expr_right_7);
Py_DECREF(tmp_sub_expr_right_7);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_floordiv_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_floordiv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_range_map1);
tmp_len_arg_4 = var_range_map1;
tmp_floordiv_expr_right_4 = BUILTIN_LEN(tstate, tmp_len_arg_4);
assert(!(tmp_floordiv_expr_right_4 == NULL));
tmp_add_expr_right_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_4, tmp_floordiv_expr_right_4);
CHECK_OBJECT(tmp_floordiv_expr_left_4);
Py_DECREF(tmp_floordiv_expr_left_4);
CHECK_OBJECT(tmp_floordiv_expr_right_4);
Py_DECREF(tmp_floordiv_expr_right_4);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_4);

exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_item_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_item_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_8;
PyObject *tmp_item_value_8;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_19;
PyObject *tmp_floordiv_expr_left_5;
PyObject *tmp_floordiv_expr_right_5;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_sub_expr_left_8;
PyObject *tmp_sub_expr_right_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_20;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_21;
PyObject *tmp_len_arg_5;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_8 = var_green;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_20 = var_rgb_black;
tmp_subscript_value_19 = const_int_pos_1;
tmp_add_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_19, 1);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_5 = var_i;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_21 = var_rgb_mid;
tmp_subscript_value_20 = const_int_pos_1;
tmp_sub_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_20, 1);
if (tmp_sub_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_22 = var_rgb_black;
tmp_subscript_value_21 = const_int_pos_1;
tmp_sub_expr_right_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_21, 1);
if (tmp_sub_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);
Py_DECREF(tmp_sub_expr_left_8);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_mult_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
CHECK_OBJECT(tmp_sub_expr_left_8);
Py_DECREF(tmp_sub_expr_left_8);
CHECK_OBJECT(tmp_sub_expr_right_8);
Py_DECREF(tmp_sub_expr_right_8);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_floordiv_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_floordiv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_range_map1);
tmp_len_arg_5 = var_range_map1;
tmp_floordiv_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_5);
assert(!(tmp_floordiv_expr_right_5 == NULL));
tmp_add_expr_right_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_5, tmp_floordiv_expr_right_5);
CHECK_OBJECT(tmp_floordiv_expr_left_5);
Py_DECREF(tmp_floordiv_expr_left_5);
CHECK_OBJECT(tmp_floordiv_expr_right_5);
Py_DECREF(tmp_floordiv_expr_right_5);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_5);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_item_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_item_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_8, tmp_item_value_8);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_9;
PyObject *tmp_item_value_9;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_22;
PyObject *tmp_floordiv_expr_left_6;
PyObject *tmp_floordiv_expr_right_6;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_sub_expr_left_9;
PyObject *tmp_sub_expr_right_9;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_23;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_24;
PyObject *tmp_len_arg_6;
if (var_blue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_9 = var_blue;
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_23 = var_rgb_black;
tmp_subscript_value_22 = mod_consts.const_int_pos_2;
tmp_add_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_22, 2);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_6 = var_i;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_24 = var_rgb_mid;
tmp_subscript_value_23 = mod_consts.const_int_pos_2;
tmp_sub_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_23, 2);
if (tmp_sub_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_rgb_black);
tmp_expression_value_25 = var_rgb_black;
tmp_subscript_value_24 = mod_consts.const_int_pos_2;
tmp_sub_expr_right_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_24, 2);
if (tmp_sub_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);
Py_DECREF(tmp_sub_expr_left_9);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_mult_expr_right_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
CHECK_OBJECT(tmp_sub_expr_left_9);
Py_DECREF(tmp_sub_expr_left_9);
CHECK_OBJECT(tmp_sub_expr_right_9);
Py_DECREF(tmp_sub_expr_right_9);
if (tmp_mult_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_floordiv_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_right_6);
Py_DECREF(tmp_mult_expr_right_6);
if (tmp_floordiv_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_range_map1);
tmp_len_arg_6 = var_range_map1;
tmp_floordiv_expr_right_6 = BUILTIN_LEN(tstate, tmp_len_arg_6);
assert(!(tmp_floordiv_expr_right_6 == NULL));
tmp_add_expr_right_6 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_6, tmp_floordiv_expr_right_6);
CHECK_OBJECT(tmp_floordiv_expr_left_6);
Py_DECREF(tmp_floordiv_expr_left_6);
CHECK_OBJECT(tmp_floordiv_expr_right_6);
Py_DECREF(tmp_floordiv_expr_right_6);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_item_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_item_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_9, tmp_item_value_9);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_range_map2);
tmp_iter_arg_4 = var_range_map2;
tmp_assign_source_29 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_4__for_iterator;
    tmp_for_loop_4__for_iterator = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_30 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_30 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 254;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_assign_source_31 = tmp_for_loop_4__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_31;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_10;
PyObject *tmp_item_value_10;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_25;
PyObject *tmp_floordiv_expr_left_7;
PyObject *tmp_floordiv_expr_right_7;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_sub_expr_left_10;
PyObject *tmp_sub_expr_right_10;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_26;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_27;
PyObject *tmp_len_arg_7;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_10 = var_red;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_26 = var_rgb_mid;
tmp_subscript_value_25 = const_int_0;
tmp_add_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_25, 0);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_7 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_27 = var_rgb_white;
tmp_subscript_value_26 = const_int_0;
tmp_sub_expr_left_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_26, 0);
if (tmp_sub_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_28 = var_rgb_mid;
tmp_subscript_value_27 = const_int_0;
tmp_sub_expr_right_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_27, 0);
if (tmp_sub_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);
Py_DECREF(tmp_sub_expr_left_10);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_mult_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
CHECK_OBJECT(tmp_sub_expr_left_10);
Py_DECREF(tmp_sub_expr_left_10);
CHECK_OBJECT(tmp_sub_expr_right_10);
Py_DECREF(tmp_sub_expr_right_10);
if (tmp_mult_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_floordiv_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_floordiv_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_range_map2);
tmp_len_arg_7 = var_range_map2;
tmp_floordiv_expr_right_7 = BUILTIN_LEN(tstate, tmp_len_arg_7);
assert(!(tmp_floordiv_expr_right_7 == NULL));
tmp_add_expr_right_7 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_7, tmp_floordiv_expr_right_7);
CHECK_OBJECT(tmp_floordiv_expr_left_7);
Py_DECREF(tmp_floordiv_expr_left_7);
CHECK_OBJECT(tmp_floordiv_expr_right_7);
Py_DECREF(tmp_floordiv_expr_right_7);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_7);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_item_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_item_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_10, tmp_item_value_10);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_11;
PyObject *tmp_item_value_11;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_28;
PyObject *tmp_floordiv_expr_left_8;
PyObject *tmp_floordiv_expr_right_8;
PyObject *tmp_mult_expr_left_8;
PyObject *tmp_mult_expr_right_8;
PyObject *tmp_sub_expr_left_11;
PyObject *tmp_sub_expr_right_11;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_29;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_30;
PyObject *tmp_len_arg_8;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_11 = var_green;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_29 = var_rgb_mid;
tmp_subscript_value_28 = const_int_pos_1;
tmp_add_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_28, 1);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_8 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_30 = var_rgb_white;
tmp_subscript_value_29 = const_int_pos_1;
tmp_sub_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_29, 1);
if (tmp_sub_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_31 = var_rgb_mid;
tmp_subscript_value_30 = const_int_pos_1;
tmp_sub_expr_right_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_30, 1);
if (tmp_sub_expr_right_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);
Py_DECREF(tmp_sub_expr_left_11);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_mult_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
CHECK_OBJECT(tmp_sub_expr_left_11);
Py_DECREF(tmp_sub_expr_left_11);
CHECK_OBJECT(tmp_sub_expr_right_11);
Py_DECREF(tmp_sub_expr_right_11);
if (tmp_mult_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_floordiv_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
CHECK_OBJECT(tmp_mult_expr_right_8);
Py_DECREF(tmp_mult_expr_right_8);
if (tmp_floordiv_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_range_map2);
tmp_len_arg_8 = var_range_map2;
tmp_floordiv_expr_right_8 = BUILTIN_LEN(tstate, tmp_len_arg_8);
assert(!(tmp_floordiv_expr_right_8 == NULL));
tmp_add_expr_right_8 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_8, tmp_floordiv_expr_right_8);
CHECK_OBJECT(tmp_floordiv_expr_left_8);
Py_DECREF(tmp_floordiv_expr_left_8);
CHECK_OBJECT(tmp_floordiv_expr_right_8);
Py_DECREF(tmp_floordiv_expr_right_8);
if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_8);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_item_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
CHECK_OBJECT(tmp_add_expr_right_8);
Py_DECREF(tmp_add_expr_right_8);
if (tmp_item_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_11, tmp_item_value_11);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_12;
PyObject *tmp_item_value_12;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_31;
PyObject *tmp_floordiv_expr_left_9;
PyObject *tmp_floordiv_expr_right_9;
PyObject *tmp_mult_expr_left_9;
PyObject *tmp_mult_expr_right_9;
PyObject *tmp_sub_expr_left_12;
PyObject *tmp_sub_expr_right_12;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_32;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_33;
PyObject *tmp_len_arg_9;
if (var_blue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}

tmp_list_arg_value_12 = var_blue;
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_32 = var_rgb_mid;
tmp_subscript_value_31 = mod_consts.const_int_pos_2;
tmp_add_expr_left_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_31, 2);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_i);
tmp_mult_expr_left_9 = var_i;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_33 = var_rgb_white;
tmp_subscript_value_32 = mod_consts.const_int_pos_2;
tmp_sub_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_32, 2);
if (tmp_sub_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_rgb_mid);
tmp_expression_value_34 = var_rgb_mid;
tmp_subscript_value_33 = mod_consts.const_int_pos_2;
tmp_sub_expr_right_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_33, 2);
if (tmp_sub_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);
Py_DECREF(tmp_sub_expr_left_12);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_mult_expr_right_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
CHECK_OBJECT(tmp_sub_expr_left_12);
Py_DECREF(tmp_sub_expr_left_12);
CHECK_OBJECT(tmp_sub_expr_right_12);
Py_DECREF(tmp_sub_expr_right_12);
if (tmp_mult_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_floordiv_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
CHECK_OBJECT(tmp_mult_expr_right_9);
Py_DECREF(tmp_mult_expr_right_9);
if (tmp_floordiv_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_range_map2);
tmp_len_arg_9 = var_range_map2;
tmp_floordiv_expr_right_9 = BUILTIN_LEN(tstate, tmp_len_arg_9);
assert(!(tmp_floordiv_expr_right_9 == NULL));
tmp_add_expr_right_9 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_9, tmp_floordiv_expr_right_9);
CHECK_OBJECT(tmp_floordiv_expr_left_9);
Py_DECREF(tmp_floordiv_expr_left_9);
CHECK_OBJECT(tmp_floordiv_expr_right_9);
Py_DECREF(tmp_floordiv_expr_right_9);
if (tmp_add_expr_right_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_9);

exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_item_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
CHECK_OBJECT(tmp_add_expr_right_9);
Py_DECREF(tmp_add_expr_right_9);
if (tmp_item_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_12, tmp_item_value_12);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
branch_end_10:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_5;
PyObject *tmp_xrange_low_5;
PyObject *tmp_sub_expr_left_13;
PyObject *tmp_sub_expr_right_13;
tmp_sub_expr_left_13 = mod_consts.const_int_pos_256;
CHECK_OBJECT(par_whitepoint);
tmp_sub_expr_right_13 = par_whitepoint;
tmp_xrange_low_5 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_13, tmp_sub_expr_right_13);
if (tmp_xrange_low_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_5 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_5);
CHECK_OBJECT(tmp_xrange_low_5);
Py_DECREF(tmp_xrange_low_5);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_5__for_iterator;
    tmp_for_loop_5__for_iterator = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_33 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_33 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooo";
exception_lineno = 262;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_assign_source_34 = tmp_for_loop_5__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_34;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_13;
PyObject *tmp_item_value_13;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_34;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_13 = var_red;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_35 = var_rgb_white;
tmp_subscript_value_34 = const_int_0;
tmp_item_value_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_34, 0);
if (tmp_item_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_13, tmp_item_value_13);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_14;
PyObject *tmp_item_value_14;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_35;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_14 = var_green;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_36 = var_rgb_white;
tmp_subscript_value_35 = const_int_pos_1;
tmp_item_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_35, 1);
if (tmp_item_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_14, tmp_item_value_14);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_15;
PyObject *tmp_item_value_15;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_36;
if (var_blue == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_15 = var_blue;
CHECK_OBJECT(var_rgb_white);
tmp_expression_value_37 = var_rgb_white;
tmp_subscript_value_36 = mod_consts.const_int_pos_2;
tmp_item_value_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_36, 2);
if (tmp_item_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_15, tmp_item_value_15);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_5;
loop_end_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 268;
tmp_assign_source_35 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_RGB_tuple, 0)
);

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_image;
    assert(old != NULL);
    par_image = tmp_assign_source_35;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
tmp_called_value_7 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_13 = par_image;
if (var_red == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_red);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_11 = var_red;
if (var_green == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_green);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_11 = var_green;
tmp_add_expr_left_10 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_11, tmp_add_expr_right_11);
assert(!(tmp_add_expr_left_10 == NULL));
if (var_blue == NULL) {
Py_DECREF(tmp_add_expr_left_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_blue);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "ooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_10 = var_blue;
tmp_args_element_value_14 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_10, tmp_add_expr_right_10);
CHECK_OBJECT(tmp_add_expr_left_10);
Py_DECREF(tmp_add_expr_left_10);
assert(!(tmp_args_element_value_14 == NULL));
frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame.f_lineno = 269;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__5_colorize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__5_colorize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__5_colorize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__5_colorize,
    type_description_1,
    par_image,
    par_black,
    par_white,
    par_mid,
    par_blackpoint,
    par_whitepoint,
    par_midpoint,
    var_rgb_black,
    var_rgb_white,
    var_rgb_mid,
    var_red,
    var_green,
    var_blue,
    var_i,
    var_range_map,
    var_range_map1,
    var_range_map2
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__5_colorize == cache_frame_frame_PIL$ImageOps$$$function__5_colorize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__5_colorize);
    cache_frame_frame_PIL$ImageOps$$$function__5_colorize = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__5_colorize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_image);
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
par_image = NULL;
CHECK_OBJECT(var_rgb_black);
CHECK_OBJECT(var_rgb_black);
Py_DECREF(var_rgb_black);
var_rgb_black = NULL;
CHECK_OBJECT(var_rgb_white);
CHECK_OBJECT(var_rgb_white);
Py_DECREF(var_rgb_white);
var_rgb_white = NULL;
CHECK_OBJECT(var_rgb_mid);
CHECK_OBJECT(var_rgb_mid);
Py_DECREF(var_rgb_mid);
var_rgb_mid = NULL;
Py_XDECREF(var_red);
var_red = NULL;
Py_XDECREF(var_green);
var_green = NULL;
Py_XDECREF(var_blue);
var_blue = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_range_map);
var_range_map = NULL;
Py_XDECREF(var_range_map1);
var_range_map1 = NULL;
Py_XDECREF(var_range_map2);
var_range_map2 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_image);
par_image = NULL;
Py_XDECREF(var_rgb_black);
var_rgb_black = NULL;
Py_XDECREF(var_rgb_white);
var_rgb_white = NULL;
Py_XDECREF(var_rgb_mid);
var_rgb_mid = NULL;
Py_XDECREF(var_red);
var_red = NULL;
Py_XDECREF(var_green);
var_green = NULL;
Py_XDECREF(var_blue);
var_blue = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_range_map);
var_range_map = NULL;
Py_XDECREF(var_range_map1);
var_range_map1 = NULL;
Py_XDECREF(var_range_map2);
var_range_map2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_black);
Py_DECREF(par_black);
CHECK_OBJECT(par_white);
Py_DECREF(par_white);
CHECK_OBJECT(par_mid);
Py_DECREF(par_mid);
CHECK_OBJECT(par_blackpoint);
Py_DECREF(par_blackpoint);
CHECK_OBJECT(par_whitepoint);
Py_DECREF(par_whitepoint);
CHECK_OBJECT(par_midpoint);
Py_DECREF(par_midpoint);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_black);
Py_DECREF(par_black);
CHECK_OBJECT(par_white);
Py_DECREF(par_white);
CHECK_OBJECT(par_mid);
Py_DECREF(par_mid);
CHECK_OBJECT(par_blackpoint);
Py_DECREF(par_blackpoint);
CHECK_OBJECT(par_whitepoint);
Py_DECREF(par_whitepoint);
CHECK_OBJECT(par_midpoint);
Py_DECREF(par_midpoint);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__6_contain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *var_im_ratio = NULL;
PyObject *var_dest_ratio = NULL;
PyObject *var_new_height = NULL;
PyObject *var_new_width = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__6_contain;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__6_contain = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__6_contain)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__6_contain);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__6_contain == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__6_contain = MAKE_FUNCTION_FRAME(tstate, code_objects_64b9f54ce7e56a46a92c03b4c2f985fa, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__6_contain->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__6_contain = cache_frame_frame_PIL$ImageOps$$$function__6_contain;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__6_contain);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__6_contain) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 288;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_ratio;
    var_im_ratio = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_size);
tmp_expression_value_3 = par_size;
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_4 = par_size;
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 289;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dest_ratio;
    var_dest_ratio = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_im_ratio);
tmp_cmp_expr_left_1 = var_im_ratio;
CHECK_OBJECT(var_dest_ratio);
tmp_cmp_expr_right_1 = var_dest_ratio;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_im_ratio);
tmp_cmp_expr_left_2 = var_im_ratio;
CHECK_OBJECT(var_dest_ratio);
tmp_cmp_expr_right_2 = var_dest_ratio;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_truediv_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_6 = par_image;
tmp_truediv_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
CHECK_OBJECT(tmp_truediv_expr_right_3);
Py_DECREF(tmp_truediv_expr_right_3);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_7 = par_size;
tmp_subscript_value_3 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__6_contain->m_frame.f_lineno = 293;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_height;
    var_new_height = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_new_height);
tmp_cmp_expr_left_3 = var_new_height;
CHECK_OBJECT(par_size);
tmp_expression_value_8 = par_size;
tmp_subscript_value_4 = const_int_pos_1;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_size);
tmp_expression_value_9 = par_size;
tmp_subscript_value_5 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_new_height);
tmp_tuple_element_1 = var_new_height;
PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_1);
{
    PyObject *old = par_size;
    assert(old != NULL);
    par_size = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_image);
tmp_expression_value_10 = par_image;
tmp_truediv_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_11 = par_image;
tmp_truediv_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_4);

exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
CHECK_OBJECT(tmp_truediv_expr_right_4);
Py_DECREF(tmp_truediv_expr_right_4);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_12 = par_size;
tmp_subscript_value_6 = const_int_pos_1;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_6, 1);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__6_contain->m_frame.f_lineno = 297;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_width;
    var_new_width = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_new_width);
tmp_cmp_expr_left_4 = var_new_width;
CHECK_OBJECT(par_size);
tmp_expression_value_13 = par_size;
tmp_subscript_value_7 = const_int_0;
tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_7, 0);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_new_width);
tmp_tuple_element_2 = var_new_width;
tmp_assign_source_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM0(tmp_assign_source_6, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_size);
tmp_expression_value_14 = par_size;
tmp_subscript_value_8 = const_int_pos_1;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_8, 1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = par_size;
    assert(old != NULL);
    par_size = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_image);
tmp_expression_value_15 = par_image;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_resize);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_kw_call_arg_value_0_1 = par_size;
CHECK_OBJECT(par_method);
tmp_kw_call_dict_value_0_1 = par_method;
frame_frame_PIL$ImageOps$$$function__6_contain->m_frame.f_lineno = 300;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_resample_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__6_contain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__6_contain->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__6_contain, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__6_contain,
    type_description_1,
    par_image,
    par_size,
    par_method,
    var_im_ratio,
    var_dest_ratio,
    var_new_height,
    var_new_width
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__6_contain == cache_frame_frame_PIL$ImageOps$$$function__6_contain) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__6_contain);
    cache_frame_frame_PIL$ImageOps$$$function__6_contain = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__6_contain);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
CHECK_OBJECT(var_im_ratio);
CHECK_OBJECT(var_im_ratio);
Py_DECREF(var_im_ratio);
var_im_ratio = NULL;
CHECK_OBJECT(var_dest_ratio);
CHECK_OBJECT(var_dest_ratio);
Py_DECREF(var_dest_ratio);
var_dest_ratio = NULL;
Py_XDECREF(var_new_height);
var_new_height = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_size);
par_size = NULL;
Py_XDECREF(var_im_ratio);
var_im_ratio = NULL;
Py_XDECREF(var_dest_ratio);
var_dest_ratio = NULL;
Py_XDECREF(var_new_height);
var_new_height = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__7_cover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *var_im_ratio = NULL;
PyObject *var_dest_ratio = NULL;
PyObject *var_new_height = NULL;
PyObject *var_new_width = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__7_cover;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__7_cover = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__7_cover)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__7_cover);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__7_cover == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__7_cover = MAKE_FUNCTION_FRAME(tstate, code_objects_332ca72177f4eb6f8937d263466a4e87, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__7_cover->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__7_cover = cache_frame_frame_PIL$ImageOps$$$function__7_cover;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__7_cover);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__7_cover) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_ratio;
    var_im_ratio = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_size);
tmp_expression_value_3 = par_size;
tmp_subscript_value_1 = const_int_0;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_4 = par_size;
tmp_subscript_value_2 = const_int_pos_1;
tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 320;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_dest_ratio;
    var_dest_ratio = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_im_ratio);
tmp_cmp_expr_left_1 = var_im_ratio;
CHECK_OBJECT(var_dest_ratio);
tmp_cmp_expr_right_1 = var_dest_ratio;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_im_ratio);
tmp_cmp_expr_left_2 = var_im_ratio;
CHECK_OBJECT(var_dest_ratio);
tmp_cmp_expr_right_2 = var_dest_ratio;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_truediv_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_6 = par_image;
tmp_truediv_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_3);

exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
CHECK_OBJECT(tmp_truediv_expr_right_3);
Py_DECREF(tmp_truediv_expr_right_3);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_7 = par_size;
tmp_subscript_value_3 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_3, 0);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__7_cover->m_frame.f_lineno = 324;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_height;
    var_new_height = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_new_height);
tmp_cmp_expr_left_3 = var_new_height;
CHECK_OBJECT(par_size);
tmp_expression_value_8 = par_size;
tmp_subscript_value_4 = const_int_pos_1;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_4, 1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
CHECK_OBJECT(par_size);
tmp_expression_value_9 = par_size;
tmp_subscript_value_5 = const_int_0;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_5, 0);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_new_height);
tmp_tuple_element_1 = var_new_height;
PyTuple_SET_ITEM0(tmp_assign_source_4, 1, tmp_tuple_element_1);
{
    PyObject *old = par_size;
    assert(old != NULL);
    par_size = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_6;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_image);
tmp_expression_value_10 = par_image;
tmp_truediv_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_width);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_11 = par_image;
tmp_truediv_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_height);
if (tmp_truediv_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_4);

exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
CHECK_OBJECT(tmp_truediv_expr_right_4);
Py_DECREF(tmp_truediv_expr_right_4);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_12 = par_size;
tmp_subscript_value_6 = const_int_pos_1;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_6, 1);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__7_cover->m_frame.f_lineno = 328;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_new_width;
    var_new_width = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_7;
CHECK_OBJECT(var_new_width);
tmp_cmp_expr_left_4 = var_new_width;
CHECK_OBJECT(par_size);
tmp_expression_value_13 = par_size;
tmp_subscript_value_7 = const_int_0;
tmp_cmp_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_7, 0);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_new_width);
tmp_tuple_element_2 = var_new_width;
tmp_assign_source_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM0(tmp_assign_source_6, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_size);
tmp_expression_value_14 = par_size;
tmp_subscript_value_8 = const_int_pos_1;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_8, 1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = par_size;
    assert(old != NULL);
    par_size = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_image);
tmp_expression_value_15 = par_image;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_resize);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_kw_call_arg_value_0_1 = par_size;
CHECK_OBJECT(par_method);
tmp_kw_call_dict_value_0_1 = par_method;
frame_frame_PIL$ImageOps$$$function__7_cover->m_frame.f_lineno = 331;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_resample_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__7_cover, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__7_cover->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__7_cover, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__7_cover,
    type_description_1,
    par_image,
    par_size,
    par_method,
    var_im_ratio,
    var_dest_ratio,
    var_new_height,
    var_new_width
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__7_cover == cache_frame_frame_PIL$ImageOps$$$function__7_cover) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__7_cover);
    cache_frame_frame_PIL$ImageOps$$$function__7_cover = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__7_cover);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
CHECK_OBJECT(var_im_ratio);
CHECK_OBJECT(var_im_ratio);
Py_DECREF(var_im_ratio);
var_im_ratio = NULL;
CHECK_OBJECT(var_dest_ratio);
CHECK_OBJECT(var_dest_ratio);
Py_DECREF(var_dest_ratio);
var_dest_ratio = NULL;
Py_XDECREF(var_new_height);
var_new_height = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_size);
par_size = NULL;
Py_XDECREF(var_im_ratio);
var_im_ratio = NULL;
Py_XDECREF(var_dest_ratio);
var_dest_ratio = NULL;
Py_XDECREF(var_new_height);
var_new_height = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__8_pad(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *par_color = python_pars[3];
PyObject *par_centering = python_pars[4];
PyObject *var_resized = NULL;
PyObject *var_out = NULL;
PyObject *var_palette = NULL;
PyObject *var_x = NULL;
PyObject *var_y = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__8_pad;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__8_pad = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__8_pad)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__8_pad);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__8_pad == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__8_pad = MAKE_FUNCTION_FRAME(tstate, code_objects_1b07967bd8469baca9437e3906cba519, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__8_pad->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__8_pad = cache_frame_frame_PIL$ImageOps$$$function__8_pad;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__8_pad);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__8_pad) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$contain(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contain);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_1 = par_image;
CHECK_OBJECT(par_size);
tmp_args_element_value_2 = par_size;
CHECK_OBJECT(par_method);
tmp_args_element_value_3 = par_method;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_resized;
    var_resized = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_resized);
tmp_expression_value_1 = var_resized;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_cmp_expr_right_1 = par_size;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_resized);
tmp_assign_source_2 = var_resized;
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_2;
    Py_INCREF(var_out);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_new);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_3 = par_image;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 366;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_args_element_value_5 = par_size;
CHECK_OBJECT(par_color);
tmp_args_element_value_6 = par_color;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 366;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_resized);
tmp_expression_value_4 = var_resized;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_palette);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 367;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_resized);
tmp_called_instance_1 = var_resized;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 368;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpalette);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_palette);
tmp_cmp_expr_left_2 = var_palette;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_out);
tmp_called_instance_2 = var_out;
CHECK_OBJECT(var_palette);
tmp_args_element_value_7 = var_palette;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 370;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_putpalette, tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_resized);
tmp_expression_value_5 = var_resized;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_width);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_6 = par_size;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 371;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_12;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_size);
tmp_expression_value_7 = par_size;
tmp_subscript_value_2 = const_int_0;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_resized);
tmp_expression_value_8 = var_resized;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_width);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_4 != NULL);
tmp_args_element_value_9 = const_int_0;
tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_5 != NULL);
CHECK_OBJECT(par_centering);
tmp_expression_value_9 = par_centering;
tmp_subscript_value_3 = const_int_0;
tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_3, 0);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = const_int_pos_1;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 372;
tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_x;
    var_x = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_out);
tmp_called_instance_3 = var_out;
CHECK_OBJECT(var_resized);
tmp_args_element_value_13 = var_resized;
CHECK_OBJECT(var_x);
tmp_tuple_element_1 = var_x;
tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_14, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_args_element_value_14, 1, tmp_tuple_element_1);
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 373;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_paste,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_15;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_5;
PyObject *tmp_args_element_value_19;
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_6 != NULL);
CHECK_OBJECT(par_size);
tmp_expression_value_10 = par_size;
tmp_subscript_value_4 = const_int_pos_1;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_4, 1);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_resized);
tmp_expression_value_11 = var_resized;
tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_height);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_7 != NULL);
tmp_args_element_value_16 = const_int_0;
tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_8 != NULL);
CHECK_OBJECT(par_centering);
tmp_expression_value_12 = par_centering;
tmp_subscript_value_5 = const_int_pos_1;
tmp_args_element_value_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_5, 1);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_19 = const_int_pos_1;
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 375;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_args_element_value_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 375;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_mult_expr_right_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_2);

exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 375;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_y;
    var_y = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_out);
tmp_called_instance_4 = var_out;
CHECK_OBJECT(var_resized);
tmp_args_element_value_20 = var_resized;
tmp_tuple_element_2 = const_int_0;
tmp_args_element_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_21, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_y);
tmp_tuple_element_2 = var_y;
PyTuple_SET_ITEM0(tmp_args_element_value_21, 1, tmp_tuple_element_2);
frame_frame_PIL$ImageOps$$$function__8_pad->m_frame.f_lineno = 376;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_paste,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_end_4:;
branch_end_1:;
if (var_out == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 377;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__8_pad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__8_pad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__8_pad, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__8_pad,
    type_description_1,
    par_image,
    par_size,
    par_method,
    par_color,
    par_centering,
    var_resized,
    var_out,
    var_palette,
    var_x,
    var_y
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__8_pad == cache_frame_frame_PIL$ImageOps$$$function__8_pad) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__8_pad);
    cache_frame_frame_PIL$ImageOps$$$function__8_pad = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__8_pad);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resized);
CHECK_OBJECT(var_resized);
Py_DECREF(var_resized);
var_resized = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_resized);
var_resized = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
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
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_centering);
Py_DECREF(par_centering);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_centering);
Py_DECREF(par_centering);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__9_crop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_border = python_pars[1];
PyObject *var_left = NULL;
PyObject *var_top = NULL;
PyObject *var_right = NULL;
PyObject *var_bottom = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__9_crop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__9_crop = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__9_crop)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__9_crop);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__9_crop == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__9_crop = MAKE_FUNCTION_FRAME(tstate, code_objects_8c51a4b72dd8753b2c225eb85e62c71d, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__9_crop->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__9_crop = cache_frame_frame_PIL$ImageOps$$$function__9_crop;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__9_crop);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__9_crop) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$_border(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__border);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_border);
tmp_args_element_value_1 = par_border;
frame_frame_PIL$ImageOps$$$function__9_crop->m_frame.f_lineno = 391;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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



exception_lineno = 391;
type_description_1 = "oooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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



exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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



exception_lineno = 391;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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



exception_lineno = 391;
type_description_1 = "oooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_6;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_7;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_8;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_9;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_crop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_left);
tmp_tuple_element_1 = var_left;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_top);
tmp_tuple_element_1 = var_top;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_image);
tmp_expression_value_3 = par_image;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_right);
tmp_sub_expr_right_1 = var_right;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_bottom);
tmp_sub_expr_right_2 = var_bottom;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_PIL$ImageOps$$$function__9_crop->m_frame.f_lineno = 392;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__9_crop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__9_crop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__9_crop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__9_crop,
    type_description_1,
    par_image,
    par_border,
    var_left,
    var_top,
    var_right,
    var_bottom
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__9_crop == cache_frame_frame_PIL$ImageOps$$$function__9_crop) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__9_crop);
    cache_frame_frame_PIL$ImageOps$$$function__9_crop = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__9_crop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left);
CHECK_OBJECT(var_left);
Py_DECREF(var_left);
var_left = NULL;
CHECK_OBJECT(var_top);
CHECK_OBJECT(var_top);
Py_DECREF(var_top);
var_top = NULL;
CHECK_OBJECT(var_right);
CHECK_OBJECT(var_right);
Py_DECREF(var_right);
var_right = NULL;
CHECK_OBJECT(var_bottom);
CHECK_OBJECT(var_bottom);
Py_DECREF(var_bottom);
var_bottom = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_border);
Py_DECREF(par_border);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_border);
Py_DECREF(par_border);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__10_scale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_factor = python_pars[1];
PyObject *par_resample = python_pars[2];
PyObject *var_size = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__10_scale;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__10_scale = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__10_scale)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__10_scale);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__10_scale == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__10_scale = MAKE_FUNCTION_FRAME(tstate, code_objects_05cb445af7b2fcd5ae2e3e05cbec2b14, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__10_scale->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__10_scale = cache_frame_frame_PIL$ImageOps$$$function__10_scale;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__10_scale);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__10_scale) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_factor);
tmp_cmp_expr_left_1 = par_factor;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooNo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__10_scale->m_frame.f_lineno = 411;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_factor);
tmp_cmp_expr_left_2 = par_factor;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooNo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6f15e8e85b056e68df7ff9e33febf26e;
frame_frame_PIL$ImageOps$$$function__10_scale->m_frame.f_lineno = 414;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 414;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooNo";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_factor);
tmp_mult_expr_left_1 = par_factor;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_width);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__10_scale->m_frame.f_lineno = 416;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par_factor);
tmp_mult_expr_left_2 = par_factor;
CHECK_OBJECT(par_image);
tmp_expression_value_3 = par_image;
tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_height);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
frame_frame_PIL$ImageOps$$$function__10_scale->m_frame.f_lineno = 416;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooNo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
CHECK_OBJECT(var_size);
tmp_args_element_value_3 = var_size;
CHECK_OBJECT(par_resample);
tmp_args_element_value_4 = par_resample;
frame_frame_PIL$ImageOps$$$function__10_scale->m_frame.f_lineno = 417;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_resize,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__10_scale, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__10_scale->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__10_scale, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__10_scale,
    type_description_1,
    par_image,
    par_factor,
    par_resample,
    NULL,
    var_size
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__10_scale == cache_frame_frame_PIL$ImageOps$$$function__10_scale) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__10_scale);
    cache_frame_frame_PIL$ImageOps$$$function__10_scale = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__10_scale);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_size);
var_size = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_size);
var_size = NULL;
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
CHECK_OBJECT(par_factor);
Py_DECREF(par_factor);
CHECK_OBJECT(par_resample);
Py_DECREF(par_resample);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_factor);
Py_DECREF(par_factor);
CHECK_OBJECT(par_resample);
Py_DECREF(par_resample);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__12_deform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_deformer = python_pars[1];
PyObject *par_resample = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__12_deform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__12_deform = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__12_deform)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__12_deform);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__12_deform == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__12_deform = MAKE_FUNCTION_FRAME(tstate, code_objects_d69f622fb95c27ca1f66eb42b275dd4a, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__12_deform->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__12_deform = cache_frame_frame_PIL$ImageOps$$$function__12_deform;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__12_deform);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__12_deform) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_transform);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Transform);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_MESH);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deformer);
tmp_called_instance_1 = par_deformer;
CHECK_OBJECT(par_image);
tmp_args_element_value_4 = par_image;
frame_frame_PIL$ImageOps$$$function__12_deform->m_frame.f_lineno = 452;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getmesh, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 452;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_resample);
tmp_args_element_value_5 = par_resample;
frame_frame_PIL$ImageOps$$$function__12_deform->m_frame.f_lineno = 451;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__12_deform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__12_deform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__12_deform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__12_deform,
    type_description_1,
    par_image,
    par_deformer,
    par_resample
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__12_deform == cache_frame_frame_PIL$ImageOps$$$function__12_deform) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__12_deform);
    cache_frame_frame_PIL$ImageOps$$$function__12_deform = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__12_deform);

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
CHECK_OBJECT(par_deformer);
Py_DECREF(par_deformer);
CHECK_OBJECT(par_resample);
Py_DECREF(par_resample);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_deformer);
Py_DECREF(par_deformer);
CHECK_OBJECT(par_resample);
Py_DECREF(par_resample);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__13_equalize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_mask = python_pars[1];
PyObject *var_h = NULL;
PyObject *var_lut = NULL;
PyObject *var_b = NULL;
PyObject *var_histo = NULL;
PyObject *var_step = NULL;
PyObject *var_n = NULL;
PyObject *var_i = NULL;
PyObject *outline_0_var__f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__13_equalize;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__13_equalize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__13_equalize)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__13_equalize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__13_equalize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__13_equalize = MAKE_FUNCTION_FRAME(tstate, code_objects_1de195970c16e76a0ada4d0126206952, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__13_equalize->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__13_equalize = cache_frame_frame_PIL$ImageOps$$$function__13_equalize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__13_equalize);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__13_equalize) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_P;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "ooooooooo";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame.f_lineno = 468;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_RGB_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_image;
    assert(old != NULL);
    par_image = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
if (par_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 469;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_image;
CHECK_OBJECT(par_mask);
tmp_args_element_value_1 = par_mask;
frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame.f_lineno = 469;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_histogram, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 469;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_h;
    var_h = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_lut;
    var_lut = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_xrange_step_1;
tmp_xrange_low_1 = const_int_0;
CHECK_OBJECT(var_h);
tmp_len_arg_1 = var_h;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_xrange_step_1 = mod_consts.const_int_pos_256;
tmp_iter_arg_1 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 471;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_6 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_6;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_h);
tmp_expression_value_2 = var_h;
CHECK_OBJECT(var_b);
tmp_start_value_1 = var_b;
CHECK_OBJECT(var_b);
tmp_add_expr_left_1 = var_b;
tmp_add_expr_right_1 = mod_consts.const_int_pos_256;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
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
type_description_1 = "ooooooooo";
exception_lineno = 472;
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
    PyObject *old = outline_0_var__f;
    outline_0_var__f = tmp_assign_source_11;
    Py_INCREF(outline_0_var__f);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var__f);
tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var__f);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var__f);
tmp_append_value_1 = outline_0_var__f;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_7 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_7);
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
Py_XDECREF(outline_0_var__f);
outline_0_var__f = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var__f);
outline_0_var__f = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 472;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_histo;
    var_histo = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_histo);
tmp_len_arg_2 = var_histo;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = 1;
tmp_condition_result_3 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 474;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_lut;
tmp_value_value_1 = LIST_COPY(tstate, mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_reduce);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_4 = module_var_accessor_PIL$ImageOps$operator(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_add);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_histo);
tmp_args_element_value_3 = var_histo;
frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame.f_lineno = 476;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_histo);
tmp_expression_value_5 = var_histo;
tmp_subscript_value_2 = const_int_neg_1;
tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, -1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_255;
tmp_assign_source_12 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_step;
    var_step = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_step);
tmp_operand_value_1 = var_step;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_2;
PyObject *tmp_value_value_2;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 478;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_lut;
tmp_value_value_2 = LIST_COPY(tstate, mod_consts.const_list_e2aba17168786245d6b6e3d7016f8784_list);
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_2, tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_floordiv_expr_left_2;
PyObject *tmp_floordiv_expr_right_2;
CHECK_OBJECT(var_step);
tmp_floordiv_expr_left_2 = var_step;
tmp_floordiv_expr_right_2 = mod_consts.const_int_pos_2;
tmp_assign_source_13 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_3;
tmp_iter_arg_3 = mod_consts.const_xrange_0_256;
tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
assert(!(tmp_assign_source_14 == NULL));
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_3 = tmp_for_loop_2__for_iterator;
tmp_assign_source_15 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_15 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 481;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_16 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_16;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_floordiv_expr_left_3;
PyObject *tmp_floordiv_expr_right_3;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_6 = var_lut;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
if (var_n == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_floordiv_expr_left_3 = var_n;
if (var_step == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_step);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_floordiv_expr_right_3 = var_step;
tmp_args_element_value_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_3, tmp_floordiv_expr_right_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame.f_lineno = 482;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
if (var_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 483;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_add_expr_left_2 = var_n;
CHECK_OBJECT(var_h);
tmp_expression_value_7 = var_h;
CHECK_OBJECT(var_i);
tmp_add_expr_left_3 = var_i;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 483;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}

tmp_add_expr_right_3 = var_b;
tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_n;
    var_n = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
goto loop_start_3;
loop_end_3:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_end_4:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 484;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 484;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = par_image;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 484;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_lut;
frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame.f_lineno = 484;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 484;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__13_equalize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__13_equalize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__13_equalize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__13_equalize,
    type_description_1,
    par_image,
    par_mask,
    var_h,
    var_lut,
    var_b,
    var_histo,
    var_step,
    var_n,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__13_equalize == cache_frame_frame_PIL$ImageOps$$$function__13_equalize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__13_equalize);
    cache_frame_frame_PIL$ImageOps$$$function__13_equalize = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__13_equalize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_image);
par_image = NULL;
CHECK_OBJECT(var_h);
CHECK_OBJECT(var_h);
Py_DECREF(var_h);
var_h = NULL;
Py_XDECREF(var_lut);
var_lut = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_histo);
var_histo = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_image);
par_image = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_lut);
var_lut = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_histo);
var_histo = NULL;
Py_XDECREF(var_step);
var_step = NULL;
Py_XDECREF(var_n);
var_n = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_mask);
Py_DECREF(par_mask);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__14_expand(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_border = python_pars[1];
PyObject *par_fill = python_pars[2];
PyObject *var_left = NULL;
PyObject *var_top = NULL;
PyObject *var_right = NULL;
PyObject *var_bottom = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_color = NULL;
PyObject *var_mode = NULL;
PyObject *var_palette = NULL;
PyObject *var_out = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__14_expand;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__14_expand = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__14_expand)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__14_expand);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__14_expand == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__14_expand = MAKE_FUNCTION_FRAME(tstate, code_objects_cceca6ce9bde2adbceb22f93dbc6ca1f, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__14_expand->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__14_expand = cache_frame_frame_PIL$ImageOps$$$function__14_expand;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__14_expand);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__14_expand) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$_border(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__border);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_border);
tmp_args_element_value_1 = par_border;
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 500;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
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



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 500;
type_description_1 = "ooooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_left;
    var_left = tmp_assign_source_6;
    Py_INCREF(var_left);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_top;
    var_top = tmp_assign_source_7;
    Py_INCREF(var_top);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_right;
    var_right = tmp_assign_source_8;
    Py_INCREF(var_right);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_bottom;
    var_bottom = tmp_assign_source_9;
    Py_INCREF(var_bottom);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_10;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_left);
tmp_add_expr_left_2 = var_left;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_right);
tmp_add_expr_right_1 = var_right;
tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_width;
    var_width = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_top);
tmp_add_expr_left_4 = var_top;
CHECK_OBJECT(par_image);
tmp_expression_value_4 = par_image;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bottom);
tmp_add_expr_right_3 = var_bottom;
tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 502;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_height;
    var_height = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
tmp_called_value_2 = module_var_accessor_PIL$ImageOps$_color(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__color);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fill);
tmp_args_element_value_2 = par_fill;
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 503;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_color;
    var_color = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_image);
tmp_expression_value_6 = par_image;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_palette);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 504;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_image);
tmp_expression_value_8 = par_image;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_palette);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 505;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_6;
tmp_expression_value_9 = module_var_accessor_PIL$ImageOps$ImagePalette(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ImagePalette);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mode);
tmp_args_element_value_4 = var_mode;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
CHECK_OBJECT(var_mode);
tmp_args_element_value_6 = var_mode;
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 506;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpalette, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 506;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 506;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_or_left_value_1_cbool_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
bool tmp_tmp_or_right_value_1_cbool_1;
CHECK_OBJECT(var_color);
tmp_isinstance_inst_1 = var_color;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_color);
tmp_len_arg_1 = var_color;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 3;
tmp_tmp_or_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_or_left_value_1 = tmp_tmp_or_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_color);
tmp_len_arg_2 = var_color;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 4;
tmp_tmp_or_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_or_right_value_1 = tmp_tmp_or_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_palette);
tmp_called_instance_2 = var_palette;
CHECK_OBJECT(var_color);
tmp_args_element_value_7 = var_color;
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 508;
tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getcolor, tmp_args_element_value_7);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 508;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_color;
    assert(old != NULL);
    var_color = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_None;
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_16;
    Py_INCREF(var_palette);
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_9;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_10;
tmp_expression_value_10 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 511;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_new);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_expression_value_11 = par_image;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 511;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_width);
tmp_tuple_element_1 = var_width;
tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_height);
tmp_tuple_element_1 = var_height;
PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_1);
if (var_color == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_color);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 511;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_10 = var_color;
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 511;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (var_palette == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 512;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(var_palette);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_12;
CHECK_OBJECT(var_out);
tmp_expression_value_12 = var_out;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_putpalette);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_palette == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_palette);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 513;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_palette;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_palette);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 513;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_mode == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 513;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_mode;
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 513;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_out);
tmp_called_instance_3 = var_out;
CHECK_OBJECT(par_image);
tmp_args_element_value_13 = par_image;
CHECK_OBJECT(var_left);
tmp_tuple_element_2 = var_left;
tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_14, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_top);
tmp_tuple_element_2 = var_top;
PyTuple_SET_ITEM0(tmp_args_element_value_14, 1, tmp_tuple_element_2);
frame_frame_PIL$ImageOps$$$function__14_expand->m_frame.f_lineno = 514;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_paste,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__14_expand, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__14_expand->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__14_expand, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__14_expand,
    type_description_1,
    par_image,
    par_border,
    par_fill,
    var_left,
    var_top,
    var_right,
    var_bottom,
    var_width,
    var_height,
    var_color,
    var_mode,
    var_palette,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__14_expand == cache_frame_frame_PIL$ImageOps$$$function__14_expand) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__14_expand);
    cache_frame_frame_PIL$ImageOps$$$function__14_expand = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__14_expand);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_left);
CHECK_OBJECT(var_left);
Py_DECREF(var_left);
var_left = NULL;
CHECK_OBJECT(var_top);
CHECK_OBJECT(var_top);
Py_DECREF(var_top);
var_top = NULL;
CHECK_OBJECT(var_right);
CHECK_OBJECT(var_right);
Py_DECREF(var_right);
var_right = NULL;
CHECK_OBJECT(var_bottom);
CHECK_OBJECT(var_bottom);
Py_DECREF(var_bottom);
var_bottom = NULL;
CHECK_OBJECT(var_width);
CHECK_OBJECT(var_width);
Py_DECREF(var_width);
var_width = NULL;
CHECK_OBJECT(var_height);
CHECK_OBJECT(var_height);
Py_DECREF(var_height);
var_height = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_left);
var_left = NULL;
Py_XDECREF(var_top);
var_top = NULL;
Py_XDECREF(var_right);
var_right = NULL;
Py_XDECREF(var_bottom);
var_bottom = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_color);
var_color = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_out);
var_out = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_border);
Py_DECREF(par_border);
CHECK_OBJECT(par_fill);
Py_DECREF(par_fill);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_border);
Py_DECREF(par_border);
CHECK_OBJECT(par_fill);
Py_DECREF(par_fill);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__15_fit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_size = python_pars[1];
PyObject *par_method = python_pars[2];
PyObject *par_bleed = python_pars[3];
PyObject *par_centering = python_pars[4];
PyObject *var_centering_x = NULL;
PyObject *var_centering_y = NULL;
PyObject *var_bleed_pixels = NULL;
PyObject *var_live_size = NULL;
PyObject *var_live_size_ratio = NULL;
PyObject *var_output_ratio = NULL;
PyObject *var_crop_width = NULL;
PyObject *var_crop_height = NULL;
PyObject *var_crop_left = NULL;
PyObject *var_crop_top = NULL;
PyObject *var_crop = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
PyObject *tmp_comparison_chain_3__comparison_result = NULL;
PyObject *tmp_comparison_chain_3__operand_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__15_fit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__15_fit = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__15_fit)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__15_fit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__15_fit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__15_fit = MAKE_FUNCTION_FRAME(tstate, code_objects_f8db97c9e86646d6134ed66c11cf5384, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__15_fit->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__15_fit = cache_frame_frame_PIL$ImageOps$$$function__15_fit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__15_fit);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__15_fit) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_centering);
tmp_iter_arg_1 = par_centering;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_2;
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 558;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 558;
type_description_1 = "oooooooooooooooo";
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



exception_lineno = 558;
type_description_1 = "oooooooooooooooo";
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
    PyObject *old = var_centering_x;
    var_centering_x = tmp_assign_source_4;
    Py_INCREF(var_centering_x);
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
    PyObject *old = var_centering_y;
    var_centering_y = tmp_assign_source_5;
    Py_INCREF(var_centering_y);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(var_centering_x);
tmp_assign_source_6 = var_centering_x;
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_6;
    Py_INCREF(tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_float_0_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_7 = RICH_COMPARE_LE_OBJECT_FLOAT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_7;
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


exception_lineno = 560;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
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
goto try_return_handler_4;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = const_float_1_0;
tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


exception_lineno = 560;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_float_0_5;
{
    PyObject *old = var_centering_x;
    assert(old != NULL);
    var_centering_x = tmp_assign_source_8;
    Py_INCREF(var_centering_x);
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(var_centering_y);
tmp_assign_source_9 = var_centering_y;
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_9;
    Py_INCREF(tmp_comparison_chain_2__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = const_float_0_0;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_10 = RICH_COMPARE_LE_OBJECT_FLOAT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_3);
goto try_return_handler_5;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = const_float_1_0;
tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
}
goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
Py_DECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
Py_DECREF(tmp_comparison_chain_2__operand_2);
tmp_comparison_chain_2__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_2__comparison_result);
tmp_comparison_chain_2__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooooooooooo";
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
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_float_0_5;
{
    PyObject *old = var_centering_y;
    assert(old != NULL);
    var_centering_y = tmp_assign_source_11;
    Py_INCREF(var_centering_y);
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_5;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(par_bleed);
tmp_assign_source_12 = par_bleed;
{
    PyObject *old = tmp_comparison_chain_3__operand_2;
    tmp_comparison_chain_3__operand_2 = tmp_assign_source_12;
    Py_INCREF(tmp_comparison_chain_3__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = const_float_0_0;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_3__operand_2;
tmp_assign_source_13 = RICH_COMPARE_LE_OBJECT_FLOAT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_comparison_chain_3__comparison_result;
    tmp_comparison_chain_3__comparison_result = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_3__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_3__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_6;
branch_no_6:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_3__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_float_0_5;
tmp_operand_value_5 = RICH_COMPARE_LT_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "oooooooooooooooo";
    goto try_except_handler_6;
}
goto try_return_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
Py_DECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
Py_DECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
Py_DECREF(tmp_comparison_chain_3__operand_2);
tmp_comparison_chain_3__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_3__comparison_result);
tmp_comparison_chain_3__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = const_float_0_0;
{
    PyObject *old = par_bleed;
    assert(old != NULL);
    par_bleed = tmp_assign_source_14;
    Py_INCREF(par_bleed);
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_element_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
if (par_bleed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bleed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_left_1 = par_bleed;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM(tmp_assign_source_15, 0, tmp_tuple_element_1);
if (par_bleed == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bleed);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}

tmp_mult_expr_left_2 = par_bleed;
CHECK_OBJECT(par_image);
tmp_expression_value_4 = par_image;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_size);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_15, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_15);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_bleed_pixels;
    var_bleed_pixels = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_image);
tmp_expression_value_6 = par_image;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_size);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bleed_pixels);
tmp_expression_value_7 = var_bleed_pixels;
tmp_subscript_value_4 = const_int_0;
tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_4, 0);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 575;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_3 = mod_consts.const_int_pos_2;
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 575;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_image);
tmp_expression_value_9 = par_image;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_size);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_subscript_value_5 = const_int_pos_1;
tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_5, 1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(var_bleed_pixels);
tmp_expression_value_10 = var_bleed_pixels;
tmp_subscript_value_6 = const_int_pos_1;
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_6, 1);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 576;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_mult_expr_right_4 = mod_consts.const_int_pos_2;
tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 576;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_16, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_16);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
{
    PyObject *old = var_live_size;
    var_live_size = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_8;
CHECK_OBJECT(var_live_size);
tmp_expression_value_11 = var_live_size;
tmp_subscript_value_7 = const_int_0;
tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_7, 0);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_live_size);
tmp_expression_value_12 = var_live_size;
tmp_subscript_value_8 = const_int_pos_1;
tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_8, 1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 580;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_live_size_ratio;
    var_live_size_ratio = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_10;
CHECK_OBJECT(par_size);
tmp_expression_value_13 = par_size;
tmp_subscript_value_9 = const_int_0;
tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_9, 0);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_expression_value_14 = par_size;
tmp_subscript_value_10 = const_int_pos_1;
tmp_truediv_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_14, tmp_subscript_value_10, 1);
if (tmp_truediv_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_2);

exception_lineno = 583;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
CHECK_OBJECT(tmp_truediv_expr_right_2);
Py_DECREF(tmp_truediv_expr_right_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_output_ratio;
    var_output_ratio = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_live_size_ratio);
tmp_cmp_expr_left_7 = var_live_size_ratio;
CHECK_OBJECT(var_output_ratio);
tmp_cmp_expr_right_7 = var_output_ratio;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_11;
CHECK_OBJECT(var_live_size);
tmp_expression_value_15 = var_live_size;
tmp_subscript_value_11 = const_int_0;
tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_11, 0);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_width;
    var_crop_width = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_12;
CHECK_OBJECT(var_live_size);
tmp_expression_value_16 = var_live_size;
tmp_subscript_value_12 = const_int_pos_1;
tmp_assign_source_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_12, 1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_height;
    var_crop_height = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_live_size_ratio);
tmp_cmp_expr_left_8 = var_live_size_ratio;
CHECK_OBJECT(var_output_ratio);
tmp_cmp_expr_right_8 = var_output_ratio;
tmp_condition_result_8 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_13;
CHECK_OBJECT(var_output_ratio);
tmp_mult_expr_left_5 = var_output_ratio;
CHECK_OBJECT(var_live_size);
tmp_expression_value_17 = var_live_size;
tmp_subscript_value_13 = const_int_pos_1;
tmp_mult_expr_right_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_13, 1);
if (tmp_mult_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_width;
    var_crop_width = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_14;
CHECK_OBJECT(var_live_size);
tmp_expression_value_18 = var_live_size;
tmp_subscript_value_14 = const_int_pos_1;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_14, 1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_height;
    var_crop_height = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_15;
CHECK_OBJECT(var_live_size);
tmp_expression_value_19 = var_live_size;
tmp_subscript_value_15 = const_int_0;
tmp_assign_source_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_15, 0);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_width;
    var_crop_width = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_16;
CHECK_OBJECT(var_live_size);
tmp_expression_value_20 = var_live_size;
tmp_subscript_value_16 = const_int_0;
tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_16, 0);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_output_ratio);
tmp_truediv_expr_right_3 = var_output_ratio;
tmp_assign_source_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_height;
    var_crop_height = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
branch_end_8:;
branch_end_7:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_17;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_18;
CHECK_OBJECT(var_bleed_pixels);
tmp_expression_value_21 = var_bleed_pixels;
tmp_subscript_value_17 = const_int_0;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_17, 0);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_live_size);
tmp_expression_value_22 = var_live_size;
tmp_subscript_value_18 = const_int_0;
tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_18, 0);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crop_width);
tmp_sub_expr_right_3 = var_crop_width;
tmp_mult_expr_left_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_centering_x == NULL) {
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_centering_x);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_6 = var_centering_x;
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_left;
    var_crop_left = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_19;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_20;
CHECK_OBJECT(var_bleed_pixels);
tmp_expression_value_23 = var_bleed_pixels;
tmp_subscript_value_19 = const_int_pos_1;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_19, 1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_live_size);
tmp_expression_value_24 = var_live_size;
tmp_subscript_value_20 = const_int_pos_1;
tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_20, 1);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_crop_height);
tmp_sub_expr_right_4 = var_crop_height;
tmp_mult_expr_left_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
if (tmp_mult_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_centering_y == NULL) {
Py_DECREF(tmp_add_expr_left_2);
Py_DECREF(tmp_mult_expr_left_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_centering_y);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_7 = var_centering_y;
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_left_7);
Py_DECREF(tmp_mult_expr_left_7);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_crop_top;
    var_crop_top = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_crop_left);
tmp_tuple_element_3 = var_crop_left;
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_crop_top);
tmp_tuple_element_3 = var_crop_top;
PyTuple_SET_ITEM0(tmp_assign_source_27, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_crop_left);
tmp_add_expr_left_3 = var_crop_left;
CHECK_OBJECT(var_crop_width);
tmp_add_expr_right_3 = var_crop_width;
tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_27, 2, tmp_tuple_element_3);
CHECK_OBJECT(var_crop_top);
tmp_add_expr_left_4 = var_crop_top;
CHECK_OBJECT(var_crop_height);
tmp_add_expr_right_4 = var_crop_height;
tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_27, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_27);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
{
    PyObject *old = var_crop;
    var_crop = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_25;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(par_image);
tmp_expression_value_25 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_resize);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "oooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_size);
tmp_kw_call_arg_value_0_1 = par_size;
CHECK_OBJECT(par_method);
tmp_kw_call_arg_value_1_1 = par_method;
CHECK_OBJECT(var_crop);
tmp_kw_call_dict_value_0_1 = var_crop;
frame_frame_PIL$ImageOps$$$function__15_fit->m_frame.f_lineno = 606;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_box_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "oooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__15_fit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__15_fit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__15_fit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__15_fit,
    type_description_1,
    par_image,
    par_size,
    par_method,
    par_bleed,
    par_centering,
    var_centering_x,
    var_centering_y,
    var_bleed_pixels,
    var_live_size,
    var_live_size_ratio,
    var_output_ratio,
    var_crop_width,
    var_crop_height,
    var_crop_left,
    var_crop_top,
    var_crop
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__15_fit == cache_frame_frame_PIL$ImageOps$$$function__15_fit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__15_fit);
    cache_frame_frame_PIL$ImageOps$$$function__15_fit = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__15_fit);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_bleed);
par_bleed = NULL;
Py_XDECREF(var_centering_x);
var_centering_x = NULL;
Py_XDECREF(var_centering_y);
var_centering_y = NULL;
CHECK_OBJECT(var_bleed_pixels);
CHECK_OBJECT(var_bleed_pixels);
Py_DECREF(var_bleed_pixels);
var_bleed_pixels = NULL;
CHECK_OBJECT(var_live_size);
CHECK_OBJECT(var_live_size);
Py_DECREF(var_live_size);
var_live_size = NULL;
CHECK_OBJECT(var_live_size_ratio);
CHECK_OBJECT(var_live_size_ratio);
Py_DECREF(var_live_size_ratio);
var_live_size_ratio = NULL;
CHECK_OBJECT(var_output_ratio);
CHECK_OBJECT(var_output_ratio);
Py_DECREF(var_output_ratio);
var_output_ratio = NULL;
CHECK_OBJECT(var_crop_width);
CHECK_OBJECT(var_crop_width);
Py_DECREF(var_crop_width);
var_crop_width = NULL;
CHECK_OBJECT(var_crop_height);
CHECK_OBJECT(var_crop_height);
Py_DECREF(var_crop_height);
var_crop_height = NULL;
CHECK_OBJECT(var_crop_left);
CHECK_OBJECT(var_crop_left);
Py_DECREF(var_crop_left);
var_crop_left = NULL;
CHECK_OBJECT(var_crop_top);
CHECK_OBJECT(var_crop_top);
Py_DECREF(var_crop_top);
var_crop_top = NULL;
CHECK_OBJECT(var_crop);
CHECK_OBJECT(var_crop);
Py_DECREF(var_crop);
var_crop = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_bleed);
par_bleed = NULL;
Py_XDECREF(var_centering_x);
var_centering_x = NULL;
Py_XDECREF(var_centering_y);
var_centering_y = NULL;
Py_XDECREF(var_bleed_pixels);
var_bleed_pixels = NULL;
Py_XDECREF(var_live_size);
var_live_size = NULL;
Py_XDECREF(var_live_size_ratio);
var_live_size_ratio = NULL;
Py_XDECREF(var_output_ratio);
var_output_ratio = NULL;
Py_XDECREF(var_crop_width);
var_crop_width = NULL;
Py_XDECREF(var_crop_height);
var_crop_height = NULL;
Py_XDECREF(var_crop_left);
var_crop_left = NULL;
Py_XDECREF(var_crop_top);
var_crop_top = NULL;
Py_XDECREF(var_crop);
var_crop = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_centering);
Py_DECREF(par_centering);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_centering);
Py_DECREF(par_centering);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__16_flip(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__16_flip;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__16_flip = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__16_flip)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__16_flip);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__16_flip == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__16_flip = MAKE_FUNCTION_FRAME(tstate, code_objects_190c5334594d9f87623b9f22d5890b9f, module_PIL$ImageOps, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__16_flip->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__16_flip = cache_frame_frame_PIL$ImageOps$$$function__16_flip;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__16_flip);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__16_flip) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_transpose);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 616;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 616;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FLIP_TOP_BOTTOM);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 616;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__16_flip->m_frame.f_lineno = 616;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__16_flip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__16_flip->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__16_flip, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__16_flip,
    type_description_1,
    par_image
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__16_flip == cache_frame_frame_PIL$ImageOps$$$function__16_flip) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__16_flip);
    cache_frame_frame_PIL$ImageOps$$$function__16_flip = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__16_flip);

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


static PyObject *impl_PIL$ImageOps$$$function__17_grayscale(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__17_grayscale;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__17_grayscale = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__17_grayscale)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__17_grayscale);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__17_grayscale == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__17_grayscale = MAKE_FUNCTION_FRAME(tstate, code_objects_bf33e1b8abc3934d693b732732b0ebe4, module_PIL$ImageOps, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__17_grayscale->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__17_grayscale = cache_frame_frame_PIL$ImageOps$$$function__17_grayscale;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__17_grayscale);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__17_grayscale) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageOps$$$function__17_grayscale->m_frame.f_lineno = 626;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_L_tuple, 0)
);

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__17_grayscale, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__17_grayscale->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__17_grayscale, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__17_grayscale,
    type_description_1,
    par_image
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__17_grayscale == cache_frame_frame_PIL$ImageOps$$$function__17_grayscale) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__17_grayscale);
    cache_frame_frame_PIL$ImageOps$$$function__17_grayscale = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__17_grayscale);

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


static PyObject *impl_PIL$ImageOps$$$function__18_invert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *var_lut = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__18_invert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__18_invert = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = LIST_COPY(tstate, mod_consts.const_list_170c0bc0f993a1733d8778c17d663abd_list);
{
    PyObject *old = var_lut;
    var_lut = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__18_invert)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__18_invert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__18_invert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__18_invert = MAKE_FUNCTION_FRAME(tstate, code_objects_e6826b078c1341687af47c96f52a14fb, module_PIL$ImageOps, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__18_invert->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__18_invert = cache_frame_frame_PIL$ImageOps$$$function__18_invert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__18_invert);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__18_invert) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
CHECK_OBJECT(var_lut);
tmp_args_element_value_1 = var_lut;
frame_frame_PIL$ImageOps$$$function__18_invert->m_frame.f_lineno = 637;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_point, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_2 = par_image;
CHECK_OBJECT(var_lut);
tmp_args_element_value_3 = var_lut;
frame_frame_PIL$ImageOps$$$function__18_invert->m_frame.f_lineno = 637;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__18_invert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__18_invert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__18_invert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__18_invert,
    type_description_1,
    par_image,
    var_lut
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__18_invert == cache_frame_frame_PIL$ImageOps$$$function__18_invert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__18_invert);
    cache_frame_frame_PIL$ImageOps$$$function__18_invert = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__18_invert);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_lut);
CHECK_OBJECT(var_lut);
Py_DECREF(var_lut);
var_lut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_lut);
CHECK_OBJECT(var_lut);
Py_DECREF(var_lut);
var_lut = NULL;
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


static PyObject *impl_PIL$ImageOps$$$function__19_mirror(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__19_mirror;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__19_mirror = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__19_mirror)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__19_mirror);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__19_mirror == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__19_mirror = MAKE_FUNCTION_FRAME(tstate, code_objects_1de51f40a2f7558a01aa67c2c07432d9, module_PIL$ImageOps, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__19_mirror->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__19_mirror = cache_frame_frame_PIL$ImageOps$$$function__19_mirror;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__19_mirror);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__19_mirror) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_transpose);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 647;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 647;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_FLIP_LEFT_RIGHT);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 647;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__19_mirror->m_frame.f_lineno = 647;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__19_mirror, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__19_mirror->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__19_mirror, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__19_mirror,
    type_description_1,
    par_image
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__19_mirror == cache_frame_frame_PIL$ImageOps$$$function__19_mirror) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__19_mirror);
    cache_frame_frame_PIL$ImageOps$$$function__19_mirror = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__19_mirror);

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


static PyObject *impl_PIL$ImageOps$$$function__20_posterize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_bits = python_pars[1];
PyObject *var_mask = NULL;
PyObject *var_lut = NULL;
PyObject *outline_0_var_i = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__20_posterize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__20_posterize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__20_posterize)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__20_posterize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__20_posterize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__20_posterize = MAKE_FUNCTION_FRAME(tstate, code_objects_f5592b36c74116160416104617ea361d, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__20_posterize->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__20_posterize = cache_frame_frame_PIL$ImageOps$$$function__20_posterize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__20_posterize);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__20_posterize) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_pow_expr_left_1 = mod_consts.const_int_pos_2;
tmp_sub_expr_left_2 = mod_consts.const_int_pos_8;
CHECK_OBJECT(par_bits);
tmp_sub_expr_right_2 = par_bits;
tmp_pow_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_pow_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = BINARY_OPERATION_POW_OBJECT_LONG_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_right_1);
Py_DECREF(tmp_pow_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_operand_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 658;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mask;
    var_mask = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_256;
tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_3 == NULL));
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 659;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_i;
    outline_0_var_i = tmp_assign_source_6;
    Py_INCREF(outline_0_var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_i);
tmp_bitand_expr_left_1 = outline_0_var_i;
if (var_mask == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mask);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 659;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_bitand_expr_right_1 = var_mask;
tmp_append_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_2 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_2);
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
Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_i);
outline_0_var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 659;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_lut;
    var_lut = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 660;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_1 = par_image;
CHECK_OBJECT(var_lut);
tmp_args_element_value_2 = var_lut;
frame_frame_PIL$ImageOps$$$function__20_posterize->m_frame.f_lineno = 660;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__20_posterize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__20_posterize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__20_posterize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__20_posterize,
    type_description_1,
    par_image,
    par_bits,
    var_mask,
    var_lut
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__20_posterize == cache_frame_frame_PIL$ImageOps$$$function__20_posterize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__20_posterize);
    cache_frame_frame_PIL$ImageOps$$$function__20_posterize = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__20_posterize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_lut);
CHECK_OBJECT(var_lut);
Py_DECREF(var_lut);
var_lut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mask);
var_mask = NULL;
Py_XDECREF(var_lut);
var_lut = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_bits);
Py_DECREF(par_bits);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_bits);
Py_DECREF(par_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__21_solarize(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_threshold = python_pars[1];
PyObject *var_lut = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__21_solarize;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__21_solarize = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_lut;
    var_lut = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_256;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__21_solarize)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__21_solarize);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__21_solarize == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__21_solarize = MAKE_FUNCTION_FRAME(tstate, code_objects_42a5d55fd2dae474f6651f0ca8fea67a, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__21_solarize->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__21_solarize = cache_frame_frame_PIL$ImageOps$$$function__21_solarize;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__21_solarize);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__21_solarize) == 2);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 672;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_4;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_i);
tmp_cmp_expr_left_1 = var_i;
CHECK_OBJECT(par_threshold);
tmp_cmp_expr_right_1 = par_threshold;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 674;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_lut;
CHECK_OBJECT(var_i);
tmp_item_value_1 = var_i;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 676;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_lut;
tmp_sub_expr_left_1 = mod_consts.const_int_pos_255;
CHECK_OBJECT(var_i);
tmp_sub_expr_right_1 = var_i;
tmp_item_value_2 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 676;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_end_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$ImageOps$_lut(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__lut);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 677;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_args_element_value_1 = par_image;
if (var_lut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 677;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = var_lut;
frame_frame_PIL$ImageOps$$$function__21_solarize->m_frame.f_lineno = 677;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__21_solarize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__21_solarize->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__21_solarize, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__21_solarize,
    type_description_1,
    par_image,
    par_threshold,
    var_lut,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__21_solarize == cache_frame_frame_PIL$ImageOps$$$function__21_solarize) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__21_solarize);
    cache_frame_frame_PIL$ImageOps$$$function__21_solarize = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__21_solarize);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_lut);
var_lut = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_lut);
var_lut = NULL;
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
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageOps$$$function__24_exif_transpose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_image = python_pars[0];
PyObject *par_in_place = python_pars[1];
PyObject *var_image_exif = NULL;
PyObject *var_orientation = NULL;
PyObject *var_method = NULL;
PyObject *var_transposed_image = NULL;
PyObject *var_exif_image = NULL;
PyObject *var_exif = NULL;
PyObject *var_key = NULL;
struct Nuitka_CellObject *var_pattern = Nuitka_Cell_NewEmpty();
PyObject *var_value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$function__24_exif_transpose;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose = MAKE_FUNCTION_FRAME(tstate, code_objects_8a18c22d466fc1fc8b281944839d1883, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_type_description == NULL);
frame_frame_PIL$ImageOps$$$function__24_exif_transpose = cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$function__24_exif_transpose);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$function__24_exif_transpose) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 702;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_load);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 702;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_image);
tmp_called_instance_2 = par_image;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 703;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getexif);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 703;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image_exif;
    var_image_exif = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_image_exif);
tmp_expression_value_1 = var_image_exif;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_PIL$ImageOps$ExifTags(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 704;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Base);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 704;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 704;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = const_int_pos_1;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 704;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 704;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_orientation;
    var_orientation = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_key_value_1;
tmp_dict_key_1 = mod_consts.const_int_pos_2;
tmp_expression_value_5 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 706;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FLIP_LEFT_RIGHT);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 706;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_dict_arg_value_1 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_3;
tmp_expression_value_7 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 707;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 707;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_ROTATE_180);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 707;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_4;
tmp_expression_value_9 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_FLIP_TOP_BOTTOM);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_5;
tmp_expression_value_11 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_TRANSPOSE);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_6;
tmp_expression_value_13 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 710;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_ROTATE_270);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_7;
tmp_expression_value_15 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 711;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_TRANSVERSE);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_8;
tmp_expression_value_17 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 712;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Transpose);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_ROTATE_90);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooco";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_dict_arg_value_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_dict_arg_value_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(var_orientation);
tmp_key_value_1 = var_orientation;
tmp_assign_source_3 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_3 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_3 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_3);
}
CHECK_OBJECT(tmp_dict_arg_value_1);
Py_DECREF(tmp_dict_arg_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_method;
    var_method = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_method);
tmp_cmp_expr_left_1 = var_method;
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
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_in_place);
tmp_truth_name_1 = CHECK_IF_TRUE(par_in_place);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "oooooooooco";
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_3;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_image);
tmp_expression_value_18 = par_image;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_im);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_method);
tmp_args_element_value_3 = var_method;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 716;
tmp_ass_attr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_transpose, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_ass_attr_target_1 = par_image;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_im, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 716;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_image);
tmp_expression_value_20 = par_image;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_im);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_image);
tmp_ass_attr_target_2 = par_image;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__size, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_image);
tmp_called_instance_4 = par_image;
CHECK_OBJECT(var_method);
tmp_args_element_value_4 = var_method;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 719;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_transpose, tmp_args_element_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_transposed_image;
    var_transposed_image = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_assign_source_5;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_in_place);
tmp_truth_name_2 = CHECK_IF_TRUE(par_in_place);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_image);
tmp_assign_source_5 = par_image;
goto condexpr_end_1;
condexpr_false_1:;
if (var_transposed_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transposed_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 720;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}

tmp_assign_source_5 = var_transposed_image;
condexpr_end_1:;
{
    PyObject *old = var_exif_image;
    var_exif_image = tmp_assign_source_5;
    Py_INCREF(var_exif_image);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_exif_image);
tmp_called_instance_5 = var_exif_image;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 722;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getexif);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    var_exif = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_PIL$ImageOps$ExifTags(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 723;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_Base);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_exif);
tmp_cmp_expr_right_2 = var_exif;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 723;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(var_exif);
tmp_delsubscr_target_1 = var_exif;
tmp_expression_value_24 = module_var_accessor_PIL$ImageOps$ExifTags(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 724;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_Base);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_delsubscr_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
CHECK_OBJECT(tmp_delsubscr_subscript_1);
Py_DECREF(tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_25;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_exif;
CHECK_OBJECT(var_exif_image);
tmp_expression_value_25 = var_exif_image;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_6;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_26;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_exif);
tmp_called_instance_6 = var_exif;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 726;
tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_tobytes);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_exif_image);
tmp_expression_value_26 = var_exif_image;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 726;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_exif;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_27;
tmp_cmp_expr_left_4 = mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64;
CHECK_OBJECT(var_exif_image);
tmp_expression_value_27 = var_exif_image;
tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 727;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_instance_7;
PyObject *tmp_called_instance_8;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_28;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_exif);
tmp_called_instance_8 = var_exif;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 728;
tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_tobytes);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 728;
tmp_ass_subvalue_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_hex);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_exif_image);
tmp_expression_value_28 = var_exif_image;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 728;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_digest_9fd4e7fbf92f7a9e52dd33e0508d6a64;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_digest_400b21f081cba3035ed7bcb3dc9bfb6e_str_plain_xmp_tuple;
tmp_assign_source_7 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_7 == NULL));
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooco";
exception_lineno = 729;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_9 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_9;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_5 = var_key;
if (var_exif_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 730;
type_description_1 = "oooooooooco";
    goto try_except_handler_2;
}

tmp_expression_value_29 = var_exif_image;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "oooooooooco";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "oooooooooco";
    goto try_except_handler_2;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_tuple_48279fa6426033a684ab54f6a54a2d69_tuple;
tmp_assign_source_10 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_10 == NULL));
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooco";
exception_lineno = 731;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_12 = tmp_for_loop_2__iter_value;
{
    PyObject *old = Nuitka_Cell_GET(var_pattern);
    Nuitka_Cell_SET(var_pattern, tmp_assign_source_12);
    Py_INCREF(tmp_assign_source_12);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_1;
if (var_exif_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 735;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}

tmp_expression_value_31 = var_exif_image;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_info);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
if (var_key == NULL) {
Py_DECREF(tmp_expression_value_30);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 735;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}

tmp_subscript_value_1 = var_key;
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_value);
tmp_isinstance_inst_1 = var_value;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 736;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_9 = module_var_accessor_PIL$ImageOps$re(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 737;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_pattern));
tmp_args_element_value_5 = Nuitka_Cell_GET(var_pattern);
tmp_args_element_value_6 = const_str_empty;
CHECK_OBJECT(var_value);
tmp_args_element_value_7 = var_value;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 737;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_14 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_9,
        mod_consts.const_str_plain_sub,
        call_args
    );
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_14;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_value);
tmp_isinstance_inst_2 = var_value;
tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 738;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_tuple_arg_1;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_value);
tmp_iter_arg_3 = var_value;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_pattern;
Py_INCREF(tmp_closure_1[1]);
tmp_tuple_arg_1 = MAKE_GENERATOR_PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_assign_source_15 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 739;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_15;
    Py_DECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_32 = module_var_accessor_PIL$ImageOps$re(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 743;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_sub);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_pattern));
tmp_expression_value_33 = Nuitka_Cell_GET(var_pattern);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_encode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 743;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 743;
tmp_args_element_value_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 743;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
tmp_args_element_value_9 = const_bytes_empty;
CHECK_OBJECT(var_value);
tmp_args_element_value_10 = var_value;
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 743;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
{
    PyObject *old = var_value;
    assert(old != NULL);
    var_value = tmp_assign_source_17;
    Py_DECREF(old);
}

}
branch_end_8:;
branch_end_7:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_34;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_value);
tmp_ass_subvalue_3 = var_value;
if (var_exif_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 744;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}

tmp_expression_value_34 = var_exif_image;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
if (var_key == NULL) {
Py_DECREF(tmp_ass_subscribed_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 744;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}

tmp_ass_subscript_3 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
type_description_1 = "oooooooooco";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "oooooooooco";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_3:;
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_in_place);
tmp_operand_value_1 = par_in_place;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 745;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
if (var_transposed_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transposed_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 746;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}

tmp_return_value = var_transposed_image;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_in_place);
tmp_operand_value_2 = par_in_place;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(par_image);
tmp_expression_value_35 = par_image;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_copy);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame.f_lineno = 748;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 748;
type_description_1 = "oooooooooco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_10:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$function__24_exif_transpose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$function__24_exif_transpose->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$function__24_exif_transpose, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$function__24_exif_transpose,
    type_description_1,
    par_image,
    par_in_place,
    var_image_exif,
    var_orientation,
    var_method,
    var_transposed_image,
    var_exif_image,
    var_exif,
    var_key,
    var_pattern,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageOps$$$function__24_exif_transpose == cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose);
    cache_frame_frame_PIL$ImageOps$$$function__24_exif_transpose = NULL;
}

assertFrameObject(frame_frame_PIL$ImageOps$$$function__24_exif_transpose);

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
CHECK_OBJECT(var_image_exif);
CHECK_OBJECT(var_image_exif);
Py_DECREF(var_image_exif);
var_image_exif = NULL;
CHECK_OBJECT(var_orientation);
CHECK_OBJECT(var_orientation);
Py_DECREF(var_orientation);
var_orientation = NULL;
CHECK_OBJECT(var_method);
CHECK_OBJECT(var_method);
Py_DECREF(var_method);
var_method = NULL;
Py_XDECREF(var_transposed_image);
var_transposed_image = NULL;
Py_XDECREF(var_exif_image);
var_exif_image = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_pattern);
CHECK_OBJECT(var_pattern);
Py_DECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_image_exif);
var_image_exif = NULL;
Py_XDECREF(var_orientation);
var_orientation = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_transposed_image);
var_transposed_image = NULL;
Py_XDECREF(var_exif_image);
var_exif_image = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_key);
var_key = NULL;
CHECK_OBJECT(var_pattern);
CHECK_OBJECT(var_pattern);
Py_DECREF(var_pattern);
var_pattern = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_in_place);
Py_DECREF(par_in_place);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
CHECK_OBJECT(par_in_place);
Py_DECREF(par_in_place);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_locals {
PyObject *var_v;
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

static PyObject *PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_v = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1775b4e7376d834d815ef273703ad95b, module_PIL$ImageOps, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 739;
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
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_2 = module_var_accessor_PIL$ImageOps$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_sub);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_pattern);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 740;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_args_element_value_2 = const_bytes_empty;
CHECK_OBJECT(generator_heap->var_v);
tmp_args_element_value_3 = generator_heap->var_v;
generator->m_frame->m_frame.f_lineno = 740;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 740;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 739;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_v,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_context,
        module_PIL$ImageOps,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_678f4b11f72301dfb1cdc8179025facb,
#endif
        code_objects_1775b4e7376d834d815ef273703ad95b,
        closure,
        2,
#if 1
        sizeof(struct PIL$ImageOps$$$function__24_exif_transpose$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__10_scale(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__10_scale,
        mod_consts.const_str_plain_scale,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_05cb445af7b2fcd5ae2e3e05cbec2b14,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_37d895330350d809c5330d8d9f88323c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__11_getmesh(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_getmesh,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1531781be5a7b1ead687087a53a749f3,
#endif
        code_objects_195d813c60c4cd30bb816b28eaf3c790,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__12_deform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__12_deform,
        mod_consts.const_str_plain_deform,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d69f622fb95c27ca1f66eb42b275dd4a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_32a4bb90af7c6047e049f0d71161347c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__13_equalize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__13_equalize,
        mod_consts.const_str_plain_equalize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1de195970c16e76a0ada4d0126206952,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_b66496e8feaccb547f510d315199ba76,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__14_expand(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__14_expand,
        mod_consts.const_str_plain_expand,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cceca6ce9bde2adbceb22f93dbc6ca1f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_338e8f4d2b53b4eeb2263cc69eb01c2c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__15_fit(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__15_fit,
        mod_consts.const_str_plain_fit,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f8db97c9e86646d6134ed66c11cf5384,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_a46ec0f30253fd5dfe4d53ff71a62f6a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__16_flip(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__16_flip,
        mod_consts.const_str_plain_flip,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_190c5334594d9f87623b9f22d5890b9f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_712596ff4d2d572c94f0d6e4d255656c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__17_grayscale(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__17_grayscale,
        mod_consts.const_str_plain_grayscale,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf33e1b8abc3934d693b732732b0ebe4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_8d03ceab54e428493531a2032f386980,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__18_invert(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__18_invert,
        mod_consts.const_str_plain_invert,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e6826b078c1341687af47c96f52a14fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_bf9413bf5a2fd3b003de70ef747b88b1,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__19_mirror(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__19_mirror,
        mod_consts.const_str_plain_mirror,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1de51f40a2f7558a01aa67c2c07432d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_e3c9704fda121c93bff79864bb1a57e9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__1__border(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__1__border,
        mod_consts.const_str_plain__border,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ecbbddbcd6ae95aaec87db649329fbe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__20_posterize(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__20_posterize,
        mod_consts.const_str_plain_posterize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f5592b36c74116160416104617ea361d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_04e4b8dfbaa4216a57e9c172ac110f41,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__21_solarize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__21_solarize,
        mod_consts.const_str_plain_solarize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_42a5d55fd2dae474f6651f0ca8fea67a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_fd1b6221dfb4e63c3934fc71004d7900,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__22_exif_transpose(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_exif_transpose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9052105a35fc89f36b98aa98fed280c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__23_exif_transpose(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_exif_transpose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cd116f9ea4c7e08a0a98faf3b432a363,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__24_exif_transpose(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__24_exif_transpose,
        mod_consts.const_str_plain_exif_transpose,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8a18c22d466fc1fc8b281944839d1883,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_e31745474ebcf0114e568b4f61ca7428,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__2__color(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__2__color,
        mod_consts.const_str_plain__color,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0b0ea5bb5ea82cbd55017d9717866eb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__3__lut(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__3__lut,
        mod_consts.const_str_plain__lut,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_46b3503c81d27bb76dd595fc8d738bb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__4_autocontrast(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__4_autocontrast,
        mod_consts.const_str_plain_autocontrast,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1188aec7da4d49a44a860338b2e59f89,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_48bd9d5e94145d5dd81a74137237fc11,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__5_colorize(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__5_colorize,
        mod_consts.const_str_plain_colorize,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d00557bdbbbc42253ff4bb265181e390,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_fc479f134b75772dcc1882a17a0d62c4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__6_contain(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__6_contain,
        mod_consts.const_str_plain_contain,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_64b9f54ce7e56a46a92c03b4c2f985fa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_d5bd363a00c606d863baa321bed96191,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__7_cover(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__7_cover,
        mod_consts.const_str_plain_cover,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_332ca72177f4eb6f8937d263466a4e87,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_db9b1b49db3f78c85b8f6d5219ad09c6,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__8_pad(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__8_pad,
        mod_consts.const_str_plain_pad,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1b07967bd8469baca9437e3906cba519,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_12ad32218e7d38713dc409220242d564,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageOps$$$function__9_crop(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageOps$$$function__9_crop,
        mod_consts.const_str_plain_crop,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c51a4b72dd8753b2c225eb85e62c71d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageOps,
        mod_consts.const_str_digest_f4361b21fab231aa414ae827b9c9b523,
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

static function_impl_code const function_table_PIL$ImageOps[] = {
impl_PIL$ImageOps$$$function__1__border,
impl_PIL$ImageOps$$$function__2__color,
impl_PIL$ImageOps$$$function__3__lut,
impl_PIL$ImageOps$$$function__4_autocontrast,
impl_PIL$ImageOps$$$function__5_colorize,
impl_PIL$ImageOps$$$function__6_contain,
impl_PIL$ImageOps$$$function__7_cover,
impl_PIL$ImageOps$$$function__8_pad,
impl_PIL$ImageOps$$$function__9_crop,
impl_PIL$ImageOps$$$function__10_scale,
impl_PIL$ImageOps$$$function__12_deform,
impl_PIL$ImageOps$$$function__13_equalize,
impl_PIL$ImageOps$$$function__14_expand,
impl_PIL$ImageOps$$$function__15_fit,
impl_PIL$ImageOps$$$function__16_flip,
impl_PIL$ImageOps$$$function__17_grayscale,
impl_PIL$ImageOps$$$function__18_invert,
impl_PIL$ImageOps$$$function__19_mirror,
impl_PIL$ImageOps$$$function__20_posterize,
impl_PIL$ImageOps$$$function__21_solarize,
impl_PIL$ImageOps$$$function__24_exif_transpose,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageOps);
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
        module_PIL$ImageOps,
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
        function_table_PIL$ImageOps,
        sizeof(function_table_PIL$ImageOps) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageOps";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageOps(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageOps");

    // Store the module for future use.
    module_PIL$ImageOps = module;

    moduledict_PIL$ImageOps = MODULE_DICT(module_PIL$ImageOps);

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
        PRINT_STRING("PIL$ImageOps: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageOps: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageOps: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageOps" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageOps\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageOps,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageOps,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageOps,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageOps,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageOps,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageOps);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageOps);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps;
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
PyObject *locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageOps = MAKE_MODULE_FRAME(code_objects_4da413bf7af2164e816d4e973e030301, module_PIL$ImageOps);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps);
assert(Py_REFCNT(frame_frame_PIL$ImageOps) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageOps$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageOps$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_functools, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageOps;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageOps->m_frame.f_lineno = 22;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_operator, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageOps;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_PIL$ImageOps->m_frame.f_lineno = 23;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$ImageOps;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Sequence_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_PIL$ImageOps->m_frame.f_lineno = 24;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Sequence);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = const_str_empty;
tmp_globals_arg_value_4 = (PyObject *)moduledict_PIL$ImageOps;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ExifTags_str_plain_Image_str_plain_ImagePalette_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_PIL$ImageOps->m_frame.f_lineno = 27;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_ExifTags,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ExifTags);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_PIL$ImageOps,
        mod_consts.const_str_plain_ImagePalette,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ImagePalette);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_ImagePalette, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b67f87a08a69039f44c1b91988e0565b);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$ImageOps$$$function__1__border(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__border, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_858d20354f4e928d9ef6e4616b52df77);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$ImageOps$$$function__2__color(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__color, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f27765acc2293bb7797573d8b3cd3e2c);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$ImageOps$$$function__3__lut(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain__lut, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
tmp_defaults_1 = mod_consts.const_tuple_int_0_none_none_false_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_14dd44032ebfb8016147fc67d40d7950);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_22 = MAKE_FUNCTION_PIL$ImageOps$$$function__4_autocontrast(tstate, tmp_defaults_1, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_autocontrast, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_5;
tmp_defaults_2 = mod_consts.const_tuple_none_int_0_int_pos_255_int_pos_127_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_c003cbbb08a2290a167f1554500acc39);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageOps$$$function__5_colorize(tstate, tmp_defaults_2, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_colorize, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_annotations_6;
tmp_expression_value_2 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto frame_exception_exit_1;
}
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_1);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861);

tmp_assign_source_24 = MAKE_FUNCTION_PIL$ImageOps$$$function__6_contain(tstate, tmp_defaults_3, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_contain, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_annotations_7;
tmp_expression_value_4 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_2);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_d1bcaee9235c07d213828b75fb214861);

tmp_assign_source_25 = MAKE_FUNCTION_PIL$ImageOps$$$function__7_cover(tstate, tmp_defaults_4, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_cover, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_annotations_8;
tmp_expression_value_6 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_tuple_float_0_5_float_0_5_tuple;
PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_3);
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_82d41c9f2af47bc5e18c8ced4fdd4328);

tmp_assign_source_26 = MAKE_FUNCTION_PIL$ImageOps$$$function__8_pad(tstate, tmp_defaults_5, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_pad, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_9;
tmp_defaults_6 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_06d28aa710ed0b0461e2d49afa2be138);
Py_INCREF(tmp_defaults_6);

tmp_assign_source_27 = MAKE_FUNCTION_PIL$ImageOps$$$function__9_crop(tstate, tmp_defaults_6, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_crop, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_7;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_annotations_10;
tmp_expression_value_8 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;

    goto frame_exception_exit_1;
}
tmp_defaults_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_7, 0, tmp_tuple_element_4);
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6e59e305e1cf31886bea7b02ff7207c1);

tmp_assign_source_28 = MAKE_FUNCTION_PIL$ImageOps$$$function__10_scale(tstate, tmp_defaults_7, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_scale, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_PIL$ImageOps$Protocol(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;

    goto try_except_handler_3;
}
tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

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
tmp_expression_value_9 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_32;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

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
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SupportsGetMesh;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$ImageOps->m_frame.f_lineno = 420;
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_7);
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


exception_lineno = 420;

    goto try_except_handler_3;
}
frame_frame_PIL$ImageOps->m_frame.f_lineno = 420;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 420;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_34;
}
branch_end_1:;
{
PyObject *tmp_assign_source_35;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_7804e186dc18e8851577a827cae056a9;
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_753d2f7ba92a8ab12a15cf6f5f6ebf95;
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_SupportsGetMesh;
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_420;
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2 = MAKE_CLASS_FRAME(tstate, code_objects_5c67f858fc3d71fb2e2ef29b366e942d, module_PIL$ImageOps, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2, locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2);
assert(Py_REFCNT(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_10374c2e368db55fd4cf4ec42c94ea67);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageOps$$$function__11_getmesh(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, mod_consts.const_str_plain_getmesh, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageOps$$$class__1_SupportsGetMesh_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
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


exception_lineno = 420;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_SupportsGetMesh;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_35 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_35);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420);
locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420);
locals_PIL$ImageOps$$$class__1_SupportsGetMesh_420 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 420;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsGetMesh, tmp_assign_source_35);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_8;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_annotations_12;
tmp_expression_value_16 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;

    goto frame_exception_exit_1;
}
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_BILINEAR);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;

    goto frame_exception_exit_1;
}
tmp_defaults_8 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_8, 0, tmp_tuple_element_8);
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_622106a19503ca778e3bc4e854d0ba48);

tmp_assign_source_37 = MAKE_FUNCTION_PIL$ImageOps$$$function__12_deform(tstate, tmp_defaults_8, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_deform, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_13;
tmp_defaults_9 = mod_consts.const_tuple_none_tuple;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_b07c7e1e00b9e104bca2579c2a78723f);
Py_INCREF(tmp_defaults_9);

tmp_assign_source_38 = MAKE_FUNCTION_PIL$ImageOps$$$function__13_equalize(tstate, tmp_defaults_9, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_equalize, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_14;
tmp_defaults_10 = mod_consts.const_tuple_int_0_int_0_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_8b74ee4b0aeedb78441bd54112404beb);
Py_INCREF(tmp_defaults_10);

tmp_assign_source_39 = MAKE_FUNCTION_PIL$ImageOps$$$function__14_expand(tstate, tmp_defaults_10, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_expand, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_defaults_11;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_annotations_15;
tmp_expression_value_18 = module_var_accessor_PIL$ImageOps$Image(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Resampling);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;

    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_BICUBIC);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;

    goto frame_exception_exit_1;
}
tmp_defaults_11 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_defaults_11, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_float_0_0;
PyTuple_SET_ITEM0(tmp_defaults_11, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_tuple_float_0_5_float_0_5_tuple;
PyTuple_SET_ITEM0(tmp_defaults_11, 2, tmp_tuple_element_9);
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_04ad71b4d03055c591a1abafb7000083);

tmp_assign_source_40 = MAKE_FUNCTION_PIL$ImageOps$$$function__15_fit(tstate, tmp_defaults_11, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_fit, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_41 = MAKE_FUNCTION_PIL$ImageOps$$$function__16_flip(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_flip, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_42 = MAKE_FUNCTION_PIL$ImageOps$$$function__17_grayscale(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_grayscale, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_43 = MAKE_FUNCTION_PIL$ImageOps$$$function__18_invert(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_invert, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_66ab2f018d54b7caf34e75b75d9aea3b);

tmp_assign_source_44 = MAKE_FUNCTION_PIL$ImageOps$$$function__19_mirror(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_mirror, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9b0d5a110bd6a08888eaa99cb2f24867);

tmp_assign_source_45 = MAKE_FUNCTION_PIL$ImageOps$$$function__20_posterize(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_posterize, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_defaults_12;
PyObject *tmp_annotations_21;
tmp_defaults_12 = mod_consts.const_tuple_int_pos_128_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_0a79bbea496c148d6eb527827f7f3400);
Py_INCREF(tmp_defaults_12);

tmp_assign_source_46 = MAKE_FUNCTION_PIL$ImageOps$$$function__21_solarize(tstate, tmp_defaults_12, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_solarize, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_22;
tmp_called_value_2 = module_var_accessor_PIL$ImageOps$overload(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 680;

    goto frame_exception_exit_1;
}
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_bdc2e715339d1427e801085144d498f6);

tmp_args_element_value_1 = MAKE_FUNCTION_PIL$ImageOps$$$function__22_exif_transpose(tstate, tmp_annotations_22);

frame_frame_PIL$ImageOps->m_frame.f_lineno = 680;
tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 680;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_exif_transpose, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_23;
tmp_called_value_3 = module_var_accessor_PIL$ImageOps$overload(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 684;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_4c3f4edd60756b2065f0649150119420);
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_ca8fcfa176299e85617495a6bccd4fa2);

tmp_args_element_value_2 = MAKE_FUNCTION_PIL$ImageOps$$$function__23_exif_transpose(tstate, tmp_kw_defaults_1, tmp_annotations_23);

frame_frame_PIL$ImageOps->m_frame.f_lineno = 684;
tmp_assign_source_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_exif_transpose, tmp_assign_source_48);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageOps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageOps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageOps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageOps);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_24;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_4c3f4edd60756b2065f0649150119420);
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_75f8b5b7e6213c75f4feeaec7792cf0c);

tmp_assign_source_49 = MAKE_FUNCTION_PIL$ImageOps$$$function__24_exif_transpose(tstate, tmp_kw_defaults_2, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_PIL$ImageOps, (Nuitka_StringObject *)mod_consts.const_str_plain_exif_transpose, tmp_assign_source_49);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageOps", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageOps" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageOps);
    return module_PIL$ImageOps;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageOps, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageOps", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
