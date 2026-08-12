/* Generated code for Python module 'PIL$AvifImagePlugin'
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



/* The "module_PIL$AvifImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$AvifImagePlugin;
PyDictObject *moduledict_PIL$AvifImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__avif;
PyObject *const_str_plain_codec_versions;
PyObject *const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple;
PyObject *const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_tuple_str_space_tuple;
PyObject *const_slice_int_pos_4_int_pos_8_none;
PyObject *const_bytes_digest_9170634b1ddce6bd3c47b661942e6718;
PyObject *const_slice_int_pos_8_int_pos_12_none;
PyObject *const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple;
PyObject *const_str_plain_SUPPORTED;
PyObject *const_str_digest_e1b7d6af32f5d679db3bd60af18e1661;
PyObject *const_str_plain_DEFAULT_MAX_THREADS;
PyObject *const_str_plain_sched_getaffinity;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_cpu_count;
PyObject *const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578;
PyObject *const_str_plain_DECODE_CODEC_CHOICE;
PyObject *const_str_plain_auto;
PyObject *const_str_plain_decoder_codec_available;
PyObject *const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32;
PyObject *const_str_plain_fp;
PyObject *const_str_plain_AvifDecoder;
PyObject *const_str_plain__get_default_max_threads;
PyObject *const_str_plain__decoder;
PyObject *const_str_plain_get_info;
PyObject *const_str_plain__size;
PyObject *const_str_plain_n_frames;
PyObject *const_str_plain__mode;
PyObject *const_str_plain_is_animated;
PyObject *const_str_plain_info;
PyObject *const_str_plain_icc_profile;
PyObject *const_str_plain_xmp;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_Exif;
PyObject *const_str_plain_load;
PyObject *const_str_plain_ExifTags;
PyObject *const_str_plain_Base;
PyObject *const_str_plain_Orientation;
PyObject *const_str_plain_tobytes;
PyObject *const_str_plain_exif;
PyObject *const_str_plain_seek;
PyObject *const_str_plain__seek_check;
PyObject *const_str_plain__AvifImageFile__frame;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_raw;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_size;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_tile;
PyObject *const_str_plain_get_frame;
PyObject *const_str_plain_round;
PyObject *const_int_pos_1000;
PyObject *const_str_plain_timestamp;
PyObject *const_str_plain_duration;
PyObject *const_str_plain__exclusive_fp;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain__save;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_save_all_tuple;
PyObject *const_str_plain_encoderinfo;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_append_images;
PyObject *const_set_119001dcb4a60440966e5c2343f4350a;
PyObject *const_tuple_str_plain_quality_int_pos_75_tuple;
PyObject *const_int_pos_100;
PyObject *const_str_digest_2aca840ad6628bd100ca149dfa882db6;
PyObject *const_tuple_str_plain_duration_int_0_tuple;
PyObject *const_str_plain_subsampling;
PyObject *const_str_digest_2a1faf3ac730212c51565b93445819df;
PyObject *const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e;
PyObject *const_tuple_str_plain_speed_int_pos_6_tuple;
PyObject *const_str_plain_max_threads;
PyObject *const_tuple_str_plain_codec_str_plain_auto_tuple;
PyObject *const_str_plain_encoder_codec_available;
PyObject *const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6;
PyObject *const_tuple_str_plain_range_str_plain_full_tuple;
PyObject *const_tuple_str_plain_tile_rows_int_0_tuple;
PyObject *const_tuple_str_plain_tile_cols_int_0_tuple;
PyObject *const_tuple_str_plain_alpha_premultiplied_false_tuple;
PyObject *const_str_plain_autotiling;
PyObject *const_tuple_str_plain_icc_profile_tuple;
PyObject *const_tuple_str_plain_exif_tuple;
PyObject *const_str_plain_exif_data;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_xmp_tuple;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_str_plain_advanced_tuple;
PyObject *const_str_plain_items;
PyObject *const_str_plain_advanced;
PyObject *const_str_plain_invalid;
PyObject *const_str_digest_a816eb837fb500b1fb19a3165d24a1e0;
PyObject *const_str_plain_AvifEncoder;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_ImageSequence;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_ims;
PyObject *const_frozenset_b0bf2879ea2346e324ed8457de0532e2;
PyObject *const_str_plain_has_transparency_data;
PyObject *const_str_plain_RGBA;
PyObject *const_str_plain_grayscale_modes;
PyObject *const_str_plain_L;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain_convert;
PyObject *const_tuple_type_list_type_tuple_tuple;
PyObject *const_str_plain_frame_idx;
PyObject *const_str_plain_enc;
PyObject *const_str_plain_add;
PyObject *const_str_plain_frame;
PyObject *const_str_plain_rawmode;
PyObject *const_str_plain_is_single_frame;
PyObject *const_str_plain_finish;
PyObject *const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4;
PyObject *const_str_plain_write;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7120d4204cc4762ca7a220b081a44610;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_IO;
PyObject *const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple;
PyObject *const_tuple_str_plain__avif_tuple;
PyObject *const_dict_06ec63c5a733e780ca6e09fdcb73ec31;
PyObject *const_str_plain_get_codec_version;
PyObject *const_dict_9aa70217f5a39f0e37caeb95ab54b439;
PyObject *const_str_plain__accept;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AvifImageFile;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611;
PyObject *const_int_pos_65;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_AVIF;
PyObject *const_str_digest_d8c305a8239fb74c71fffc557c0c42bf;
PyObject *const_str_plain_format_description;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__open;
PyObject *const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3;
PyObject *const_dict_d4b5230838d4aaf3fa77f9421d5420a0;
PyObject *const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993;
PyObject *const_dict_a37b02cbeb5af50e659ce64a4824e55a;
PyObject *const_str_digest_d4b16d370bde217b7f833c3701221c8b;
PyObject *const_dict_ed6f90097ef68649ee7ba7c17849bdd4;
PyObject *const_str_plain_load_seek;
PyObject *const_str_digest_6b0e1d2016e1b385c673a65b392bc387;
PyObject *const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd;
PyObject *const_tuple_1862838fe310ce5b63a7094de3597238_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain__save_all;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32;
PyObject *const_str_plain_register_open;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_register_save_all;
PyObject *const_str_plain_register_extensions;
PyObject *const_str_digest_4c255179afcd98a7551aed8d3cfd4abc;
PyObject *const_str_digest_79656bd4542a30d84efa5e4887596212;
PyObject *const_str_plain_register_mime;
PyObject *const_str_digest_9a7ee580c9f13e62971987f60f4205ec;
PyObject *const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a;
PyObject *const_tuple_83681688251902be70c495aa3f19b9bf_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple;
PyObject *const_str_digest_dc3888fc44ca443845a629c859947678;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_prefix_str_plain_major_brand_tuple;
PyObject *const_tuple_b3e2be798607549ace80825ef254deb2_tuple;
PyObject *const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple;
PyObject *const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple;
PyObject *const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple;
PyObject *const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pos_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[181];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.AvifImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 181) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 181 values, got %d\n",
                    UN_TRANSLATE("PIL.AvifImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__avif", mod_consts.const_str_plain__avif);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__avif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codec_versions", mod_consts.const_str_plain_codec_versions);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_codec_versions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple", mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple", mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_58_tuple", mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_4_int_pos_8_none", mod_consts.const_slice_int_pos_4_int_pos_8_none);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_4_int_pos_8_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718", mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_int_pos_12_none", mod_consts.const_slice_int_pos_8_int_pos_12_none);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_int_pos_12_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple", mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUPPORTED", mod_consts.const_str_plain_SUPPORTED);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUPPORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661", mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_MAX_THREADS", mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sched_getaffinity", mod_consts.const_str_plain_sched_getaffinity);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_sched_getaffinity);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cpu_count", mod_consts.const_str_plain_cpu_count);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_cpu_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578", mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DECODE_CODEC_CHOICE", mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auto", mod_consts.const_str_plain_auto);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoder_codec_available", mod_consts.const_str_plain_decoder_codec_available);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoder_codec_available);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32", mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifDecoder", mod_consts.const_str_plain_AvifDecoder);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_AvifDecoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_default_max_threads", mod_consts.const_str_plain__get_default_max_threads);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_default_max_threads);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decoder", mod_consts.const_str_plain__decoder);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__decoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_info", mod_consts.const_str_plain_get_info);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_animated", mod_consts.const_str_plain_is_animated);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_animated);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icc_profile", mod_consts.const_str_plain_icc_profile);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_icc_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xmp", mod_consts.const_str_plain_xmp);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_xmp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifTags", mod_consts.const_str_plain_ExifTags);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ExifTags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek_check", mod_consts.const_str_plain__seek_check);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__seek_check);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__AvifImageFile__frame", mod_consts.const_str_plain__AvifImageFile__frame);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__AvifImageFile__frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_frame", mod_consts.const_str_plain_get_frame);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1000", mod_consts.const_int_pos_1000);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duration", mod_consts.const_str_plain_duration);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_duration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__exclusive_fp", mod_consts.const_str_plain__exclusive_fp);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__exclusive_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_save_all_tuple", mod_consts.const_tuple_str_plain_save_all_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_all_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_images);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_119001dcb4a60440966e5c2343f4350a", mod_consts.const_set_119001dcb4a60440966e5c2343f4350a);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_set_119001dcb4a60440966e5c2343f4350a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple", mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6", mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_duration_int_0_tuple", mod_consts.const_tuple_str_plain_duration_int_0_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_duration_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subsampling", mod_consts.const_str_plain_subsampling);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_subsampling);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df", mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e", mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple", mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max_threads", mod_consts.const_str_plain_max_threads);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_threads);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple", mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoder_codec_available", mod_consts.const_str_plain_encoder_codec_available);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoder_codec_available);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6", mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_range_str_plain_full_tuple", mod_consts.const_tuple_str_plain_range_str_plain_full_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_range_str_plain_full_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple", mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple", mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple", mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_autotiling", mod_consts.const_str_plain_autotiling);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_autotiling);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_icc_profile_tuple", mod_consts.const_tuple_str_plain_icc_profile_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_icc_profile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_tuple", mod_consts.const_tuple_str_plain_exif_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_data", mod_consts.const_str_plain_exif_data);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_xmp_tuple", mod_consts.const_tuple_str_plain_xmp_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_xmp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_advanced_tuple", mod_consts.const_tuple_str_plain_advanced_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_advanced_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_advanced", mod_consts.const_str_plain_advanced);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_advanced);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invalid", mod_consts.const_str_plain_invalid);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0", mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifEncoder", mod_consts.const_str_plain_AvifEncoder);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_AvifEncoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSequence", mod_consts.const_str_plain_ImageSequence);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSequence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_ims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2", mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_transparency_data", mod_consts.const_str_plain_has_transparency_data);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_transparency_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale_modes", mod_consts.const_str_plain_grayscale_modes);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale_modes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_list_type_tuple_tuple", mod_consts.const_tuple_type_list_type_tuple_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame_idx", mod_consts.const_str_plain_frame_idx);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame_idx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enc", mod_consts.const_str_plain_enc);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_enc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame", mod_consts.const_str_plain_frame);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_single_frame", mod_consts.const_str_plain_is_single_frame);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_single_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finish", mod_consts.const_str_plain_finish);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_finish);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4", mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610", mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple", mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__avif_tuple", mod_consts.const_tuple_str_plain__avif_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__avif_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31", mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_codec_version", mod_consts.const_str_plain_get_codec_version);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_codec_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439", mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifImageFile", mod_consts.const_str_plain_AvifImageFile);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_AvifImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611", mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AVIF", mod_consts.const_str_plain_AVIF);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_AVIF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf", mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3", mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0", mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993", mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a", mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b", mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4", mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_seek", mod_consts.const_str_plain_load_seek);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387", mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd", mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple", mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain__save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32", mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extensions", mod_consts.const_str_plain_register_extensions);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extensions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc", mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212", mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec", mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a", mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple", mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678", mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple", mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple", mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple", mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple", mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple", mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple", mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_PIL$AvifImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__avif", mod_consts.const_str_plain__avif);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__avif) && "mod_consts.const_str_plain__avif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codec_versions", mod_consts.const_str_plain_codec_versions);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_codec_versions) && "mod_consts.const_str_plain_codec_versions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple", mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple) && "mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple", mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple) && "mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_58_tuple", mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple) && "mod_consts.const_tuple_str_chr_58_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple) && "mod_consts.const_tuple_str_space_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_4_int_pos_8_none", mod_consts.const_slice_int_pos_4_int_pos_8_none);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_4_int_pos_8_none) && "mod_consts.const_slice_int_pos_4_int_pos_8_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718", mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718) && "mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_int_pos_12_none", mod_consts.const_slice_int_pos_8_int_pos_12_none);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_int_pos_12_none) && "mod_consts.const_slice_int_pos_8_int_pos_12_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple", mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple) && "mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUPPORTED", mod_consts.const_str_plain_SUPPORTED);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUPPORTED) && "mod_consts.const_str_plain_SUPPORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661", mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661) && "mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DEFAULT_MAX_THREADS", mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_THREADS) && "mod_consts.const_str_plain_DEFAULT_MAX_THREADS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sched_getaffinity", mod_consts.const_str_plain_sched_getaffinity);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_sched_getaffinity) && "mod_consts.const_str_plain_sched_getaffinity");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cpu_count", mod_consts.const_str_plain_cpu_count);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_cpu_count) && "mod_consts.const_str_plain_cpu_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578", mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578) && "mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DECODE_CODEC_CHOICE", mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_DECODE_CODEC_CHOICE) && "mod_consts.const_str_plain_DECODE_CODEC_CHOICE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auto", mod_consts.const_str_plain_auto);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto) && "mod_consts.const_str_plain_auto");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoder_codec_available", mod_consts.const_str_plain_decoder_codec_available);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoder_codec_available) && "mod_consts.const_str_plain_decoder_codec_available");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32", mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32) && "mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifDecoder", mod_consts.const_str_plain_AvifDecoder);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_AvifDecoder) && "mod_consts.const_str_plain_AvifDecoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_default_max_threads", mod_consts.const_str_plain__get_default_max_threads);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_default_max_threads) && "mod_consts.const_str_plain__get_default_max_threads");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decoder", mod_consts.const_str_plain__decoder);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__decoder) && "mod_consts.const_str_plain__decoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_info", mod_consts.const_str_plain_get_info);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_info) && "mod_consts.const_str_plain_get_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames) && "mod_consts.const_str_plain_n_frames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_animated", mod_consts.const_str_plain_is_animated);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_animated) && "mod_consts.const_str_plain_is_animated");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icc_profile", mod_consts.const_str_plain_icc_profile);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_icc_profile) && "mod_consts.const_str_plain_icc_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xmp", mod_consts.const_str_plain_xmp);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_xmp) && "mod_consts.const_str_plain_xmp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Exif) && "mod_consts.const_str_plain_Exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ExifTags", mod_consts.const_str_plain_ExifTags);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ExifTags) && "mod_consts.const_str_plain_ExifTags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Base", mod_consts.const_str_plain_Base);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base) && "mod_consts.const_str_plain_Base");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Orientation", mod_consts.const_str_plain_Orientation);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Orientation) && "mod_consts.const_str_plain_Orientation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes) && "mod_consts.const_str_plain_tobytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif) && "mod_consts.const_str_plain_exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek_check", mod_consts.const_str_plain__seek_check);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__seek_check) && "mod_consts.const_str_plain__seek_check");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__AvifImageFile__frame", mod_consts.const_str_plain__AvifImageFile__frame);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__AvifImageFile__frame) && "mod_consts.const_str_plain__AvifImageFile__frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_tile) && "mod_consts.const_str_plain_tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_frame", mod_consts.const_str_plain_get_frame);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_frame) && "mod_consts.const_str_plain_get_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_round) && "mod_consts.const_str_plain_round");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1000", mod_consts.const_int_pos_1000);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000) && "mod_consts.const_int_pos_1000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp) && "mod_consts.const_str_plain_timestamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duration", mod_consts.const_str_plain_duration);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_duration) && "mod_consts.const_str_plain_duration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__exclusive_fp", mod_consts.const_str_plain__exclusive_fp);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__exclusive_fp) && "mod_consts.const_str_plain__exclusive_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_save_all_tuple", mod_consts.const_tuple_str_plain_save_all_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_all_tuple) && "mod_consts.const_tuple_str_plain_save_all_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo) && "mod_consts.const_str_plain_encoderinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_images) && "mod_consts.const_str_plain_append_images");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_119001dcb4a60440966e5c2343f4350a", mod_consts.const_set_119001dcb4a60440966e5c2343f4350a);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_set_119001dcb4a60440966e5c2343f4350a) && "mod_consts.const_set_119001dcb4a60440966e5c2343f4350a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple", mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple) && "mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_100) && "mod_consts.const_int_pos_100");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6", mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6) && "mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_duration_int_0_tuple", mod_consts.const_tuple_str_plain_duration_int_0_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_duration_int_0_tuple) && "mod_consts.const_tuple_str_plain_duration_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subsampling", mod_consts.const_str_plain_subsampling);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_subsampling) && "mod_consts.const_str_plain_subsampling");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df", mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df) && "mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e", mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e) && "mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple", mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple) && "mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max_threads", mod_consts.const_str_plain_max_threads);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_threads) && "mod_consts.const_str_plain_max_threads");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple", mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple) && "mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoder_codec_available", mod_consts.const_str_plain_encoder_codec_available);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoder_codec_available) && "mod_consts.const_str_plain_encoder_codec_available");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6", mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6) && "mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_range_str_plain_full_tuple", mod_consts.const_tuple_str_plain_range_str_plain_full_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_range_str_plain_full_tuple) && "mod_consts.const_tuple_str_plain_range_str_plain_full_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple", mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple) && "mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple", mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple) && "mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple", mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple) && "mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_autotiling", mod_consts.const_str_plain_autotiling);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_autotiling) && "mod_consts.const_str_plain_autotiling");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_icc_profile_tuple", mod_consts.const_tuple_str_plain_icc_profile_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_icc_profile_tuple) && "mod_consts.const_tuple_str_plain_icc_profile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_tuple", mod_consts.const_tuple_str_plain_exif_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_tuple) && "mod_consts.const_tuple_str_plain_exif_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif_data", mod_consts.const_str_plain_exif_data);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif_data) && "mod_consts.const_str_plain_exif_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_xmp_tuple", mod_consts.const_tuple_str_plain_xmp_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_xmp_tuple) && "mod_consts.const_tuple_str_plain_xmp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_advanced_tuple", mod_consts.const_tuple_str_plain_advanced_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_advanced_tuple) && "mod_consts.const_tuple_str_plain_advanced_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_advanced", mod_consts.const_str_plain_advanced);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_advanced) && "mod_consts.const_str_plain_advanced");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invalid", mod_consts.const_str_plain_invalid);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid) && "mod_consts.const_str_plain_invalid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0", mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0) && "mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifEncoder", mod_consts.const_str_plain_AvifEncoder);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_AvifEncoder) && "mod_consts.const_str_plain_AvifEncoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageSequence", mod_consts.const_str_plain_ImageSequence);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageSequence) && "mod_consts.const_str_plain_ImageSequence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterator", mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator) && "mod_consts.const_str_plain_Iterator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_ims) && "mod_consts.const_str_plain_ims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2", mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2) && "mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_transparency_data", mod_consts.const_str_plain_has_transparency_data);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_transparency_data) && "mod_consts.const_str_plain_has_transparency_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA) && "mod_consts.const_str_plain_RGBA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_grayscale_modes", mod_consts.const_str_plain_grayscale_modes);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_grayscale_modes) && "mod_consts.const_str_plain_grayscale_modes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert) && "mod_consts.const_str_plain_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_list_type_tuple_tuple", mod_consts.const_tuple_type_list_type_tuple_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple) && "mod_consts.const_tuple_type_list_type_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame_idx", mod_consts.const_str_plain_frame_idx);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame_idx) && "mod_consts.const_str_plain_frame_idx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enc", mod_consts.const_str_plain_enc);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_enc) && "mod_consts.const_str_plain_enc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame", mod_consts.const_str_plain_frame);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame) && "mod_consts.const_str_plain_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode) && "mod_consts.const_str_plain_rawmode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_single_frame", mod_consts.const_str_plain_is_single_frame);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_single_frame) && "mod_consts.const_str_plain_is_single_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finish", mod_consts.const_str_plain_finish);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_finish) && "mod_consts.const_str_plain_finish");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4", mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4) && "mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610", mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610) && "mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IO", mod_consts.const_str_plain_IO);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO) && "mod_consts.const_str_plain_IO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple", mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple) && "mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__avif_tuple", mod_consts.const_tuple_str_plain__avif_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__avif_tuple) && "mod_consts.const_tuple_str_plain__avif_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31", mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31) && "mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_codec_version", mod_consts.const_str_plain_get_codec_version);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_codec_version) && "mod_consts.const_str_plain_get_codec_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439", mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439) && "mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__accept) && "mod_consts.const_str_plain__accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AvifImageFile", mod_consts.const_str_plain_AvifImageFile);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_AvifImageFile) && "mod_consts.const_str_plain_AvifImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611", mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611) && "mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65", mod_consts.const_int_pos_65);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_65) && "mod_consts.const_int_pos_65");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AVIF", mod_consts.const_str_plain_AVIF);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_AVIF) && "mod_consts.const_str_plain_AVIF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf", mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf) && "mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_description) && "mod_consts.const_str_plain_format_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain__open) && "mod_consts.const_str_plain__open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3", mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3) && "mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0", mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0) && "mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993", mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993) && "mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a", mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a) && "mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b", mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b) && "mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4", mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4) && "mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_seek", mod_consts.const_str_plain_load_seek);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_seek) && "mod_consts.const_str_plain_load_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387", mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387) && "mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd", mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd) && "mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple", mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple) && "mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain__save_all) && "mod_consts.const_str_plain__save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32", mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32) && "mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_open) && "mod_consts.const_str_plain_register_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all) && "mod_consts.const_str_plain_register_save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extensions", mod_consts.const_str_plain_register_extensions);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extensions) && "mod_consts.const_str_plain_register_extensions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc", mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc) && "mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212", mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212) && "mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec", mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec) && "mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a", mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a) && "mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple", mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple) && "mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678", mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678) && "mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple", mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple) && "mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple", mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple) && "mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple", mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple) && "mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple", mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple) && "mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple", mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple) && "mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple", mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple) && "mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple", mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
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
static PyObject *module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_AvifImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AvifImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AvifImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AvifImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AvifImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_AvifImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_AvifImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AvifImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$DECODE_CODEC_CHOICE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECODE_CODEC_CHOICE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DECODE_CODEC_CHOICE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$DEFAULT_MAX_THREADS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_THREADS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_THREADS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$ExifTags(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$ImageSequence(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageSequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageSequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageSequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageSequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$SUPPORTED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUPPORTED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUPPORTED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SUPPORTED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SUPPORTED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$_accept(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$_avif(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__avif);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__avif);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__avif, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__avif);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__avif, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__avif);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__avif);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__avif);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$_get_default_max_threads(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_max_threads);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_default_max_threads);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_default_max_threads, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_default_max_threads);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_default_max_threads, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_max_threads);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_max_threads);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_max_threads);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$_save(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$AvifImagePlugin$_save_all(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$AvifImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$AvifImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$AvifImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__save_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__save_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__save_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__save_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_50cf59c7c6b8c6929bc0c141b5523719;
static PyCodeObject *code_objects_872d887760421dd78288b17652d847cc;
static PyCodeObject *code_objects_f490de9bc91d003408e8262ffc0cb575;
static PyCodeObject *code_objects_9d776f340f654b7e20906ea170ba9d21;
static PyCodeObject *code_objects_7e5f8053f13001437990c2f4d333bc02;
static PyCodeObject *code_objects_12500d91bc5f6711389c6a10c83d43c3;
static PyCodeObject *code_objects_5b369b06a0ade57fa9c1e18e4fa6610e;
static PyCodeObject *code_objects_4d76aa4d6bfe447a34106e2022e9c52e;
static PyCodeObject *code_objects_394d63abf7e5c4127d8e442c1e8fb8d1;
static PyCodeObject *code_objects_4a10501c71452770fe7314fa6fad4ae9;
static PyCodeObject *code_objects_263184142534d5d948cd92f42acdf1ae;
static PyCodeObject *code_objects_89ac09d6ba9654eda4487f8de8aafe7c;
static PyCodeObject *code_objects_5fc527b591db686345510250ff584ae2;
static PyCodeObject *code_objects_391e093aa3c2533a9c3d35bb4132578c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_212fdb39b0b6c7ee1a412e7c762bbe7a); CHECK_OBJECT(module_filename_obj);
code_objects_50cf59c7c6b8c6929bc0c141b5523719 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610, mod_consts.const_tuple_83681688251902be70c495aa3f19b9bf_tuple, NULL, 1, 0, 0);
code_objects_872d887760421dd78288b17652d847cc = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_f490de9bc91d003408e8262ffc0cb575 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678, mod_consts.const_str_digest_dc3888fc44ca443845a629c859947678, NULL, NULL, 0, 0, 0);
code_objects_9d776f340f654b7e20906ea170ba9d21 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AvifImageFile, mod_consts.const_str_plain_AvifImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7e5f8053f13001437990c2f4d333bc02 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__accept, mod_consts.const_str_plain__accept, mod_consts.const_tuple_str_plain_prefix_str_plain_major_brand_tuple, NULL, 1, 0, 0);
code_objects_12500d91bc5f6711389c6a10c83d43c3 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_default_max_threads, mod_consts.const_str_plain__get_default_max_threads, NULL, NULL, 0, 0, 0);
code_objects_5b369b06a0ade57fa9c1e18e4fa6610e = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3, mod_consts.const_tuple_b3e2be798607549ace80825ef254deb2_tuple, NULL, 1, 0, 0);
code_objects_4d76aa4d6bfe447a34106e2022e9c52e = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_1984496287fb58ffc12de5a0114d94e7_tuple, NULL, 4, 0, 0);
code_objects_394d63abf7e5c4127d8e442c1e8fb8d1 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save_all, mod_consts.const_str_plain__save_all, mod_consts.const_tuple_str_plain_im_str_plain_fp_str_plain_filename_tuple, NULL, 3, 0, 0);
code_objects_4a10501c71452770fe7314fa6fad4ae9 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_codec_version, mod_consts.const_str_plain_get_codec_version, mod_consts.const_tuple_str_plain_codec_name_str_plain_versions_str_plain_version_tuple, NULL, 1, 0, 0);
code_objects_263184142534d5d948cd92f42acdf1ae = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load, mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b, mod_consts.const_tuple_3c286f2172d5a3dcfa9234b6601bd10e_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_89ac09d6ba9654eda4487f8de8aafe7c = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load_seek, mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple, NULL, 2, 0, 0);
code_objects_5fc527b591db686345510250ff584ae2 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_seek, mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple, NULL, 2, 0, 0);
code_objects_391e093aa3c2533a9c3d35bb4132578c = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tell, mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__10__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__1_get_codec_version(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__2__accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__3__get_default_max_threads(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__4__open(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__5_seek(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__6_load(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__7_load_seek(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__8_tell(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__9__save_all(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$AvifImagePlugin$$$function__1_get_codec_version(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_codec_name = python_pars[0];
PyObject *var_versions = NULL;
PyObject *var_version = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version = MAKE_FUNCTION_FRAME(tstate, code_objects_4a10501c71452770fe7314fa6fad4ae9, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version = cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_PIL$AvifImagePlugin$_avif(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__avif);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame.f_lineno = 23;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_codec_versions);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_versions;
    var_versions = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_versions);
tmp_expression_value_1 = var_versions;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame.f_lineno = 24;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 24;
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
    PyObject *old = var_version;
    var_version = tmp_assign_source_4;
    Py_INCREF(var_version);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_version);
tmp_expression_value_3 = var_version;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame.f_lineno = 25;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_ae1bf19510647fb9d159b650e3dcc9f7_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_codec_name);
tmp_cmp_expr_right_1 = par_codec_name;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "ooo";
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
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_version);
tmp_expression_value_7 = var_version;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_split);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame.f_lineno = 26;
tmp_expression_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_subscript_value_2 = const_int_neg_1;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_2, -1);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame.f_lineno = 26;
tmp_expression_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_space_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_subscript_value_3 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version,
    type_description_1,
    par_codec_name,
    var_versions,
    var_version
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version == cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__1_get_codec_version);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_versions);
CHECK_OBJECT(var_versions);
Py_DECREF(var_versions);
var_versions = NULL;
Py_XDECREF(var_version);
var_version = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_versions);
var_versions = NULL;
Py_XDECREF(var_version);
var_version = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_codec_name);
Py_DECREF(par_codec_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_codec_name);
Py_DECREF(par_codec_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$AvifImagePlugin$$$function__2__accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
PyObject *var_major_brand = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__2__accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept = MAKE_FUNCTION_FRAME(tstate, code_objects_7e5f8053f13001437990c2f4d333bc02, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__2__accept = cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__2__accept);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__2__accept) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_prefix);
tmp_expression_value_1 = par_prefix;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_4_int_pos_8_none;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_9170634b1ddce6bd3c47b661942e6718;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_prefix);
tmp_expression_value_2 = par_prefix;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_8_int_pos_12_none;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_major_brand;
    var_major_brand = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_major_brand);
tmp_cmp_expr_left_2 = var_major_brand;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_5b69c953206fc083dd8c27eb53d0031f_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
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
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_PIL$AvifImagePlugin$SUPPORTED(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUPPORTED);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
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
tmp_return_value = mod_consts.const_str_digest_e1b7d6af32f5d679db3bd60af18e1661;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__2__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__2__accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__2__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__2__accept,
    type_description_1,
    par_prefix,
    var_major_brand
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__2__accept == cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__2__accept = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__2__accept);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_major_brand);
var_major_brand = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_major_brand);
var_major_brand = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__3__get_default_max_threads(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads = MAKE_FUNCTION_FRAME(tstate, code_objects_12500d91bc5f6711389c6a10c83d43c3, module_PIL$AvifImagePlugin, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads = cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_PIL$AvifImagePlugin$DEFAULT_MAX_THREADS(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

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
tmp_return_value = module_var_accessor_PIL$AvifImagePlugin$DEFAULT_MAX_THREADS(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_THREADS);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_1 == NULL));
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sched_getaffinity);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

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
PyObject *tmp_len_arg_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads->m_frame.f_lineno = 60;
tmp_len_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_sched_getaffinity,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads->m_frame.f_lineno = 62;
tmp_or_left_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_cpu_count);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_1);
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
goto frame_return_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads == cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__3__get_default_max_threads);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__4__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_icc = NULL;
PyObject *var_exif = NULL;
PyObject *var_exif_orientation = NULL;
PyObject *var_xmp = NULL;
PyObject *var_exif_data = NULL;
PyObject *var_original_orientation = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__element_7 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__4__open;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open = MAKE_FUNCTION_FRAME(tstate, code_objects_5b369b06a0ade57fa9c1e18e4fa6610e, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__4__open = cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__4__open);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__4__open) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_PIL$AvifImagePlugin$SUPPORTED(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUPPORTED);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oNoooooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_250e4e0ab75a2955fd5f6d20b3d3c578;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oNoooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_cmp_expr_left_1 = module_var_accessor_PIL$AvifImagePlugin$DECODE_CODEC_CHOICE(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_auto;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_1 = module_var_accessor_PIL$AvifImagePlugin$_avif(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__avif);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decoder_codec_available);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_PIL$AvifImagePlugin$DECODE_CODEC_CHOICE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 76;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 75;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_6e74f1ce590fcf4c68e1d4516f535a32;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 79;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oNoooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fp);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_raise_type_3;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 81;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oNoooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_ass_attr_target_1;
tmp_expression_value_3 = module_var_accessor_PIL$AvifImagePlugin$_avif(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__avif);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_AvifDecoder);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 83;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 83;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$AvifImagePlugin$DECODE_CODEC_CHOICE(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DECODE_CODEC_CHOICE);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 84;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_PIL$AvifImagePlugin$_get_default_max_threads(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_default_max_threads);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 85;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 85;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 85;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__decoder, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__decoder);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oNoooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 90;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_info);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oNoooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oNoooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 7);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 7);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
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
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_4;
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_5;
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 7);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_6;
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 6, 7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_7;
    tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 7);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oNoooooo";
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
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_ass_attr_value_2 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__size, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_ass_attr_value_3 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_n_frames, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_ass_attr_value_4 = tmp_tuple_unpack_1__element_3;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__mode, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oNoooooo";
    goto try_except_handler_2;
}
}
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
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_icc;
    var_icc = tmp_assign_source_9;
    Py_INCREF(var_icc);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_5;
{
    PyObject *old = var_exif;
    var_exif = tmp_assign_source_10;
    Py_INCREF(var_exif);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_6;
{
    PyObject *old = var_exif_orientation;
    var_exif_orientation = tmp_assign_source_11;
    Py_INCREF(var_exif_orientation);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_7;
{
    PyObject *old = var_xmp;
    var_xmp = tmp_assign_source_12;
    Py_INCREF(var_xmp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;

{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_n_frames);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_ass_attr_value_5 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_is_animated, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_1;
CHECK_OBJECT(var_icc);
tmp_truth_name_1 = CHECK_IF_TRUE(var_icc);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oNoooooo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_icc);
tmp_ass_subvalue_1 = var_icc;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_icc_profile;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(var_xmp);
tmp_truth_name_2 = CHECK_IF_TRUE(var_xmp);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_xmp);
tmp_ass_subvalue_2 = var_xmp;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_xmp;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
int tmp_truth_name_3;
CHECK_OBJECT(var_exif_orientation);
tmp_cmp_expr_left_4 = var_exif_orientation;
tmp_cmp_expr_right_4 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_exif);
tmp_truth_name_3 = CHECK_IF_TRUE(var_exif);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_6 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_6 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 100;
tmp_assign_source_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_Exif);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif_data;
    var_exif_data = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_4;
CHECK_OBJECT(var_exif);
tmp_truth_name_4 = CHECK_IF_TRUE(var_exif);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_exif_data);
tmp_called_instance_4 = var_exif_data;
CHECK_OBJECT(var_exif);
tmp_args_element_value_5 = var_exif;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 102;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_load, tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_exif_data);
tmp_expression_value_9 = var_exif_data;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_PIL$AvifImagePlugin$ExifTags(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 103;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Base);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 103;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 103;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = const_int_pos_1;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 103;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_original_orientation;
    var_original_orientation = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = const_int_pos_1;
{
    PyObject *old = var_original_orientation;
    var_original_orientation = tmp_assign_source_15;
    Py_INCREF(var_original_orientation);
    Py_XDECREF(old);
}

}
branch_end_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_exif_orientation);
tmp_cmp_expr_left_5 = var_exif_orientation;
CHECK_OBJECT(var_original_orientation);
tmp_cmp_expr_right_5 = var_original_orientation;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oNoooooo";
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
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_exif_orientation);
tmp_ass_subvalue_3 = var_exif_orientation;
CHECK_OBJECT(var_exif_data);
tmp_ass_subscribed_3 = var_exif_data;
tmp_expression_value_13 = module_var_accessor_PIL$AvifImagePlugin$ExifTags(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Base);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscript_3);
Py_DECREF(tmp_ass_subscript_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_exif_data);
tmp_called_instance_5 = var_exif_data;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 108;
tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_tobytes);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_no_6:;
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_5;
if (var_exif == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 109;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_5 = CHECK_IF_TRUE(var_exif);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_ass_subscript_4;
if (var_exif == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subvalue_4 = var_exif;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_exif;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oNoooooo";
    goto frame_exception_exit_1;
}
}
branch_no_9:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame.f_lineno = 111;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_seek,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oNoooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__4__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__4__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__4__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__4__open,
    type_description_1,
    par_self,
    NULL,
    var_icc,
    var_exif,
    var_exif_orientation,
    var_xmp,
    var_exif_data,
    var_original_orientation
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__4__open == cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__4__open = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__4__open);

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
CHECK_OBJECT(var_icc);
CHECK_OBJECT(var_icc);
Py_DECREF(var_icc);
var_icc = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
CHECK_OBJECT(var_exif_orientation);
CHECK_OBJECT(var_exif_orientation);
Py_DECREF(var_exif_orientation);
var_exif_orientation = NULL;
CHECK_OBJECT(var_xmp);
CHECK_OBJECT(var_xmp);
Py_DECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_exif_data);
var_exif_data = NULL;
Py_XDECREF(var_original_orientation);
var_original_orientation = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_icc);
var_icc = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_exif_orientation);
var_exif_orientation = NULL;
Py_XDECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_exif_data);
var_exif_data = NULL;
Py_XDECREF(var_original_orientation);
var_original_orientation = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__5_seek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__5_seek;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek = MAKE_FUNCTION_FRAME(tstate, code_objects_5fc527b591db686345510250ff584ae2, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__5_seek = cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__5_seek);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__5_seek) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_frame);
tmp_args_element_value_1 = par_frame;
frame_frame_PIL$AvifImagePlugin$$$function__5_seek->m_frame.f_lineno = 114;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__seek_check, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_frame);
tmp_ass_attr_value_1 = par_frame;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__AvifImageFile__frame, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_ass_attr_target_2;
tmp_expression_value_1 = module_var_accessor_PIL$AvifImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__Tile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_raw;
tmp_add_expr_left_1 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__5_seek->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_ass_attr_value_2, 0, tmp_list_element_1);
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_tile, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__5_seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__5_seek->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__5_seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__5_seek,
    type_description_1,
    par_self,
    par_frame
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__5_seek == cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__5_seek = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__5_seek);

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
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_frame);
Py_DECREF(par_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$AvifImagePlugin$$$function__6_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_data = NULL;
PyObject *var_timescale = NULL;
PyObject *var_pts_in_timescales = NULL;
PyObject *var_duration_in_timescales = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__6_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load = MAKE_FUNCTION_FRAME(tstate, code_objects_263184142534d5d948cd92f42acdf1ae, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__6_load = cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__6_load);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__6_load) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tile);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 122;
type_description_1 = "oooooc";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__decoder);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_frame);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__AvifImageFile__frame);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 125;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 125;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooc";
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



exception_lineno = 124;
type_description_1 = "oooooc";
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



exception_lineno = 124;
type_description_1 = "oooooc";
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



exception_lineno = 124;
type_description_1 = "oooooc";
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



exception_lineno = 124;
type_description_1 = "oooooc";
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



exception_lineno = 124;
type_description_1 = "oooooc";
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_6;
    Py_INCREF(var_data);
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
    PyObject *old = var_timescale;
    var_timescale = tmp_assign_source_7;
    Py_INCREF(var_timescale);
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
    PyObject *old = var_pts_in_timescales;
    var_pts_in_timescales = tmp_assign_source_8;
    Py_INCREF(var_pts_in_timescales);
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
    PyObject *old = var_duration_in_timescales;
    var_duration_in_timescales = tmp_assign_source_9;
    Py_INCREF(var_duration_in_timescales);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_subscript_1;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
tmp_mult_expr_left_1 = mod_consts.const_int_pos_1000;
CHECK_OBJECT(var_pts_in_timescales);
tmp_truediv_expr_left_1 = var_pts_in_timescales;
CHECK_OBJECT(var_timescale);
tmp_truediv_expr_right_1 = var_timescale;
tmp_mult_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 127;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 127;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_timestamp;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscript_2;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_3 != NULL);
tmp_mult_expr_left_2 = mod_consts.const_int_pos_1000;
CHECK_OBJECT(var_duration_in_timescales);
tmp_truediv_expr_left_2 = var_duration_in_timescales;
CHECK_OBJECT(var_timescale);
tmp_truediv_expr_right_2 = var_timescale;
tmp_mult_expr_right_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 128;
tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 128;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_duration;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_fp);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 130;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__exclusive_fp);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 130;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 131;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_ass_attr_target_1;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_4 == NULL));
CHECK_OBJECT(var_data);
tmp_args_element_value_4 = var_data;
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 132;
tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_fp, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_PIL$AvifImagePlugin, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame.f_lineno = 134;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__6_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__6_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__6_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__6_load,
    type_description_1,
    par_self,
    var_data,
    var_timescale,
    var_pts_in_timescales,
    var_duration_in_timescales,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__6_load == cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__6_load = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__6_load);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_timescale);
var_timescale = NULL;
Py_XDECREF(var_pts_in_timescales);
var_pts_in_timescales = NULL;
Py_XDECREF(var_duration_in_timescales);
var_duration_in_timescales = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_timescale);
var_timescale = NULL;
Py_XDECREF(var_pts_in_timescales);
var_pts_in_timescales = NULL;
Py_XDECREF(var_duration_in_timescales);
var_duration_in_timescales = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__8_tell(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__8_tell;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell = MAKE_FUNCTION_FRAME(tstate, code_objects_391e093aa3c2533a9c3d35bb4132578c, module_PIL$AvifImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__8_tell = cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__8_tell);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__8_tell) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__AvifImageFile__frame);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__8_tell, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__8_tell->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__8_tell, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__8_tell,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__8_tell == cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__8_tell = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__8_tell);

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__9__save_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__9__save_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all = MAKE_FUNCTION_FRAME(tstate, code_objects_394d63abf7e5c4127d8e442c1e8fb8d1, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__9__save_all = cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__9__save_all);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__9__save_all) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
tmp_called_value_1 = module_var_accessor_PIL$AvifImagePlugin$_save(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_kw_call_arg_value_0_1 = par_im;
CHECK_OBJECT(par_fp);
tmp_kw_call_arg_value_1_1 = par_fp;
CHECK_OBJECT(par_filename);
tmp_kw_call_arg_value_2_1 = par_filename;
frame_frame_PIL$AvifImagePlugin$$$function__9__save_all->m_frame.f_lineno = 144;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(
        tstate,
        tmp_called_value_1,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_save_all_tuple
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__9__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__9__save_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__9__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__9__save_all,
    type_description_1,
    par_im,
    par_fp,
    par_filename
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__9__save_all == cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__9__save_all = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__9__save_all);

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


static PyObject *impl_PIL$AvifImagePlugin$$$function__10__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *par_save_all = python_pars[3];
PyObject *var_info = NULL;
PyObject *var_append_images = NULL;
struct Nuitka_CellObject *var_grayscale_modes = Nuitka_Cell_NewEmpty();
nuitka_bool var_grayscale = NUITKA_BOOL_UNASSIGNED;
PyObject *var_quality = NULL;
PyObject *var_duration = NULL;
PyObject *var_subsampling = NULL;
PyObject *var_speed = NULL;
PyObject *var_max_threads = NULL;
PyObject *var_codec = NULL;
PyObject *var_range_ = NULL;
PyObject *var_tile_rows_log2 = NULL;
PyObject *var_tile_cols_log2 = NULL;
PyObject *var_alpha_premultiplied = NULL;
PyObject *var_autotiling = NULL;
PyObject *var_icc_profile = NULL;
PyObject *var_exif_orientation = NULL;
PyObject *var_exif = NULL;
PyObject *var_exif_data = NULL;
PyObject *var_xmp = NULL;
PyObject *var_advanced = NULL;
nuitka_bool var_invalid = NUITKA_BOOL_UNASSIGNED;
PyObject *var_enc = NULL;
PyObject *var_frame_idx = NULL;
PyObject *var_frame_duration = NULL;
PyObject *var_cur_idx = NULL;
PyObject *var_is_single_frame = NULL;
PyObject *var_ims = NULL;
PyObject *var_frame = NULL;
PyObject *var_rawmode = NULL;
PyObject *var_data = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$function__10__save;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save)) {
    Py_XDECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save = MAKE_FUNCTION_FRAME(tstate, code_objects_4d76aa4d6bfe447a34106e2022e9c52e, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_type_description == NULL);
frame_frame_PIL$AvifImagePlugin$$$function__10__save = cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$function__10__save);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$function__10__save) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 150;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_info;
    var_info = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_save_all);
tmp_truth_name_1 = CHECK_IF_TRUE(par_save_all);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(var_info);
tmp_expression_value_3 = var_info;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_append_images;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 152;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_append_images;
    var_append_images = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_append_images;
    var_append_images = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = PySet_New(mod_consts.const_set_119001dcb4a60440966e5c2343f4350a);
{
    PyObject *old = Nuitka_Cell_GET(var_grayscale_modes);
    Nuitka_Cell_SET(var_grayscale_modes, tmp_assign_source_4);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
PyObject *tmp_all_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_2;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_im);
tmp_list_element_1 = par_im;
tmp_add_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_append_images);
tmp_add_expr_right_1 = var_append_images;
tmp_iter_arg_1 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_grayscale_modes;
Py_INCREF(tmp_closure_1[1]);
tmp_all_arg_1 = MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_capi_result_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_2 == -1));
tmp_assign_source_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
var_grayscale = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_info);
tmp_expression_value_4 = var_info;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 163;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_quality_int_pos_75_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_quality;
    var_quality = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_quality);
tmp_isinstance_inst_1 = var_quality;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_quality);
tmp_cmp_expr_left_1 = var_quality;
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_quality);
tmp_cmp_expr_left_2 = var_quality;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_100;
tmp_or_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2aca840ad6628bd100ca149dfa882db6;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 166;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 166;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_info);
tmp_expression_value_5 = var_info;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 168;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_duration_int_0_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_duration;
    var_duration = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
bool tmp_condition_result_3;
CHECK_OBJECT(var_info);
tmp_expression_value_6 = var_info;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_subsampling;
assert(var_grayscale != NUITKA_BOOL_UNASSIGNED);
tmp_condition_result_3 = var_grayscale == NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_args_element_value_2 = mod_consts.const_str_digest_2a1faf3ac730212c51565b93445819df;
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_2 = mod_consts.const_str_digest_bbd2b6bdf069fffeb6d1c8a988b1491e;
condexpr_end_1:;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 169;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_subsampling;
    var_subsampling = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_info);
tmp_expression_value_7 = var_info;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 170;
tmp_assign_source_10 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_speed_int_pos_6_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_speed;
    var_speed = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_8;
CHECK_OBJECT(var_info);
tmp_expression_value_8 = var_info;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_max_threads;
tmp_called_value_8 = module_var_accessor_PIL$AvifImagePlugin$_get_default_max_threads(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_default_max_threads);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 171;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 171;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 171;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 171;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_max_threads;
    var_max_threads = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_info);
tmp_expression_value_9 = var_info;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 172;
tmp_assign_source_12 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_codec_str_plain_auto_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_codec;
    var_codec = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_codec);
tmp_cmp_expr_left_3 = var_codec;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_auto;
tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_instance_1 = module_var_accessor_PIL$AvifImagePlugin$_avif(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__avif);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_codec);
tmp_args_element_value_5 = var_codec;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 173;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_encoder_codec_available, tmp_args_element_value_5);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_8ddb1b773397dfb02ea57a5e2eee76a6;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 175;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 175;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_info);
tmp_expression_value_10 = var_info;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 176;
tmp_assign_source_13 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_range_str_plain_full_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_range_;
    var_range_ = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_info);
tmp_expression_value_11 = var_info;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_get);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 177;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_tile_rows_int_0_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_tile_rows_log2;
    var_tile_rows_log2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_info);
tmp_expression_value_12 = var_info;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 178;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_tile_cols_int_0_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_tile_cols_log2;
    var_tile_cols_log2 = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_info);
tmp_expression_value_13 = var_info;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 179;
tmp_value_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_alpha_premultiplied_false_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_alpha_premultiplied;
    var_alpha_premultiplied = tmp_assign_source_16;
    Py_INCREF(var_alpha_premultiplied);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_value_value_2;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_info);
tmp_expression_value_14 = var_info;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_plain_autotiling;
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(var_tile_cols_log2);
tmp_assign_source_18 = var_tile_cols_log2;
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_18;
    Py_INCREF(tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_tile_rows_log2);
tmp_cmp_expr_left_4 = var_tile_rows_log2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_19 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_args_element_value_7 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_args_element_value_7);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_5 = const_int_0;
tmp_args_element_value_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
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
outline_result_2:;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_value_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = (tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = var_autotiling;
    var_autotiling = tmp_assign_source_17;
    Py_INCREF(var_autotiling);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(var_info);
tmp_expression_value_15 = var_info;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_get);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_plain_icc_profile;
CHECK_OBJECT(par_im);
tmp_expression_value_17 = par_im;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_info);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 182;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 182;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 182;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain_icc_profile_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 182;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_icc_profile;
    var_icc_profile = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = const_int_pos_1;
{
    PyObject *old = var_exif_orientation;
    var_exif_orientation = tmp_assign_source_21;
    Py_INCREF(var_exif_orientation);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_3;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_info);
tmp_expression_value_18 = var_info;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_4;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 184;
tmp_assign_source_22 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_17, mod_consts.const_tuple_str_plain_exif_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_23 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_exif;
    var_exif = tmp_assign_source_23;
    Py_INCREF(var_exif);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 184;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_exif);
tmp_isinstance_inst_2 = var_exif;
tmp_expression_value_19 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Exif);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(var_exif);
tmp_assign_source_24 = var_exif;
{
    PyObject *old = var_exif_data;
    var_exif_data = tmp_assign_source_24;
    Py_INCREF(var_exif_data);
    Py_XDECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 188;
tmp_assign_source_25 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Exif);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif_data;
    var_exif_data = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_exif_data);
tmp_called_instance_3 = var_exif_data;
CHECK_OBJECT(var_exif);
tmp_args_element_value_10 = var_exif;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 189;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_load, tmp_args_element_value_10);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_end_6:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_PIL$AvifImagePlugin$ExifTags(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Base);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (var_exif_data == NULL) {
Py_DECREF(tmp_cmp_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_6 = var_exif_data;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
if (var_exif_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = var_exif_data;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_pop);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_24 = module_var_accessor_PIL$AvifImagePlugin$ExifTags(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ExifTags);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_Base);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Orientation);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 191;
tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif_orientation;
    assert(old != NULL);
    var_exif_orientation = tmp_assign_source_26;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_4;
PyObject *tmp_called_instance_4;
if (var_exif_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_4 = CHECK_IF_TRUE(var_exif_data);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (var_exif_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_4 = var_exif_data;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 192;
tmp_assign_source_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_tobytes);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_27 = const_bytes_empty;
Py_INCREF(tmp_assign_source_27);
condexpr_end_2:;
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_27;
    Py_DECREF(old);
}

}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(var_exif);
tmp_isinstance_inst_3 = var_exif;
tmp_expression_value_25 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Exif);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_5;
if (var_exif_data == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_5 = var_exif_data;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 194;
tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_tobytes);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_28;
    Py_DECREF(old);
}

}
branch_no_8:;
branch_end_7:;
branch_no_5:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(var_info);
tmp_expression_value_26 = var_info;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_get);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 196;
tmp_assign_source_29 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_19, mod_consts.const_tuple_str_plain_xmp_tuple);

CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_xmp;
    var_xmp = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(var_xmp);
tmp_isinstance_inst_4 = var_xmp;
tmp_isinstance_cls_4 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(var_xmp);
tmp_expression_value_27 = var_xmp;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_encode);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 199;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_20, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_xmp;
    assert(old != NULL);
    var_xmp = tmp_assign_source_30;
    Py_DECREF(old);
}

}
branch_no_9:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(var_info);
tmp_expression_value_28 = var_info;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_get);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 201;
tmp_assign_source_31 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_21, mod_consts.const_tuple_str_plain_advanced_tuple);

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_advanced;
    var_advanced = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_advanced);
tmp_cmp_expr_left_7 = var_advanced;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
CHECK_OBJECT(var_advanced);
tmp_isinstance_inst_5 = var_advanced;
tmp_isinstance_cls_5 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_advanced);
tmp_expression_value_29 = var_advanced;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_items);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 204;
tmp_assign_source_32 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_advanced;
    assert(old != NULL);
    var_advanced = tmp_assign_source_32;
    Py_DECREF(old);
}

}
branch_no_11:;
{
nuitka_bool tmp_assign_source_33;
tmp_assign_source_33 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_arg_1;
CHECK_OBJECT(var_advanced);
tmp_tuple_arg_1 = var_advanced;
tmp_assign_source_34 = PySequence_Tuple(tmp_tuple_arg_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_advanced;
    assert(old != NULL);
    var_advanced = tmp_assign_source_34;
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_35;
tmp_assign_source_35 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_35;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
nuitka_bool tmp_assign_source_36;
tmp_assign_source_36 = NUITKA_BOOL_TRUE;
var_invalid = tmp_assign_source_36;
}
goto branch_end_12;
branch_no_12:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 205;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame)) {
        frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto try_except_handler_6;
branch_end_12:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_9;
nuitka_bool tmp_cmp_expr_right_9;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_9 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
nuitka_bool tmp_assign_source_37;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_2;
int tmp_truth_name_5;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_2;
if (var_advanced == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_advanced);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = var_advanced;
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_2__$0;
    tmp_genexpr_2__$0 = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_any_arg_1 = MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_capi_result_2 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_capi_result_2);
assert(!(tmp_truth_name_5 == -1));
tmp_assign_source_37 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
var_invalid = tmp_assign_source_37;
}
branch_no_13:;
{
nuitka_bool tmp_condition_result_16;
if (var_invalid == NUITKA_BOOL_UNASSIGNED) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_invalid);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_condition_result_16 = var_invalid;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_a816eb837fb500b1fb19a3165d24a1e0;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 216;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 216;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto frame_exception_exit_1;
}
branch_no_14:;
branch_no_10:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_args_element_value_24;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_args_element_value_27;
tmp_expression_value_30 = module_var_accessor_PIL$AvifImagePlugin$_avif(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__avif);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_AvifEncoder);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_31 = par_im;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_size);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 220;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_subsampling);
tmp_args_element_value_13 = var_subsampling;
CHECK_OBJECT(var_quality);
tmp_args_element_value_14 = var_quality;
CHECK_OBJECT(var_speed);
tmp_args_element_value_15 = var_speed;
CHECK_OBJECT(var_max_threads);
tmp_args_element_value_16 = var_max_threads;
CHECK_OBJECT(var_codec);
tmp_args_element_value_17 = var_codec;
CHECK_OBJECT(var_range_);
tmp_args_element_value_18 = var_range_;
CHECK_OBJECT(var_tile_rows_log2);
tmp_args_element_value_19 = var_tile_rows_log2;
CHECK_OBJECT(var_tile_cols_log2);
tmp_args_element_value_20 = var_tile_cols_log2;
CHECK_OBJECT(var_alpha_premultiplied);
tmp_args_element_value_21 = var_alpha_premultiplied;
CHECK_OBJECT(var_autotiling);
tmp_args_element_value_22 = var_autotiling;
CHECK_OBJECT(var_icc_profile);
tmp_or_left_value_3 = var_icc_profile;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 231;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_or_right_value_3 = const_bytes_empty;
tmp_args_element_value_23 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_args_element_value_23 = tmp_or_left_value_3;
or_end_3:;
if (var_exif == NULL) {
Py_DECREF(tmp_called_value_23);
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 232;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_4 = var_exif;
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 232;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
tmp_or_right_value_4 = const_bytes_empty;
tmp_args_element_value_24 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_args_element_value_24 = tmp_or_left_value_4;
or_end_4:;
CHECK_OBJECT(var_exif_orientation);
tmp_args_element_value_25 = var_exif_orientation;
CHECK_OBJECT(var_xmp);
tmp_or_left_value_5 = var_xmp;
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 234;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
tmp_or_right_value_5 = const_bytes_empty;
tmp_args_element_value_26 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_args_element_value_26 = tmp_or_left_value_5;
or_end_5:;
if (var_advanced == NULL) {
Py_DECREF(tmp_called_value_23);
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_advanced);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_27 = var_advanced;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 219;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS16(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_enc;
    var_enc = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = const_int_0;
{
    PyObject *old = var_frame_idx;
    var_frame_idx = tmp_assign_source_40;
    Py_INCREF(var_frame_idx);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = const_int_0;
{
    PyObject *old = var_frame_duration;
    var_frame_duration = tmp_assign_source_41;
    Py_INCREF(var_frame_duration);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(par_im);
tmp_called_instance_6 = par_im;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 241;
tmp_assign_source_42 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_tell);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cur_idx;
    var_cur_idx = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_append_images);
tmp_operand_value_4 = var_append_images;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_im);
tmp_expression_value_32 = par_im;
tmp_name_value_1 = mod_consts.const_str_plain_is_animated;
tmp_default_value_1 = Py_False;
tmp_operand_value_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_1, tmp_default_value_1);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_assign_source_43 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_assign_source_43 = tmp_and_left_value_2;
and_end_2:;
{
    PyObject *old = var_is_single_frame;
    var_is_single_frame = tmp_assign_source_43;
    Py_INCREF(var_is_single_frame);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_iter_arg_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_list_element_2;
CHECK_OBJECT(par_im);
tmp_list_element_2 = par_im;
tmp_add_expr_left_2 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_2, 0, tmp_list_element_2);
CHECK_OBJECT(var_append_images);
tmp_add_expr_right_2 = var_append_images;
tmp_iter_arg_3 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_iter_arg_3 == NULL));
tmp_assign_source_44 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_45 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_45 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
exception_lineno = 244;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_46 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_ims;
    var_ims = tmp_assign_source_46;
    Py_INCREF(var_ims);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_28;
tmp_called_instance_7 = module_var_accessor_PIL$AvifImagePlugin$ImageSequence(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageSequence);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_ims);
tmp_args_element_value_28 = var_ims;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 245;
tmp_iter_arg_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_Iterator, tmp_args_element_value_28);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_47 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_48 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
exception_lineno = 245;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_48;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_49 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_frame;
    var_frame = tmp_assign_source_49;
    Py_INCREF(var_frame);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(var_frame);
tmp_expression_value_33 = var_frame;
tmp_assign_source_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_mode);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_rawmode;
    var_rawmode = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_34;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_34 = var_ims;
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_cmp_expr_right_10 = mod_consts.const_frozenset_b0bf2879ea2346e324ed8457de0532e2;
tmp_res = PySet_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
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
nuitka_bool tmp_condition_result_18;
PyObject *tmp_expression_value_35;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_6;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_35 = var_ims;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_has_transparency_data);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 249;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_18 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = mod_consts.const_str_plain_RGBA;
{
    PyObject *old = var_rawmode;
    assert(old != NULL);
    var_rawmode = tmp_assign_source_51;
    Py_INCREF(var_rawmode);
    Py_DECREF(old);
}

}
goto branch_end_16;
branch_no_16:;
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_expression_value_36;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_36 = var_ims;
tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(var_grayscale_modes) == NULL) {
Py_DECREF(tmp_cmp_expr_left_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_grayscale_modes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_cmp_expr_right_11 = Nuitka_Cell_GET(var_grayscale_modes);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_19 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = mod_consts.const_str_plain_L;
{
    PyObject *old = var_rawmode;
    assert(old != NULL);
    var_rawmode = tmp_assign_source_52;
    Py_INCREF(var_rawmode);
    Py_DECREF(old);
}

}
goto branch_end_17;
branch_no_17:;
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = mod_consts.const_str_plain_RGB;
{
    PyObject *old = var_rawmode;
    assert(old != NULL);
    var_rawmode = tmp_assign_source_53;
    Py_INCREF(var_rawmode);
    Py_DECREF(old);
}

}
branch_end_17:;
branch_end_16:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_29;
CHECK_OBJECT(var_frame);
tmp_called_instance_8 = var_frame;
CHECK_OBJECT(var_rawmode);
tmp_args_element_value_29 = var_rawmode;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 255;
tmp_assign_source_54 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_convert, tmp_args_element_value_29);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_frame;
    assert(old != NULL);
    var_frame = tmp_assign_source_54;
    Py_DECREF(old);
}

}
branch_no_15:;
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_isinstance_inst_6;
PyObject *tmp_isinstance_cls_6;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_isinstance_inst_6 = var_duration;
tmp_isinstance_cls_6 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_1;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_37 = var_duration;
if (var_frame_idx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame_idx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 259;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_subscript_value_1 = var_frame_idx;
tmp_assign_source_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_1);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_frame_duration;
    var_frame_duration = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
goto branch_end_18;
branch_no_18:;
{
PyObject *tmp_assign_source_56;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_assign_source_56 = var_duration;
{
    PyObject *old = var_frame_duration;
    var_frame_duration = tmp_assign_source_56;
    Py_INCREF(var_frame_duration);
    Py_XDECREF(old);
}

}
branch_end_18:;
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_38;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_30;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
if (var_enc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_38 = var_enc;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_add);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
if (var_frame == NULL) {
Py_DECREF(tmp_called_value_24);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_39 = var_frame;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_tobytes);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 265;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_31 = mod_consts.const_str_plain_raw;
if (var_rawmode == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_called_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rawmode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_32 = var_rawmode;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 265;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_frame_duration);
tmp_args_element_value_33 = var_frame_duration;
if (var_frame == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_args_element_value_30);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_40 = var_frame;
tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_size);
if (tmp_args_element_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_args_element_value_30);

exception_lineno = 267;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
if (var_rawmode == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rawmode);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_35 = var_rawmode;
if (var_is_single_frame == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_single_frame);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 269;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_36 = var_is_single_frame;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 264;
{
    PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_frame_idx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame_idx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_1 = var_frame_idx;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_57 = tmp_iadd_expr_left_1;
var_frame_idx = tmp_assign_source_57;

}
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(par_save_all);
tmp_operand_value_6 = par_save_all;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_21 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
goto loop_end_2;
branch_no_19:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_10;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_9;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_9;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_8;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_37;
CHECK_OBJECT(par_im);
tmp_called_instance_9 = par_im;
CHECK_OBJECT(var_cur_idx);
tmp_args_element_value_37 = var_cur_idx;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 279;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_seek, tmp_args_element_value_37);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 243;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame)) {
        frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto try_except_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_10;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_38;
CHECK_OBJECT(par_im);
tmp_called_instance_10 = par_im;
CHECK_OBJECT(var_cur_idx);
tmp_args_element_value_38 = var_cur_idx;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 279;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_seek, tmp_args_element_value_38);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_instance_11;
if (var_enc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_11 = var_enc;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 282;
tmp_assign_source_58 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts.const_str_plain_finish);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_12 = var_data;
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_517cf5f5a339e9fbc17d8aa2352269e4;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 285;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 285;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
goto frame_exception_exit_1;
}
branch_no_20:;
{
PyObject *tmp_called_instance_12;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_39;
CHECK_OBJECT(par_fp);
tmp_called_instance_12 = par_fp;
CHECK_OBJECT(var_data);
tmp_args_element_value_39 = var_data;
frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame.f_lineno = 287;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_write, tmp_args_element_value_39);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooooocboNoooooooooooooooobooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$function__10__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$function__10__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$function__10__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    par_save_all,
    var_info,
    var_append_images,
    var_grayscale_modes,
    (int)var_grayscale,
    var_quality,
    NULL,
    var_duration,
    var_subsampling,
    var_speed,
    var_max_threads,
    var_codec,
    var_range_,
    var_tile_rows_log2,
    var_tile_cols_log2,
    var_alpha_premultiplied,
    var_autotiling,
    var_icc_profile,
    var_exif_orientation,
    var_exif,
    var_exif_data,
    var_xmp,
    var_advanced,
    (int)var_invalid,
    var_enc,
    var_frame_idx,
    var_frame_duration,
    var_cur_idx,
    var_is_single_frame,
    var_ims,
    var_frame,
    var_rawmode,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_PIL$AvifImagePlugin$$$function__10__save == cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save);
    cache_frame_frame_PIL$AvifImagePlugin$$$function__10__save = NULL;
}

assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$function__10__save);

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
CHECK_OBJECT(var_info);
CHECK_OBJECT(var_info);
Py_DECREF(var_info);
var_info = NULL;
CHECK_OBJECT(var_append_images);
CHECK_OBJECT(var_append_images);
Py_DECREF(var_append_images);
var_append_images = NULL;
CHECK_OBJECT(var_grayscale_modes);
CHECK_OBJECT(var_grayscale_modes);
Py_DECREF(var_grayscale_modes);
var_grayscale_modes = NULL;
assert(var_grayscale != NUITKA_BOOL_UNASSIGNED);
var_grayscale = NUITKA_BOOL_UNASSIGNED;
CHECK_OBJECT(var_quality);
CHECK_OBJECT(var_quality);
Py_DECREF(var_quality);
var_quality = NULL;
Py_XDECREF(var_duration);
var_duration = NULL;
CHECK_OBJECT(var_subsampling);
CHECK_OBJECT(var_subsampling);
Py_DECREF(var_subsampling);
var_subsampling = NULL;
CHECK_OBJECT(var_speed);
CHECK_OBJECT(var_speed);
Py_DECREF(var_speed);
var_speed = NULL;
CHECK_OBJECT(var_max_threads);
CHECK_OBJECT(var_max_threads);
Py_DECREF(var_max_threads);
var_max_threads = NULL;
CHECK_OBJECT(var_codec);
CHECK_OBJECT(var_codec);
Py_DECREF(var_codec);
var_codec = NULL;
CHECK_OBJECT(var_range_);
CHECK_OBJECT(var_range_);
Py_DECREF(var_range_);
var_range_ = NULL;
CHECK_OBJECT(var_tile_rows_log2);
CHECK_OBJECT(var_tile_rows_log2);
Py_DECREF(var_tile_rows_log2);
var_tile_rows_log2 = NULL;
CHECK_OBJECT(var_tile_cols_log2);
CHECK_OBJECT(var_tile_cols_log2);
Py_DECREF(var_tile_cols_log2);
var_tile_cols_log2 = NULL;
CHECK_OBJECT(var_alpha_premultiplied);
CHECK_OBJECT(var_alpha_premultiplied);
Py_DECREF(var_alpha_premultiplied);
var_alpha_premultiplied = NULL;
CHECK_OBJECT(var_autotiling);
CHECK_OBJECT(var_autotiling);
Py_DECREF(var_autotiling);
var_autotiling = NULL;
CHECK_OBJECT(var_icc_profile);
CHECK_OBJECT(var_icc_profile);
Py_DECREF(var_icc_profile);
var_icc_profile = NULL;
CHECK_OBJECT(var_exif_orientation);
CHECK_OBJECT(var_exif_orientation);
Py_DECREF(var_exif_orientation);
var_exif_orientation = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_exif_data);
var_exif_data = NULL;
CHECK_OBJECT(var_xmp);
CHECK_OBJECT(var_xmp);
Py_DECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_advanced);
var_advanced = NULL;
var_invalid = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_enc);
var_enc = NULL;
Py_XDECREF(var_frame_idx);
var_frame_idx = NULL;
Py_XDECREF(var_frame_duration);
var_frame_duration = NULL;
CHECK_OBJECT(var_cur_idx);
CHECK_OBJECT(var_cur_idx);
Py_DECREF(var_cur_idx);
var_cur_idx = NULL;
Py_XDECREF(var_is_single_frame);
var_is_single_frame = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_info);
var_info = NULL;
Py_XDECREF(var_append_images);
var_append_images = NULL;
CHECK_OBJECT(var_grayscale_modes);
CHECK_OBJECT(var_grayscale_modes);
Py_DECREF(var_grayscale_modes);
var_grayscale_modes = NULL;
var_grayscale = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_quality);
var_quality = NULL;
Py_XDECREF(var_duration);
var_duration = NULL;
Py_XDECREF(var_subsampling);
var_subsampling = NULL;
Py_XDECREF(var_speed);
var_speed = NULL;
Py_XDECREF(var_max_threads);
var_max_threads = NULL;
Py_XDECREF(var_codec);
var_codec = NULL;
Py_XDECREF(var_range_);
var_range_ = NULL;
Py_XDECREF(var_tile_rows_log2);
var_tile_rows_log2 = NULL;
Py_XDECREF(var_tile_cols_log2);
var_tile_cols_log2 = NULL;
Py_XDECREF(var_alpha_premultiplied);
var_alpha_premultiplied = NULL;
Py_XDECREF(var_autotiling);
var_autotiling = NULL;
Py_XDECREF(var_icc_profile);
var_icc_profile = NULL;
Py_XDECREF(var_exif_orientation);
var_exif_orientation = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_exif_data);
var_exif_data = NULL;
Py_XDECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_advanced);
var_advanced = NULL;
var_invalid = NUITKA_BOOL_UNASSIGNED;
Py_XDECREF(var_enc);
var_enc = NULL;
Py_XDECREF(var_frame_idx);
var_frame_idx = NULL;
Py_XDECREF(var_frame_duration);
var_frame_duration = NULL;
Py_XDECREF(var_cur_idx);
var_cur_idx = NULL;
Py_XDECREF(var_is_single_frame);
var_is_single_frame = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_rawmode);
var_rawmode = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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
CHECK_OBJECT(par_save_all);
Py_DECREF(par_save_all);
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
CHECK_OBJECT(par_save_all);
Py_DECREF(par_save_all);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_locals {
PyObject *var_ims;
PyObject *var_frame;
PyObject *tmp_contraction_iter_0;
PyObject *tmp_iter_value_0;
PyObject *tmp_iter_value_1;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_ims = NULL;
generator_heap->var_frame = NULL;
generator_heap->tmp_contraction_iter_0 = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_iter_value_1 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_50cf59c7c6b8c6929bc0c141b5523719, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Nooc";
generator_heap->exception_lineno = 157;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_1;
    generator_heap->tmp_iter_value_1 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_1);
tmp_assign_source_2 = generator_heap->tmp_iter_value_1;
{
    PyObject *old = generator_heap->var_ims;
    generator_heap->var_ims = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_ims);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_PIL$AvifImagePlugin$ImageSequence(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ImageSequence);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 160;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_ims);
tmp_args_element_value_1 = generator_heap->var_ims;
generator->m_frame->m_frame.f_lineno = 160;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Iterator, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 160;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 160;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_contraction_iter_0;
    generator_heap->tmp_contraction_iter_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_contraction_iter_0);
tmp_next_source_2 = generator_heap->tmp_contraction_iter_0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Nooc";
generator_heap->exception_lineno = 157;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_5 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_frame;
    generator_heap->var_frame = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_frame);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_frame);
tmp_expression_value_2 = generator_heap->var_frame;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_grayscale_modes);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 158;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 157;
generator_heap->type_description_1 = "Nooc";
    goto try_except_handler_2;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(generator_heap->tmp_contraction_iter_0);
CHECK_OBJECT(generator_heap->tmp_contraction_iter_0);
Py_DECREF(generator_heap->tmp_contraction_iter_0);
generator_heap->tmp_contraction_iter_0 = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 157;
generator_heap->type_description_1 = "Nooc";
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
Py_XDECREF(generator_heap->tmp_contraction_iter_0);
generator_heap->tmp_contraction_iter_0 = NULL;
Py_XDECREF(generator_heap->tmp_iter_value_1);
generator_heap->tmp_iter_value_1 = NULL;
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
    generator_heap->var_ims,
    generator_heap->var_frame,
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

Py_XDECREF(generator_heap->var_ims);
generator_heap->var_ims = NULL;
Py_XDECREF(generator_heap->var_frame);
generator_heap->var_frame = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->tmp_contraction_iter_0);
generator_heap->tmp_contraction_iter_0 = NULL;
Py_XDECREF(generator_heap->tmp_iter_value_1);
generator_heap->tmp_iter_value_1 = NULL;
Py_XDECREF(generator_heap->var_ims);
generator_heap->var_ims = NULL;
Py_XDECREF(generator_heap->var_frame);
generator_heap->var_frame = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_context,
        module_PIL$AvifImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610,
#endif
        code_objects_50cf59c7c6b8c6929bc0c141b5523719,
        closure,
        2,
#if 1
        sizeof(struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_locals {
PyObject *var_v;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_locals *generator_heap = (struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_872d887760421dd78288b17652d847cc, module_PIL$AvifImagePlugin, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 210;
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
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_or_right_value_1_cbool_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_v);
tmp_isinstance_inst_1 = generator_heap->var_v;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(generator_heap->var_v);
tmp_len_arg_1 = generator_heap->var_v;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 2;
tmp_tmp_or_right_value_1_cbool_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_or_right_value_1 = (tmp_tmp_or_right_value_1_cbool_1 != false) ? Py_True : Py_False;
tmp_expression_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_1 = tmp_or_left_value_1;
or_end_1:;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), &tmp_tmp_or_right_value_1_cbool_1, sizeof(bool), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_operand_value_1, sizeof(PyObject *), &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), &tmp_tmp_or_right_value_1_cbool_1, sizeof(bool), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
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


generator_heap->exception_lineno = 210;
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
    generator_heap->var_v
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

static PyObject *MAKE_GENERATOR_PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_context,
        module_PIL$AvifImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7120d4204cc4762ca7a220b081a44610,
#endif
        code_objects_872d887760421dd78288b17652d847cc,
        closure,
        1,
#if 1
        sizeof(struct PIL$AvifImagePlugin$$$function__10__save$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__10__save(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__10__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4d76aa4d6bfe447a34106e2022e9c52e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__1_get_codec_version(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__1_get_codec_version,
        mod_consts.const_str_plain_get_codec_version,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4a10501c71452770fe7314fa6fad4ae9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__2__accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__2__accept,
        mod_consts.const_str_plain__accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7e5f8053f13001437990c2f4d333bc02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__3__get_default_max_threads(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__3__get_default_max_threads,
        mod_consts.const_str_plain__get_default_max_threads,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_12500d91bc5f6711389c6a10c83d43c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__4__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__4__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7cce82e56eaa7bffb2844c3be70ef6a3,
#endif
        code_objects_5b369b06a0ade57fa9c1e18e4fa6610e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__5_seek(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__5_seek,
        mod_consts.const_str_plain_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea9af4edfd3e74a3afe17b5f993d5993,
#endif
        code_objects_5fc527b591db686345510250ff584ae2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__6_load(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__6_load,
        mod_consts.const_str_plain_load,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4b16d370bde217b7f833c3701221c8b,
#endif
        code_objects_263184142534d5d948cd92f42acdf1ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__7_load_seek(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_load_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b0e1d2016e1b385c673a65b392bc387,
#endif
        code_objects_89ac09d6ba9654eda4487f8de8aafe7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__8_tell(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__8_tell,
        mod_consts.const_str_plain_tell,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6209b83aaac4e046d8dd88b6aed2fbbd,
#endif
        code_objects_391e093aa3c2533a9c3d35bb4132578c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__9__save_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$AvifImagePlugin$$$function__9__save_all,
        mod_consts.const_str_plain__save_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_394d63abf7e5c4127d8e442c1e8fb8d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$AvifImagePlugin,
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

static function_impl_code const function_table_PIL$AvifImagePlugin[] = {
impl_PIL$AvifImagePlugin$$$function__1_get_codec_version,
impl_PIL$AvifImagePlugin$$$function__2__accept,
impl_PIL$AvifImagePlugin$$$function__3__get_default_max_threads,
impl_PIL$AvifImagePlugin$$$function__4__open,
impl_PIL$AvifImagePlugin$$$function__5_seek,
impl_PIL$AvifImagePlugin$$$function__6_load,
impl_PIL$AvifImagePlugin$$$function__8_tell,
impl_PIL$AvifImagePlugin$$$function__9__save_all,
impl_PIL$AvifImagePlugin$$$function__10__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$AvifImagePlugin);
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
        module_PIL$AvifImagePlugin,
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
        function_table_PIL$AvifImagePlugin,
        sizeof(function_table_PIL$AvifImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.AvifImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$AvifImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$AvifImagePlugin");

    // Store the module for future use.
    module_PIL$AvifImagePlugin = module;

    moduledict_PIL$AvifImagePlugin = MODULE_DICT(module_PIL$AvifImagePlugin);

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
        PRINT_STRING("PIL$AvifImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$AvifImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$AvifImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.AvifImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$AvifImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$AvifImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$AvifImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$AvifImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$AvifImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$AvifImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$AvifImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$AvifImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyCellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$AvifImagePlugin = MAKE_MODULE_FRAME(code_objects_f490de9bc91d003408e8262ffc0cb575, module_PIL$AvifImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$AvifImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$AvifImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_7);
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
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$AvifImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_142f9b07e91ae3b1fda0c171e9459ca4_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 7;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

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
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain_ExifTags,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ExifTags);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ExifTags, tmp_assign_source_10);
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
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_11);
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
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain_ImageSequence,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ImageSequence);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageSequence, tmp_assign_source_13);
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
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$AvifImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__avif_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$AvifImagePlugin,
        mod_consts.const_str_plain__avif,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__avif);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__avif, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_True;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED, tmp_assign_source_15);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin, exception_keeper_lineno_2);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED, tmp_assign_source_16);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 9;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$AvifImagePlugin->m_frame)) {
        frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_plain_auto;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DECODE_CODEC_CHOICE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = const_int_0;
UPDATE_STRING_DICT0(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_THREADS, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_06ec63c5a733e780ca6e09fdcb73ec31);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__1_get_codec_version(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_codec_version, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__2__accept(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__3__get_default_max_threads(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_default_max_threads, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$AvifImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ImageFile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
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

    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_26;
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

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_AvifImageFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 65;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
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


exception_lineno = 65;

    goto try_except_handler_4;
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
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_4;
}
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 65;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
branch_end_2:;
{
PyObject *tmp_assign_source_28;
outline_0_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_6b692ef4d3f2d9bf1a400d8f3f7fa611;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_AvifImageFile;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_65;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_9d776f340f654b7e20906ea170ba9d21, module_PIL$AvifImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2, locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2);
assert(Py_REFCNT(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_AVIF;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_d8c305a8239fb74c71fffc557c0c42bf;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_int_neg_1;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain__AvifImageFile__frame, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__4__open(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);

tmp_dictset_value = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__5_seek(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__6_load(tstate, tmp_annotations_6, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain_load, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);

tmp_dictset_value = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__7_load_seek(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain_load_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__8_tell(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain_tell, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$AvifImagePlugin$$$class__1_AvifImageFile_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_1862838fe310ce5b63a7094de3597238_tuple;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
branch_no_4:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_AvifImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_1, const_str_plain___classcell__, (PyObject *)outline_0_var___class__);
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_0_var___class__);
    PyCell_SET((PyObject *)outline_0_var___class__, tmp_assign_source_29);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_0_var___class__));
tmp_assign_source_28 = PyCell_GET((PyObject *)outline_0_var___class__);
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65);
locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65);
locals_PIL$AvifImagePlugin$$$class__1_AvifImageFile_65 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
assert(PyCell_Check((PyObject *)outline_0_var___class__));
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 65;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_AvifImageFile, tmp_assign_source_28);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_30 = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__9__save_all(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_10;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_f79bc48f6f2d3752cd1057d1dfe4fc32);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_31 = MAKE_FUNCTION_PIL$AvifImagePlugin$$$function__10__save(tstate, tmp_defaults_1, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_31);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_8 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_register_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$AvifImagePlugin$_accept(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 290;

    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 290;
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


exception_lineno = 290;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_PIL$AvifImagePlugin$SUPPORTED(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUPPORTED);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_5;
tmp_expression_value_10 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_register_save);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 292;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 292;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_PIL$AvifImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 292;

    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 292;
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


exception_lineno = 292;

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
tmp_expression_value_12 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_register_save_all);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto frame_exception_exit_1;
}
tmp_expression_value_13 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 293;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_format);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 293;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_PIL$AvifImagePlugin$_save_all(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save_all);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 293;

    goto frame_exception_exit_1;
}
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 293;
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


exception_lineno = 293;

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
tmp_expression_value_14 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_register_extensions);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 294;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_format);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 294;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = MAKE_LIST2(tstate, mod_consts.const_str_digest_4c255179afcd98a7551aed8d3cfd4abc,mod_consts.const_str_digest_79656bd4542a30d84efa5e4887596212);
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 294;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_11;
tmp_expression_value_16 = module_var_accessor_PIL$AvifImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_register_mime);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_PIL$AvifImagePlugin$AvifImageFile(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AvifImageFile);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 295;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_format);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 295;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_9a7ee580c9f13e62971987f60f4205ec;
frame_frame_PIL$AvifImagePlugin->m_frame.f_lineno = 295;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$AvifImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$AvifImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$AvifImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$AvifImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$AvifImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.AvifImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$AvifImagePlugin);
    return module_PIL$AvifImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$AvifImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$AvifImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
