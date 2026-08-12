/* Generated code for Python module 'PIL$WebPImagePlugin'
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



/* The "module_PIL$WebPImagePlugin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$WebPImagePlugin;
PyDictObject *moduledict_PIL$WebPImagePlugin;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_startswith;
PyObject *const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple;
PyObject *const_slice_int_pos_8_int_pos_12_none;
PyObject *const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd;
PyObject *const_slice_int_pos_12_int_pos_16_none;
PyObject *const_str_plain__VP8_MODES_BY_IDENTIFIER;
PyObject *const_str_plain_SUPPORTED;
PyObject *const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607;
PyObject *const_str_plain_fp;
PyObject *const_str_plain__accept;
PyObject *const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4;
PyObject *const_str_plain__webp;
PyObject *const_str_plain_WebPAnimDecoder;
PyObject *const_str_plain__decoder;
PyObject *const_str_plain_get_info;
PyObject *const_str_plain__size;
PyObject *const_str_plain_info;
PyObject *const_str_plain_loop;
PyObject *const_str_plain_n_frames;
PyObject *const_str_plain_rawmode;
PyObject *const_int_pos_16;
PyObject *const_int_pos_255;
PyObject *const_int_pos_8;
PyObject *const_int_pos_24;
PyObject *const_str_plain_background;
PyObject *const_str_plain_is_animated;
PyObject *const_str_plain_RGBX;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain__mode;
PyObject *const_dict_309bc1629011a57e24d9516fa6b78b3a;
PyObject *const_str_plain_self;
PyObject *const_str_plain_get_chunk;
PyObject *const_str_plain__reset;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_reset_tuple;
PyObject *const_str_plain_exif;
PyObject *const_str_plain_getexif;
PyObject *const_str_plain__get_merged_dict;
PyObject *const_str_plain__seek_check;
PyObject *const_str_plain__WebPImageFile__logical_frame;
PyObject *const_str_plain_reset;
PyObject *const_str_plain__WebPImageFile__physical_frame;
PyObject *const_str_plain__WebPImageFile__loaded;
PyObject *const_str_plain__WebPImageFile__timestamp;
PyObject *const_str_plain_get_next;
PyObject *const_str_plain_seek;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923;
PyObject *const_str_plain__get_next;
PyObject *const_str_plain__seek;
PyObject *const_str_plain_timestamp;
PyObject *const_str_plain_duration;
PyObject *const_str_plain__exclusive_fp;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain__Tile;
PyObject *const_str_plain_raw;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_size;
PyObject *const_str_plain_tile;
PyObject *const_str_plain_load;
PyObject *const_str_plain_mode;
PyObject *const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple;
PyObject *const_str_plain_convert;
PyObject *const_str_plain_has_transparency_data;
PyObject *const_str_plain_RGBA;
PyObject *const_str_plain_im;
PyObject *const_str_plain_encoderinfo;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_append_images;
PyObject *const_str_plain_total;
PyObject *const_str_plain__save;
PyObject *const_tuple_int_0_int_0_int_0_int_0_tuple;
PyObject *const_str_plain_getpalette;
PyObject *const_int_pos_3;
PyObject *const_tuple_str_plain_duration_int_0_tuple;
PyObject *const_tuple_str_plain_loop_int_0_tuple;
PyObject *const_tuple_str_plain_minimize_size_false_tuple;
PyObject *const_tuple_str_plain_kmin_none_tuple;
PyObject *const_tuple_str_plain_kmax_none_tuple;
PyObject *const_tuple_str_plain_allow_mixed_false_tuple;
PyObject *const_tuple_str_plain_lossless_false_tuple;
PyObject *const_tuple_str_plain_quality_int_pos_80_tuple;
PyObject *const_tuple_str_plain_alpha_quality_int_pos_100_tuple;
PyObject *const_tuple_str_plain_method_int_0_tuple;
PyObject *const_tuple_str_plain_icc_profile_tuple;
PyObject *const_tuple_str_plain_exif_str_empty_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_Exif;
PyObject *const_str_plain_tobytes;
PyObject *const_tuple_str_plain_xmp_str_empty_tuple;
PyObject *const_int_pos_9;
PyObject *const_int_pos_17;
PyObject *const_int_pos_5;
PyObject *const_tuple_type_list_type_tuple_tuple;
PyObject *const_str_digest_a74c20155f1af6f5cc194929ee9c8680;
PyObject *const_str_plain_WebPAnimEncoder;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_ims;
PyObject *const_str_plain__convert_frame;
PyObject *const_str_plain_enc;
PyObject *const_str_plain_add;
PyObject *const_str_plain_getim;
PyObject *const_str_plain_round;
PyObject *const_str_plain_lossless;
PyObject *const_str_plain_quality;
PyObject *const_str_plain_alpha_quality;
PyObject *const_str_plain_method;
PyObject *const_str_plain_frame_idx;
PyObject *const_str_plain_assemble;
PyObject *const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad;
PyObject *const_str_plain_write;
PyObject *const_int_pos_256;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_765d8b4d057934e76a7896ad710d1a29;
PyObject *const_tuple_str_plain_exif_bytes_empty_tuple;
PyObject *const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple;
PyObject *const_slice_int_pos_6_none_none;
PyObject *const_tuple_str_plain_method_int_pos_4_tuple;
PyObject *const_tuple_str_plain_exact_tuple;
PyObject *const_str_plain_WebPEncode;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
PyObject *const_tuple_str_plain__webp_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_dict_5a33a4ae2c096983451c6b790db6c852;
PyObject *const_dict_9aa70217f5a39f0e37caeb95ab54b439;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_WebPImageFile;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_41af1f0fb42323296cd08c30c4725051;
PyObject *const_int_pos_39;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_WEBP;
PyObject *const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b;
PyObject *const_str_plain_format_description;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain__open;
PyObject *const_str_digest_d03755c48a2023b5e8dc014bcfb0d542;
PyObject *const_dict_3f959f77f64cad21cbafb49fc395b91e;
PyObject *const_str_plain__getexif;
PyObject *const_str_digest_eaeee61a23c53ca102ba3671b24cc922;
PyObject *const_dict_d4b5230838d4aaf3fa77f9421d5420a0;
PyObject *const_str_digest_6d8cb699b1283c318e47cca1af43e48b;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_c248b82cf844439399506fbc42de2d9a;
PyObject *const_str_digest_9290b67dd95fbc331ea397a04a4d4427;
PyObject *const_dict_0584357c15fbc1791a5ea5733a87b982;
PyObject *const_str_digest_a009cf55be81f997679243107bd112e4;
PyObject *const_str_digest_05c44758799635fbeea3b2b0701e8828;
PyObject *const_dict_a37b02cbeb5af50e659ce64a4824e55a;
PyObject *const_str_digest_780fbf4ee691f1c073b1b60039b07046;
PyObject *const_dict_ed6f90097ef68649ee7ba7c17849bdd4;
PyObject *const_str_plain_load_seek;
PyObject *const_str_digest_1ad69428cd0c38d630ab05c314924d6b;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_95d97d8e4404646cb39ab01289c612a8;
PyObject *const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_2070848e24313d5331c03bd584ce8f2d;
PyObject *const_dict_b018ccd271180f61287e4749ac87b316;
PyObject *const_str_plain__save_all;
PyObject *const_str_plain_register_open;
PyObject *const_str_plain_register_save;
PyObject *const_str_plain_register_save_all;
PyObject *const_str_plain_register_extension;
PyObject *const_str_digest_007ae19f9470b6343c7f97ec5accb9e4;
PyObject *const_str_plain_register_mime;
PyObject *const_str_digest_6dc3951e06305e776d52c45f96e8d674;
PyObject *const_str_digest_6d0794ca5d5e00544870e53ba9ff4250;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple;
PyObject *const_str_digest_b905a81943ed98609858b9beb8af4a2f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple;
PyObject *const_tuple_str_plain_im_tuple;
PyObject *const_tuple_c7170a1274926811eaaa31030195f7f1_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_reset_tuple;
PyObject *const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple;
PyObject *const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_pos_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[189];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.WebPImagePlugin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 189) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 189 values, got %d\n",
                    UN_TRANSLATE("PIL.WebPImagePlugin"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple", mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_int_pos_12_none", mod_consts.const_slice_int_pos_8_int_pos_12_none);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_int_pos_12_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd", mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_12_int_pos_16_none", mod_consts.const_slice_int_pos_12_int_pos_16_none);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_12_int_pos_16_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER", mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUPPORTED", mod_consts.const_str_plain_SUPPORTED);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUPPORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607", mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__accept);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4", mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__webp", mod_consts.const_str_plain__webp);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__webp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPAnimDecoder", mod_consts.const_str_plain_WebPAnimDecoder);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebPAnimDecoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decoder", mod_consts.const_str_plain__decoder);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__decoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_info", mod_consts.const_str_plain_get_info);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_loop", mod_consts.const_str_plain_loop);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_loop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_background", mod_consts.const_str_plain_background);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_background);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_animated", mod_consts.const_str_plain_is_animated);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_animated);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBX", mod_consts.const_str_plain_RGBX);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a", mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_chunk", mod_consts.const_str_plain_get_chunk);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_chunk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__reset", mod_consts.const_str_plain__reset);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__reset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reset_tuple", mod_consts.const_tuple_str_plain_reset_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reset_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getexif", mod_consts.const_str_plain_getexif);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_getexif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_merged_dict", mod_consts.const_str_plain__get_merged_dict);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_merged_dict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek_check", mod_consts.const_str_plain__seek_check);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__seek_check);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__logical_frame", mod_consts.const_str_plain__WebPImageFile__logical_frame);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__logical_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reset", mod_consts.const_str_plain_reset);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__physical_frame", mod_consts.const_str_plain__WebPImageFile__physical_frame);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__physical_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__loaded", mod_consts.const_str_plain__WebPImageFile__loaded);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__loaded);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__timestamp", mod_consts.const_str_plain__WebPImageFile__timestamp);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__timestamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_next", mod_consts.const_str_plain_get_next);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_next);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923", mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_next", mod_consts.const_str_plain__get_next);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_next);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek", mod_consts.const_str_plain__seek);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duration", mod_consts.const_str_plain_duration);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_duration);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__exclusive_fp", mod_consts.const_str_plain__exclusive_fp);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__exclusive_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_tile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_transparency_data", mod_consts.const_str_plain_has_transparency_data);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_transparency_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_images);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_total);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_duration_int_0_tuple", mod_consts.const_tuple_str_plain_duration_int_0_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_duration_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_loop_int_0_tuple", mod_consts.const_tuple_str_plain_loop_int_0_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_minimize_size_false_tuple", mod_consts.const_tuple_str_plain_minimize_size_false_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minimize_size_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kmin_none_tuple", mod_consts.const_tuple_str_plain_kmin_none_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kmin_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kmax_none_tuple", mod_consts.const_tuple_str_plain_kmax_none_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kmax_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_allow_mixed_false_tuple", mod_consts.const_tuple_str_plain_allow_mixed_false_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allow_mixed_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_lossless_false_tuple", mod_consts.const_tuple_str_plain_lossless_false_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lossless_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple", mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple", mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_method_int_0_tuple", mod_consts.const_tuple_str_plain_method_int_0_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_icc_profile_tuple", mod_consts.const_tuple_str_plain_icc_profile_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_icc_profile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_str_empty_tuple", mod_consts.const_tuple_str_plain_exif_str_empty_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Exif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_xmp_str_empty_tuple", mod_consts.const_tuple_str_plain_xmp_str_empty_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_xmp_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_list_type_tuple_tuple", mod_consts.const_tuple_type_list_type_tuple_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680", mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPAnimEncoder", mod_consts.const_str_plain_WebPAnimEncoder);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebPAnimEncoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_ims);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert_frame", mod_consts.const_str_plain__convert_frame);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__convert_frame);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enc", mod_consts.const_str_plain_enc);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_enc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_getim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lossless", mod_consts.const_str_plain_lossless);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_lossless);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quality", mod_consts.const_str_plain_quality);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_quality);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alpha_quality", mod_consts.const_str_plain_alpha_quality);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_alpha_quality);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame_idx", mod_consts.const_str_plain_frame_idx);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_frame_idx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assemble", mod_consts.const_str_plain_assemble);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_assemble);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad", mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29", mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple", mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple", mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_6_none_none", mod_consts.const_slice_int_pos_6_none_none);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_6_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_method_int_pos_4_tuple", mod_consts.const_tuple_str_plain_method_int_pos_4_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exact_tuple", mod_consts.const_tuple_str_plain_exact_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exact_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPEncode", mod_consts.const_str_plain_WebPEncode);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebPEncode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__webp_tuple", mod_consts.const_tuple_str_plain__webp_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__webp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852", mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439", mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPImageFile", mod_consts.const_str_plain_WebPImageFile);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebPImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051", mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_39", mod_consts.const_int_pos_39);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WEBP", mod_consts.const_str_plain_WEBP);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_WEBP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b", mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542", mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e", mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getexif", mod_consts.const_str_plain__getexif);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain__getexif);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922", mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0", mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b", mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a", mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427", mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982", mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4", mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828", mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a", mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046", mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4", mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_seek", mod_consts.const_str_plain_load_seek);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b", mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8", mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple", mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d", mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain__save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4", mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674", mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250", mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f", mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple", mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_tuple", mod_consts.const_tuple_str_plain_im_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple", mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple", mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple", mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple", mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple", mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple", mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
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
void checkModuleConstants_PIL$WebPImagePlugin(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple", mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple) && "mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_8_int_pos_12_none", mod_consts.const_slice_int_pos_8_int_pos_12_none);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_8_int_pos_12_none) && "mod_consts.const_slice_int_pos_8_int_pos_12_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd", mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd) && "mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_12_int_pos_16_none", mod_consts.const_slice_int_pos_12_int_pos_16_none);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_12_int_pos_16_none) && "mod_consts.const_slice_int_pos_12_int_pos_16_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER", mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER) && "mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SUPPORTED", mod_consts.const_str_plain_SUPPORTED);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUPPORTED) && "mod_consts.const_str_plain_SUPPORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607", mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607) && "mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__accept", mod_consts.const_str_plain__accept);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__accept) && "mod_consts.const_str_plain__accept");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4", mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4) && "mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__webp", mod_consts.const_str_plain__webp);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__webp) && "mod_consts.const_str_plain__webp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPAnimDecoder", mod_consts.const_str_plain_WebPAnimDecoder);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebPAnimDecoder) && "mod_consts.const_str_plain_WebPAnimDecoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decoder", mod_consts.const_str_plain__decoder);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__decoder) && "mod_consts.const_str_plain__decoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_info", mod_consts.const_str_plain_get_info);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_info) && "mod_consts.const_str_plain_get_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__size", mod_consts.const_str_plain__size);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__size) && "mod_consts.const_str_plain__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_loop", mod_consts.const_str_plain_loop);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_loop) && "mod_consts.const_str_plain_loop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n_frames", mod_consts.const_str_plain_n_frames);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_n_frames) && "mod_consts.const_str_plain_n_frames");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rawmode", mod_consts.const_str_plain_rawmode);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_rawmode) && "mod_consts.const_str_plain_rawmode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_24", mod_consts.const_int_pos_24);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_24) && "mod_consts.const_int_pos_24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_background", mod_consts.const_str_plain_background);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_background) && "mod_consts.const_str_plain_background");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_animated", mod_consts.const_str_plain_is_animated);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_animated) && "mod_consts.const_str_plain_is_animated");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBX", mod_consts.const_str_plain_RGBX);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBX) && "mod_consts.const_str_plain_RGBX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mode", mod_consts.const_str_plain__mode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__mode) && "mod_consts.const_str_plain__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a", mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a) && "mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_self", mod_consts.const_str_plain_self);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_self) && "mod_consts.const_str_plain_self");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_chunk", mod_consts.const_str_plain_get_chunk);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_chunk) && "mod_consts.const_str_plain_get_chunk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__reset", mod_consts.const_str_plain__reset);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__reset) && "mod_consts.const_str_plain__reset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reset_tuple", mod_consts.const_tuple_str_plain_reset_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reset_tuple) && "mod_consts.const_tuple_str_plain_reset_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exif", mod_consts.const_str_plain_exif);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_exif) && "mod_consts.const_str_plain_exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getexif", mod_consts.const_str_plain_getexif);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_getexif) && "mod_consts.const_str_plain_getexif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_merged_dict", mod_consts.const_str_plain__get_merged_dict);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_merged_dict) && "mod_consts.const_str_plain__get_merged_dict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek_check", mod_consts.const_str_plain__seek_check);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__seek_check) && "mod_consts.const_str_plain__seek_check");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__logical_frame", mod_consts.const_str_plain__WebPImageFile__logical_frame);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__logical_frame) && "mod_consts.const_str_plain__WebPImageFile__logical_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reset", mod_consts.const_str_plain_reset);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset) && "mod_consts.const_str_plain_reset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__physical_frame", mod_consts.const_str_plain__WebPImageFile__physical_frame);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__physical_frame) && "mod_consts.const_str_plain__WebPImageFile__physical_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__loaded", mod_consts.const_str_plain__WebPImageFile__loaded);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__loaded) && "mod_consts.const_str_plain__WebPImageFile__loaded");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__WebPImageFile__timestamp", mod_consts.const_str_plain__WebPImageFile__timestamp);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__WebPImageFile__timestamp) && "mod_consts.const_str_plain__WebPImageFile__timestamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_next", mod_consts.const_str_plain_get_next);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_next) && "mod_consts.const_str_plain_get_next");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923", mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923) && "mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_next", mod_consts.const_str_plain__get_next);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_next) && "mod_consts.const_str_plain__get_next");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__seek", mod_consts.const_str_plain__seek);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__seek) && "mod_consts.const_str_plain__seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp) && "mod_consts.const_str_plain_timestamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_duration", mod_consts.const_str_plain_duration);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_duration) && "mod_consts.const_str_plain_duration");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__exclusive_fp", mod_consts.const_str_plain__exclusive_fp);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__exclusive_fp) && "mod_consts.const_str_plain__exclusive_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Tile", mod_consts.const_str_plain__Tile);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tile) && "mod_consts.const_str_plain__Tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_raw", mod_consts.const_str_plain_raw);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw) && "mod_consts.const_str_plain_raw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tile", mod_consts.const_str_plain_tile);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_tile) && "mod_consts.const_str_plain_tile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple", mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple) && "mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert) && "mod_consts.const_str_plain_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_transparency_data", mod_consts.const_str_plain_has_transparency_data);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_transparency_data) && "mod_consts.const_str_plain_has_transparency_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA) && "mod_consts.const_str_plain_RGBA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoderinfo", mod_consts.const_str_plain_encoderinfo);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoderinfo) && "mod_consts.const_str_plain_encoderinfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append_images", mod_consts.const_str_plain_append_images);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_images) && "mod_consts.const_str_plain_append_images");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_total", mod_consts.const_str_plain_total);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_total) && "mod_consts.const_str_plain_total");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save", mod_consts.const_str_plain__save);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__save) && "mod_consts.const_str_plain__save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getpalette", mod_consts.const_str_plain_getpalette);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpalette) && "mod_consts.const_str_plain_getpalette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_duration_int_0_tuple", mod_consts.const_tuple_str_plain_duration_int_0_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_duration_int_0_tuple) && "mod_consts.const_tuple_str_plain_duration_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_loop_int_0_tuple", mod_consts.const_tuple_str_plain_loop_int_0_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_int_0_tuple) && "mod_consts.const_tuple_str_plain_loop_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_minimize_size_false_tuple", mod_consts.const_tuple_str_plain_minimize_size_false_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minimize_size_false_tuple) && "mod_consts.const_tuple_str_plain_minimize_size_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kmin_none_tuple", mod_consts.const_tuple_str_plain_kmin_none_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kmin_none_tuple) && "mod_consts.const_tuple_str_plain_kmin_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kmax_none_tuple", mod_consts.const_tuple_str_plain_kmax_none_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kmax_none_tuple) && "mod_consts.const_tuple_str_plain_kmax_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_allow_mixed_false_tuple", mod_consts.const_tuple_str_plain_allow_mixed_false_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allow_mixed_false_tuple) && "mod_consts.const_tuple_str_plain_allow_mixed_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_lossless_false_tuple", mod_consts.const_tuple_str_plain_lossless_false_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_lossless_false_tuple) && "mod_consts.const_tuple_str_plain_lossless_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple", mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple) && "mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple", mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple) && "mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_method_int_0_tuple", mod_consts.const_tuple_str_plain_method_int_0_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_int_0_tuple) && "mod_consts.const_tuple_str_plain_method_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_icc_profile_tuple", mod_consts.const_tuple_str_plain_icc_profile_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_icc_profile_tuple) && "mod_consts.const_tuple_str_plain_icc_profile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_str_empty_tuple", mod_consts.const_tuple_str_plain_exif_str_empty_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_str_empty_tuple) && "mod_consts.const_tuple_str_plain_exif_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Exif", mod_consts.const_str_plain_Exif);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Exif) && "mod_consts.const_str_plain_Exif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes) && "mod_consts.const_str_plain_tobytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_xmp_str_empty_tuple", mod_consts.const_tuple_str_plain_xmp_str_empty_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_xmp_str_empty_tuple) && "mod_consts.const_tuple_str_plain_xmp_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_9", mod_consts.const_int_pos_9);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_9) && "mod_consts.const_int_pos_9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_5", mod_consts.const_int_pos_5);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_5) && "mod_consts.const_int_pos_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_list_type_tuple_tuple", mod_consts.const_tuple_type_list_type_tuple_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_type_list_type_tuple_tuple) && "mod_consts.const_tuple_type_list_type_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680", mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680) && "mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPAnimEncoder", mod_consts.const_str_plain_WebPAnimEncoder);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebPAnimEncoder) && "mod_consts.const_str_plain_WebPAnimEncoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ims", mod_consts.const_str_plain_ims);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_ims) && "mod_consts.const_str_plain_ims");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__convert_frame", mod_consts.const_str_plain__convert_frame);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__convert_frame) && "mod_consts.const_str_plain__convert_frame");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enc", mod_consts.const_str_plain_enc);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_enc) && "mod_consts.const_str_plain_enc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_getim) && "mod_consts.const_str_plain_getim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_round) && "mod_consts.const_str_plain_round");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lossless", mod_consts.const_str_plain_lossless);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_lossless) && "mod_consts.const_str_plain_lossless");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_quality", mod_consts.const_str_plain_quality);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_quality) && "mod_consts.const_str_plain_quality");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_alpha_quality", mod_consts.const_str_plain_alpha_quality);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_alpha_quality) && "mod_consts.const_str_plain_alpha_quality");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_method", mod_consts.const_str_plain_method);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_method) && "mod_consts.const_str_plain_method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_frame_idx", mod_consts.const_str_plain_frame_idx);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_frame_idx) && "mod_consts.const_str_plain_frame_idx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assemble", mod_consts.const_str_plain_assemble);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_assemble) && "mod_consts.const_str_plain_assemble");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad", mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad) && "mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write", mod_consts.const_str_plain_write);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_write) && "mod_consts.const_str_plain_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29", mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29) && "mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple", mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple) && "mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple", mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple) && "mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_6_none_none", mod_consts.const_slice_int_pos_6_none_none);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_6_none_none) && "mod_consts.const_slice_int_pos_6_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_method_int_pos_4_tuple", mod_consts.const_tuple_str_plain_method_int_pos_4_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_method_int_pos_4_tuple) && "mod_consts.const_tuple_str_plain_method_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_exact_tuple", mod_consts.const_tuple_str_plain_exact_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exact_tuple) && "mod_consts.const_tuple_str_plain_exact_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPEncode", mod_consts.const_str_plain_WebPEncode);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebPEncode) && "mod_consts.const_str_plain_WebPEncode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__webp_tuple", mod_consts.const_tuple_str_plain__webp_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__webp_tuple) && "mod_consts.const_tuple_str_plain__webp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852", mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852) && "mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439", mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439) && "mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WebPImageFile", mod_consts.const_str_plain_WebPImageFile);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebPImageFile) && "mod_consts.const_str_plain_WebPImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051", mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051) && "mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_39", mod_consts.const_int_pos_39);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_39) && "mod_consts.const_int_pos_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WEBP", mod_consts.const_str_plain_WEBP);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_WEBP) && "mod_consts.const_str_plain_WEBP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b", mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b) && "mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_format_description", mod_consts.const_str_plain_format_description);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_description) && "mod_consts.const_str_plain_format_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__open", mod_consts.const_str_plain__open);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__open) && "mod_consts.const_str_plain__open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542", mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542) && "mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e", mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e) && "mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__getexif", mod_consts.const_str_plain__getexif);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain__getexif) && "mod_consts.const_str_plain__getexif");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922", mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922) && "mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0", mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0) && "mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b", mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b) && "mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a", mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a) && "mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427", mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427) && "mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982", mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982) && "mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4", mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4) && "mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828", mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828) && "mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a", mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a) && "mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046", mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046) && "mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4", mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4) && "mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_seek", mod_consts.const_str_plain_load_seek);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_seek) && "mod_consts.const_str_plain_load_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b", mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b) && "mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8", mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8) && "mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple", mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple) && "mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d", mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d) && "mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b018ccd271180f61287e4749ac87b316", mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316) && "mod_consts.const_dict_b018ccd271180f61287e4749ac87b316");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__save_all", mod_consts.const_str_plain__save_all);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain__save_all) && "mod_consts.const_str_plain__save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_open", mod_consts.const_str_plain_register_open);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_open) && "mod_consts.const_str_plain_register_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save", mod_consts.const_str_plain_register_save);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save) && "mod_consts.const_str_plain_register_save");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_save_all", mod_consts.const_str_plain_register_save_all);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_save_all) && "mod_consts.const_str_plain_register_save_all");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_extension", mod_consts.const_str_plain_register_extension);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_extension) && "mod_consts.const_str_plain_register_extension");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4", mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4) && "mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_register_mime", mod_consts.const_str_plain_register_mime);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_mime) && "mod_consts.const_str_plain_register_mime");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674", mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674) && "mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250", mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250) && "mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple", mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple) && "mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f", mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f) && "mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple", mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple) && "mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_tuple", mod_consts.const_tuple_str_plain_im_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_tuple) && "mod_consts.const_tuple_str_plain_im_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple", mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple) && "mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple", mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple) && "mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple", mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple", mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple) && "mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple", mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple) && "mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple", mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_PIL$WebPImagePlugin$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$ImageFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$SUPPORTED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebPImageFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebPImageFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebPImageFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebPImageFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebPImageFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebPImageFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebPImageFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebPImageFile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_VP8_MODES_BY_IDENTIFIER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_accept(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_convert_frame(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_frame);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_frame);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_frame, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__convert_frame);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__convert_frame, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_frame);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_frame);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_frame);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_save(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_save_all(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$WebPImagePlugin$_webp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$WebPImagePlugin->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$WebPImagePlugin->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__webp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$WebPImagePlugin->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__webp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__webp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__webp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__webp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__webp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__webp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__webp);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a0089f126cad523a099bc03b542a88e8;
static PyCodeObject *code_objects_8ddf938dcbbf79b2c005127776c313f6;
static PyCodeObject *code_objects_d8f17bd0392ac18bf78c6725b9a2d532;
static PyCodeObject *code_objects_dff9886db996d1bc304043d464f89594;
static PyCodeObject *code_objects_c393db7e53b3b1a7e2a098f99d15fcf3;
static PyCodeObject *code_objects_e259b47f51b4a5ca19ce933ac1895efe;
static PyCodeObject *code_objects_a633455335f12eb75798e43067bab31a;
static PyCodeObject *code_objects_fe6c3d3871e8e13447633c957d9cb621;
static PyCodeObject *code_objects_937738e78f50aa80d4945f60c55d4dd0;
static PyCodeObject *code_objects_0c3184d5886143ebd086a6fbcbb12b4c;
static PyCodeObject *code_objects_9105eb53fb9025dd5c05a88dda77fc63;
static PyCodeObject *code_objects_d0889f448f3ae0d36fd761d6ea41f41d;
static PyCodeObject *code_objects_cdef0ebe1c2bff9fe7a43d43ca52f63e;
static PyCodeObject *code_objects_a7a768c449c82901aa725d8ffda46073;
static PyCodeObject *code_objects_ab73769722b4a32fc6ac7ff9e423828e;
static PyCodeObject *code_objects_71d83c95cdcf647e3ed51c27672febfa;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6d0794ca5d5e00544870e53ba9ff4250); CHECK_OBJECT(module_filename_obj);
code_objects_a0089f126cad523a099bc03b542a88e8 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_8ddf938dcbbf79b2c005127776c313f6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f, mod_consts.const_str_digest_b905a81943ed98609858b9beb8af4a2f, NULL, NULL, 0, 0, 0);
code_objects_d8f17bd0392ac18bf78c6725b9a2d532 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WebPImageFile, mod_consts.const_str_plain_WebPImageFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dff9886db996d1bc304043d464f89594 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__accept, mod_consts.const_str_plain__accept, mod_consts.const_tuple_9d1054bb847c91b8918e614f2412d6eb_tuple, NULL, 1, 0, 0);
code_objects_c393db7e53b3b1a7e2a098f99d15fcf3 = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__convert_frame, mod_consts.const_str_plain__convert_frame, mod_consts.const_tuple_str_plain_im_tuple, NULL, 1, 0, 0);
code_objects_e259b47f51b4a5ca19ce933ac1895efe = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_next, mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4, mod_consts.const_tuple_c7170a1274926811eaaa31030195f7f1_tuple, NULL, 1, 0, 0);
code_objects_a633455335f12eb75798e43067bab31a = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__getexif, mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fe6c3d3871e8e13447633c957d9cb621 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__open, mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542, mod_consts.const_tuple_2f60c38b2e0d54bf1785ec554a3af3cd_tuple, NULL, 1, 0, 0);
code_objects_937738e78f50aa80d4945f60c55d4dd0 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__reset, mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427, mod_consts.const_tuple_str_plain_self_str_plain_reset_tuple, NULL, 2, 0, 0);
code_objects_0c3184d5886143ebd086a6fbcbb12b4c = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save, mod_consts.const_str_plain__save, mod_consts.const_tuple_98e9e6f8d94117e80ead62509a344cec_tuple, NULL, 3, 0, 0);
code_objects_9105eb53fb9025dd5c05a88dda77fc63 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__save_all, mod_consts.const_str_plain__save_all, mod_consts.const_tuple_a518d8a3f92e4d3872277a8d0f830aa7_tuple, NULL, 3, 0, 0);
code_objects_d0889f448f3ae0d36fd761d6ea41f41d = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__seek, mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple, NULL, 2, 0, 0);
code_objects_cdef0ebe1c2bff9fe7a43d43ca52f63e = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load, mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_a7a768c449c82901aa725d8ffda46073 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_load_seek, mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple, NULL, 2, 0, 0);
code_objects_ab73769722b4a32fc6ac7ff9e423828e = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_seek, mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple, NULL, 2, 0, 0);
code_objects_71d83c95cdcf647e3ed51c27672febfa = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tell, mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__10_tell(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__11__convert_frame(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__12__save_all(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__13__save(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__3__getexif(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__4_seek(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__5__reset(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__6__get_next(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__7__seek(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__8_load(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__9_load_seek(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$WebPImagePlugin$$$function__1__accept(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_prefix = python_pars[0];
PyObject *var_is_riff_file_format = NULL;
PyObject *var_is_webp_file = NULL;
nuitka_bool var_is_valid_vp8_mode = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__1__accept;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept = MAKE_FUNCTION_FRAME(tstate, code_objects_dff9886db996d1bc304043d464f89594, module_PIL$WebPImagePlugin, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__1__accept = cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__1__accept);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__1__accept) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_prefix);
tmp_expression_value_1 = par_prefix;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__1__accept->m_frame.f_lineno = 26;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_digest_e38195f9de5b2b5c378645aa7f46d793_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_riff_file_format;
    var_is_riff_file_format = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_prefix);
tmp_expression_value_2 = par_prefix;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_8_int_pos_12_none;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_bytes_digest_11b0abfa42735c33fab0e66549dd7acd;
tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_webp_file;
    var_is_webp_file = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_prefix);
tmp_expression_value_3 = par_prefix;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_12_int_pos_16_none;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_PIL$WebPImagePlugin$_VP8_MODES_BY_IDENTIFIER(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 28;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
var_is_valid_vp8_mode = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_is_riff_file_format);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_riff_file_format);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_is_webp_file);
tmp_truth_name_2 = CHECK_IF_TRUE(var_is_webp_file);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
assert(var_is_valid_vp8_mode != NUITKA_BOOL_UNASSIGNED);
tmp_and_right_value_2 = var_is_valid_vp8_mode;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
tmp_operand_value_1 = module_var_accessor_PIL$WebPImagePlugin$SUPPORTED(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUPPORTED);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooob";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooob";
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
tmp_return_value = mod_consts.const_str_digest_49d6cb0ac9c7aad2e4d19897fe35b607;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__1__accept->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__1__accept, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__1__accept,
    type_description_1,
    par_prefix,
    var_is_riff_file_format,
    var_is_webp_file,
    (int)var_is_valid_vp8_mode
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__1__accept == cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__1__accept = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__1__accept);

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
CHECK_OBJECT(var_is_riff_file_format);
CHECK_OBJECT(var_is_riff_file_format);
Py_DECREF(var_is_riff_file_format);
var_is_riff_file_format = NULL;
CHECK_OBJECT(var_is_webp_file);
CHECK_OBJECT(var_is_webp_file);
Py_DECREF(var_is_webp_file);
var_is_webp_file = NULL;
assert(var_is_valid_vp8_mode != NUITKA_BOOL_UNASSIGNED);
var_is_valid_vp8_mode = NUITKA_BOOL_UNASSIGNED;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_is_riff_file_format);
var_is_riff_file_format = NULL;
Py_XDECREF(var_is_webp_file);
var_is_webp_file = NULL;
var_is_valid_vp8_mode = NUITKA_BOOL_UNASSIGNED;
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


static PyObject *impl_PIL$WebPImagePlugin$$$function__2__open(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_s = NULL;
PyObject *var_bgcolor = NULL;
PyObject *var_key = NULL;
PyObject *var_chunk_name = NULL;
PyObject *var_value = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__2__open;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open = MAKE_FUNCTION_FRAME(tstate, code_objects_fe6c3d3871e8e13447633c957d9cb621, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__2__open = cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__2__open);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__2__open) == 2);

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


exception_lineno = 46;
type_description_1 = "ooNoooo";
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
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 46;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 46;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooo";
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


exception_lineno = 47;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 47;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooNoooo";
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
tmp_called_value_1 = module_var_accessor_PIL$WebPImagePlugin$_accept(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_1 = var_s;
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 48;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooNoooo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a2d73ab13abcbbd98b7d00aa10164ce4;
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 50;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_SyntaxError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNoooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_2 = module_var_accessor_PIL$WebPImagePlugin$_webp(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__webp);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_args_element_value_2 = var_s;
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 54;
tmp_ass_attr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_WebPAnimDecoder, tmp_args_element_value_2);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooNoooo";
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


exception_lineno = 54;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__decoder);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 58;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_get_info);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_3;
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_4;
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 5);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_5;
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 5);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_1 = "ooNoooo";
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


exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_loop;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_bgcolor;
    var_bgcolor = tmp_assign_source_8;
    Py_INCREF(var_bgcolor);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_ass_attr_value_3 = tmp_tuple_unpack_1__element_4;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_n_frames, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_ass_attr_value_4 = tmp_tuple_unpack_1__element_5;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_rawmode, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooNoooo";
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
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_bgcolor);
tmp_rshift_expr_left_1 = var_bgcolor;
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_16;
tmp_bitand_expr_left_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_255;
tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_rshift_expr_left_2;
PyObject *tmp_rshift_expr_right_2;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
PyObject *tmp_rshift_expr_left_3;
PyObject *tmp_rshift_expr_right_3;
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_bgcolor);
tmp_rshift_expr_left_2 = var_bgcolor;
tmp_rshift_expr_right_2 = mod_consts.const_int_pos_8;
tmp_bitand_expr_left_2 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_2, tmp_rshift_expr_right_2);
if (tmp_bitand_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooNoooo";
    goto tuple_build_exception_1;
}
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_255;
tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_left_2);
Py_DECREF(tmp_bitand_expr_left_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooNoooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_bgcolor);
tmp_bitand_expr_left_3 = var_bgcolor;
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_255;
tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooNoooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 2, tmp_tuple_element_1);
CHECK_OBJECT(var_bgcolor);
tmp_rshift_expr_left_3 = var_bgcolor;
tmp_rshift_expr_right_3 = mod_consts.const_int_pos_24;
tmp_bitand_expr_left_4 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_3, tmp_rshift_expr_right_3);
if (tmp_bitand_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooo";
    goto tuple_build_exception_1;
}
tmp_bitand_expr_right_4 = mod_consts.const_int_pos_255;
tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
CHECK_OBJECT(tmp_bitand_expr_left_4);
Py_DECREF(tmp_bitand_expr_left_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooNoooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_2);

exception_lineno = 60;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_background;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_n_frames);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_ass_attr_value_5 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooNoooo";
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


exception_lineno = 66;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_6;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_attr_target_6;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_rawmode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_RGBX;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_ass_attr_value_6 = mod_consts.const_str_plain_RGB;
Py_INCREF(tmp_ass_attr_value_6);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_ass_attr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rawmode);
if (tmp_ass_attr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain__mode, tmp_ass_attr_value_6);
CHECK_OBJECT(tmp_ass_attr_value_6);
Py_DECREF(tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_dict_arg_1;
tmp_dict_arg_1 = DICT_COPY(tstate, mod_consts.const_dict_309bc1629011a57e24d9516fa6b78b3a);
tmp_iter_arg_2 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
CHECK_OBJECT(tmp_dict_arg_1);
Py_DECREF(tmp_dict_arg_1);
assert(!(tmp_iter_arg_2 == NULL));
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooNoooo";
exception_lineno = 70;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooNoooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "ooNoooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "ooNoooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
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



exception_lineno = 70;
type_description_1 = "ooNoooo";
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

goto try_except_handler_4;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_14;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_chunk_name;
    var_chunk_name = tmp_assign_source_15;
    Py_INCREF(var_chunk_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_1;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 75;
type_description_1 = "ooNoooo";
    goto try_except_handler_7;
}

tmp_expression_value_9 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__decoder);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooNoooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_chunk_name);
tmp_args_element_value_3 = var_chunk_name;
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 75;
tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_get_chunk, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooNoooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_assignment_expr_1__value;
    tmp_assignment_expr_1__value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_17 = tmp_assignment_expr_1__value;
{
    PyObject *old = var_value;
    var_value = tmp_assign_source_17;
    Py_INCREF(var_value);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_outline_return_value_1);

exception_lineno = 75;
type_description_1 = "ooNoooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_ass_subscript_3;
CHECK_OBJECT(var_value);
tmp_ass_subvalue_3 = var_value;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 76;
type_description_1 = "ooNoooo";
    goto try_except_handler_4;
}

tmp_expression_value_10 = par_self;
tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooNoooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_key);
tmp_ass_subscript_3 = var_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooNoooo";
    goto try_except_handler_4;
}
}
branch_no_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooNoooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
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
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 79;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__reset);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooNoooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame.f_lineno = 79;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_reset_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooNoooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__2__open->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__2__open, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__2__open,
    type_description_1,
    par_self,
    var_s,
    NULL,
    var_bgcolor,
    var_key,
    var_chunk_name,
    var_value
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__2__open == cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__2__open = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__2__open);

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
CHECK_OBJECT(var_bgcolor);
CHECK_OBJECT(var_bgcolor);
Py_DECREF(var_bgcolor);
var_bgcolor = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_chunk_name);
var_chunk_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_bgcolor);
var_bgcolor = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_chunk_name);
var_chunk_name = NULL;
Py_XDECREF(var_value);
var_value = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__3__getexif(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__3__getexif;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif = MAKE_FUNCTION_FRAME(tstate, code_objects_a633455335f12eb75798e43067bab31a, module_PIL$WebPImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__3__getexif = cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__3__getexif);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__3__getexif) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_exif;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__3__getexif->m_frame.f_lineno = 84;
tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getexif);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__3__getexif->m_frame.f_lineno = 84;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_merged_dict);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__3__getexif, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__3__getexif->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__3__getexif, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__3__getexif,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__3__getexif == cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__3__getexif = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__3__getexif);

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__4_seek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__4_seek;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek = MAKE_FUNCTION_FRAME(tstate, code_objects_ab73769722b4a32fc6ac7ff9e423828e, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__4_seek = cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__4_seek);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__4_seek) == 2);

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
frame_frame_PIL$WebPImagePlugin$$$function__4_seek->m_frame.f_lineno = 87;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__seek_check, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
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
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__WebPImageFile__logical_frame, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__4_seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__4_seek->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__4_seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__4_seek,
    type_description_1,
    par_self,
    par_frame
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__4_seek == cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__4_seek = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__4_seek);

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__5__reset(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_reset = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__5__reset;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset = MAKE_FUNCTION_FRAME(tstate, code_objects_937738e78f50aa80d4945f60c55d4dd0, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__5__reset = cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__5__reset);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__5__reset) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_reset);
tmp_truth_name_1 = CHECK_IF_TRUE(par_reset);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__decoder);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__5__reset->m_frame.f_lineno = 95;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_reset);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__WebPImageFile__physical_frame, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
tmp_ass_attr_value_2 = const_int_neg_1;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__WebPImageFile__loaded, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
tmp_ass_attr_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__WebPImageFile__timestamp, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__5__reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__5__reset->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__5__reset, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__5__reset,
    type_description_1,
    par_self,
    par_reset
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__5__reset == cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__5__reset = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__5__reset);

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
CHECK_OBJECT(par_reset);
Py_DECREF(par_reset);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_reset);
Py_DECREF(par_reset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$WebPImagePlugin$$$function__6__get_next(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_ret = NULL;
PyObject *var_data = NULL;
PyObject *var_timestamp = NULL;
PyObject *var_duration = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__6__get_next;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next = MAKE_FUNCTION_FRAME(tstate, code_objects_e259b47f51b4a5ca19ce933ac1895efe, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__6__get_next = cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__6__get_next);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__6__get_next) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__decoder);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_frame.f_lineno = 102;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_next);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ret;
    var_ret = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__WebPImageFile__physical_frame);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_inplace_assign_1__value;
    tmp_inplace_assign_1__value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooNooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_3;

}
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ass_attr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__WebPImageFile__physical_frame, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooNooo";
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

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ret);
tmp_cmp_expr_left_1 = var_ret;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_frame.f_lineno = 107;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__reset);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_frame.f_lineno = 108;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_seek,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9c43ef1833ece07913bbe1ec7f5b6923;
frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_frame.f_lineno = 110;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_EOFError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 110;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooNooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_ret);
tmp_iter_arg_1 = var_ret;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooNooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooNooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooNooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 113;
type_description_1 = "ooNooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_7;
    Py_INCREF(var_data);
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
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_8;
    Py_INCREF(var_timestamp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_timestamp);
tmp_sub_expr_left_1 = var_timestamp;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__WebPImageFile__timestamp);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_duration;
    var_duration = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(var_timestamp);
tmp_ass_attr_value_2 = var_timestamp;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__WebPImageFile__timestamp, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(var_timestamp);
tmp_isub_expr_left_1 = var_timestamp;
CHECK_OBJECT(var_duration);
tmp_isub_expr_right_1 = var_duration;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooNooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_isub_expr_left_1;
var_timestamp = tmp_assign_source_10;

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__6__get_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__6__get_next->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__6__get_next, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__6__get_next,
    type_description_1,
    par_self,
    var_ret,
    NULL,
    var_data,
    var_timestamp,
    var_duration
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__6__get_next == cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__6__get_next = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__6__get_next);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_data);
tmp_tuple_element_1 = var_data;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_timestamp);
tmp_tuple_element_1 = var_timestamp;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_duration);
tmp_tuple_element_1 = var_duration;
PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
CHECK_OBJECT(var_duration);
CHECK_OBJECT(var_duration);
Py_DECREF(var_duration);
var_duration = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_duration);
var_duration = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__7__seek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_frame = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__7__seek;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek = MAKE_FUNCTION_FRAME(tstate, code_objects_d0889f448f3ae0d36fd761d6ea41f41d, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__7__seek = cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__7__seek);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__7__seek) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__WebPImageFile__physical_frame);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_cmp_expr_right_1 = par_frame;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_frame);
tmp_cmp_expr_left_2 = par_frame;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__WebPImageFile__physical_frame);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__7__seek->m_frame.f_lineno = 125;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__reset);
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
branch_no_2:;
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__WebPImageFile__physical_frame);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_frame);
tmp_cmp_expr_right_3 = par_frame;
tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__7__seek->m_frame.f_lineno = 127;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_next);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__7__seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__7__seek->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__7__seek, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__7__seek,
    type_description_1,
    par_self,
    par_frame
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__7__seek == cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__7__seek = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__7__seek);

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__8_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_data = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__8_load;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load = MAKE_FUNCTION_FRAME(tstate, code_objects_cdef0ebe1c2bff9fe7a43d43ca52f63e, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__8_load = cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__8_load);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__8_load) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__WebPImageFile__loaded);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__WebPImageFile__logical_frame);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 130;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooc";
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
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__seek);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__WebPImageFile__logical_frame);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 131;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 131;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 134;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_next);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooc";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooc";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooc";
    goto try_except_handler_3;
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



exception_lineno = 134;
type_description_1 = "ooc";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_timestamp;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_ass_subvalue_2 = tmp_tuple_unpack_1__element_3;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
    goto try_except_handler_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_duration;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooc";
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
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_ass_attr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__WebPImageFile__logical_frame);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__WebPImageFile__loaded, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fp);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 138;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__exclusive_fp);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 138;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
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
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_fp);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 139;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_attr_target_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 140;
tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_fp, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_11 = module_var_accessor_PIL$WebPImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__Tile);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_raw;
tmp_add_expr_left_1 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_size);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_rawmode);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooc";
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


exception_lineno = 141;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 143;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_3 = BUILTIN_SUPER0(tstate, moduledict_PIL$WebPImagePlugin, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame.f_lineno = 143;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_load);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__8_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__8_load->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__8_load, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__8_load,
    type_description_1,
    par_self,
    var_data,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__8_load == cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__8_load = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__8_load);

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
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
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


static PyObject *impl_PIL$WebPImagePlugin$$$function__10_tell(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__10_tell;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell = MAKE_FUNCTION_FRAME(tstate, code_objects_71d83c95cdcf647e3ed51c27672febfa, module_PIL$WebPImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__10_tell = cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__10_tell);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__10_tell) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__WebPImageFile__logical_frame);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__10_tell, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__10_tell->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__10_tell, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__10_tell,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__10_tell == cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__10_tell = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__10_tell);

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__11__convert_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c393db7e53b3b1a7e2a098f99d15fcf3, module_PIL$WebPImagePlugin, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame = cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_RGBX_str_plain_RGBA_str_plain_RGB_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_convert);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_3 = par_im;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_has_transparency_data);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_args_element_value_1 = mod_consts.const_str_plain_RGBA;
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_1 = mod_consts.const_str_plain_RGB;
condexpr_end_1:;
frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame->m_frame.f_lineno = 155;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_im;
    assert(old != NULL);
    par_im = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
if (par_im == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

tmp_return_value = par_im;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame,
    type_description_1,
    par_im
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame == cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__11__convert_frame);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_im);
par_im = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_im);
par_im = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_PIL$WebPImagePlugin$$$function__12__save_all(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *var_background = NULL;
PyObject *var_encoderinfo = NULL;
PyObject *var_append_images = NULL;
PyObject *var_total = NULL;
PyObject *var_ims = NULL;
PyObject *var_palette = NULL;
PyObject *var_r = NULL;
PyObject *var_g = NULL;
PyObject *var_b = NULL;
PyObject *var_duration = NULL;
PyObject *var_loop = NULL;
PyObject *var_minimize_size = NULL;
PyObject *var_kmin = NULL;
PyObject *var_kmax = NULL;
PyObject *var_allow_mixed = NULL;
PyObject *var_lossless = NULL;
PyObject *var_quality = NULL;
PyObject *var_alpha_quality = NULL;
PyObject *var_method = NULL;
PyObject *var_icc_profile = NULL;
PyObject *var_exif = NULL;
PyObject *var_xmp = NULL;
PyObject *var_msg = NULL;
PyObject *var_bg_r = NULL;
PyObject *var_bg_g = NULL;
PyObject *var_bg_b = NULL;
PyObject *var_bg_a = NULL;
PyObject *var_enc = NULL;
PyObject *var_frame_idx = NULL;
PyObject *var_timestamp = NULL;
PyObject *var_cur_idx = NULL;
PyObject *var_nfr = NULL;
PyObject *var_idx = NULL;
PyObject *var_frame = NULL;
PyObject *var_data = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__12__save_all;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
int tmp_res;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all = MAKE_FUNCTION_FRAME(tstate, code_objects_9105eb53fb9025dd5c05a88dda77fc63, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all = cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__12__save_all);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__12__save_all) == 2);

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


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 160;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_encoderinfo;
    var_encoderinfo = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(var_encoderinfo);
tmp_expression_value_3 = var_encoderinfo;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_append_images;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 161;
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


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_append_images;
    var_append_images = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
{
    PyObject *old = var_total;
    var_total = tmp_assign_source_3;
    Py_INCREF(var_total);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
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
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
exception_lineno = 166;
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
    PyObject *old = var_ims;
    var_ims = tmp_assign_source_6;
    Py_INCREF(var_ims);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
if (var_total == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_total;
CHECK_OBJECT(var_ims);
tmp_expression_value_4 = var_ims;
tmp_name_value_1 = mod_consts.const_str_plain_n_frames;
tmp_default_value_1 = const_int_pos_1;
tmp_iadd_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, tmp_default_value_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = tmp_iadd_expr_left_1;
var_total = tmp_assign_source_7;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_total == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_total);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_total;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_PIL$WebPImagePlugin$_save(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
CHECK_OBJECT(par_fp);
tmp_args_element_value_2 = par_fp;
CHECK_OBJECT(par_filename);
tmp_args_element_value_3 = par_filename;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 169;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_tuple_int_0_int_0_int_0_int_0_tuple;
{
    PyObject *old = var_background;
    var_background = tmp_assign_source_8;
    Py_INCREF(var_background);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_background;
CHECK_OBJECT(var_encoderinfo);
tmp_cmp_expr_right_2 = var_encoderinfo;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_encoderinfo);
tmp_expression_value_5 = var_encoderinfo;
tmp_subscript_value_1 = mod_consts.const_str_plain_background;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_background;
    assert(old != NULL);
    var_background = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_background;
CHECK_OBJECT(par_im);
tmp_expression_value_6 = par_im;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_info);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_8 = par_im;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_info);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_background;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_background;
    assert(old != NULL);
    var_background = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_background);
tmp_isinstance_inst_1 = var_background;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_im);
tmp_called_instance_1 = par_im;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 180;
tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getpalette);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_palette;
    var_palette = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_1;
CHECK_OBJECT(var_palette);
tmp_truth_name_1 = CHECK_IF_TRUE(var_palette);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_palette);
tmp_expression_value_9 = var_palette;
CHECK_OBJECT(var_background);
tmp_mult_expr_left_1 = var_background;
tmp_mult_expr_right_1 = mod_consts.const_int_pos_3;
tmp_start_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_background);
tmp_add_expr_left_2 = var_background;
tmp_add_expr_right_2 = const_int_pos_1;
tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_mult_expr_right_2 = mod_consts.const_int_pos_3;
tmp_stop_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_start_value_1);

exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_3 == NULL));
tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_15;
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



exception_lineno = 182;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_16;
    Py_INCREF(var_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_g;
    var_g = tmp_assign_source_17;
    Py_INCREF(var_g);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_18 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_18;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_19;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_r);
tmp_tuple_element_1 = var_r;
tmp_assign_source_19 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_g);
tmp_tuple_element_1 = var_g;
PyTuple_SET_ITEM0(tmp_assign_source_19, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_b);
tmp_tuple_element_1 = var_b;
PyTuple_SET_ITEM0(tmp_assign_source_19, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_255;
PyTuple_SET_ITEM0(tmp_assign_source_19, 3, tmp_tuple_element_1);
{
    PyObject *old = var_background;
    assert(old != NULL);
    var_background = tmp_assign_source_19;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_background);
tmp_tuple_element_2 = var_background;
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_background);
tmp_tuple_element_2 = var_background;
PyTuple_SET_ITEM0(tmp_assign_source_20, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_background);
tmp_tuple_element_2 = var_background;
PyTuple_SET_ITEM0(tmp_assign_source_20, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_int_pos_255;
PyTuple_SET_ITEM0(tmp_assign_source_20, 3, tmp_tuple_element_2);
{
    PyObject *old = var_background;
    assert(old != NULL);
    var_background = tmp_assign_source_20;
    Py_DECREF(old);
}

}
branch_end_5:;
branch_no_4:;
branch_no_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_im);
tmp_expression_value_11 = par_im;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_duration;
CHECK_OBJECT(par_im);
tmp_expression_value_13 = par_im;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_info);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 187;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_duration_int_0_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_duration;
    var_duration = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_im);
tmp_expression_value_15 = par_im;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 188;
tmp_assign_source_22 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_loop_int_0_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_loop;
    var_loop = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_im);
tmp_expression_value_17 = par_im;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 189;
tmp_assign_source_23 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_minimize_size_false_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_minimize_size;
    var_minimize_size = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(par_im);
tmp_expression_value_19 = par_im;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 190;
tmp_assign_source_24 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_kmin_none_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_kmin;
    var_kmin = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_im);
tmp_expression_value_21 = par_im;
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 191;
tmp_assign_source_25 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_kmax_none_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_kmax;
    var_kmax = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(par_im);
tmp_expression_value_23 = par_im;
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 192;
tmp_assign_source_26 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_allow_mixed_false_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_allow_mixed;
    var_allow_mixed = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_im);
tmp_expression_value_25 = par_im;
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 194;
tmp_assign_source_27 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_11, mod_consts.const_tuple_str_plain_lossless_false_tuple);

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lossless;
    var_lossless = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(par_im);
tmp_expression_value_27 = par_im;
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 195;
tmp_assign_source_28 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_12, mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple);

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_quality;
    var_quality = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(par_im);
tmp_expression_value_29 = par_im;
tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 196;
tmp_assign_source_29 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_13, mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple);

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_alpha_quality;
    var_alpha_quality = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(par_im);
tmp_expression_value_31 = par_im;
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 197;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_method_int_0_tuple);

CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_method;
    var_method = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(par_im);
tmp_expression_value_33 = par_im;
tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 198;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_15, mod_consts.const_tuple_str_plain_icc_profile_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 198;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_31 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_31 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_icc_profile;
    var_icc_profile = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_34;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(par_im);
tmp_expression_value_35 = par_im;
tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 199;
tmp_assign_source_32 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_16, mod_consts.const_tuple_str_plain_exif_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    var_exif = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(var_exif);
tmp_isinstance_inst_2 = var_exif;
tmp_expression_value_36 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_Exif);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_exif);
tmp_called_instance_2 = var_exif;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 201;
tmp_assign_source_33 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tobytes);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_33;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(par_im);
tmp_expression_value_38 = par_im;
tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 202;
tmp_assign_source_34 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_17, mod_consts.const_tuple_str_plain_xmp_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_xmp;
    var_xmp = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
CHECK_OBJECT(var_allow_mixed);
tmp_truth_name_2 = CHECK_IF_TRUE(var_allow_mixed);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
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
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = Py_False;
{
    PyObject *old = var_lossless;
    assert(old != NULL);
    var_lossless = tmp_assign_source_35;
    Py_INCREF(var_lossless);
    Py_DECREF(old);
}

}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_kmin);
tmp_cmp_expr_left_4 = var_kmin;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_36;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
CHECK_OBJECT(var_lossless);
tmp_truth_name_3 = CHECK_IF_TRUE(var_lossless);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_36 = mod_consts.const_int_pos_9;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_36 = mod_consts.const_int_pos_3;
condexpr_end_1:;
{
    PyObject *old = var_kmin;
    assert(old != NULL);
    var_kmin = tmp_assign_source_36;
    Py_INCREF(var_kmin);
    Py_DECREF(old);
}

}
branch_no_8:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_kmax);
tmp_cmp_expr_left_5 = var_kmax;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_37;
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_4;
CHECK_OBJECT(var_lossless);
tmp_truth_name_4 = CHECK_IF_TRUE(var_lossless);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_assign_source_37 = mod_consts.const_int_pos_17;
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_37 = mod_consts.const_int_pos_5;
condexpr_end_2:;
{
    PyObject *old = var_kmax;
    assert(old != NULL);
    var_kmax = tmp_assign_source_37;
    Py_INCREF(var_kmax);
    Py_DECREF(old);
}

}
branch_no_9:;
{
bool tmp_condition_result_12;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_6;
nuitka_digit tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_all_arg_1;
CHECK_OBJECT(var_background);
tmp_isinstance_inst_3 = var_background;
tmp_isinstance_cls_3 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_background);
tmp_len_arg_1 = var_background;
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = 4;
tmp_or_left_value_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_background);
tmp_iter_arg_3 = var_background;
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_operand_value_2 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_or_right_value_3 = (tmp_res == 0) ? true : false;
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_12 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_12 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = mod_consts.const_str_digest_a74c20155f1af6f5cc194929ee9c8680;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_background);
tmp_format_value_1 = var_background;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_39 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_39 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 219;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_10:;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_background);
tmp_iter_arg_4 = var_background;
tmp_assign_source_40 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 4);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 2, 4);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_44 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 3, 4);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_4;
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
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
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_45 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_bg_r;
    var_bg_r = tmp_assign_source_45;
    Py_INCREF(var_bg_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_46 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_bg_g;
    var_bg_g = tmp_assign_source_46;
    Py_INCREF(var_bg_g);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_47 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_bg_b;
    var_bg_b = tmp_assign_source_47;
    Py_INCREF(var_bg_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_48 = tmp_tuple_unpack_2__element_4;
{
    PyObject *old = var_bg_a;
    var_bg_a = tmp_assign_source_48;
    Py_INCREF(var_bg_a);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
PyObject *tmp_assign_source_49;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_bitor_expr_left_3;
PyObject *tmp_bitor_expr_right_3;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_lshift_expr_left_2;
PyObject *tmp_lshift_expr_right_2;
PyObject *tmp_lshift_expr_left_3;
PyObject *tmp_lshift_expr_right_3;
PyObject *tmp_lshift_expr_left_4;
PyObject *tmp_lshift_expr_right_4;
CHECK_OBJECT(var_bg_a);
tmp_lshift_expr_left_1 = var_bg_a;
tmp_lshift_expr_right_1 = mod_consts.const_int_pos_24;
tmp_bitor_expr_left_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
if (tmp_bitor_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bg_r);
tmp_lshift_expr_left_2 = var_bg_r;
tmp_lshift_expr_right_2 = mod_consts.const_int_pos_16;
tmp_bitor_expr_right_3 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
if (tmp_bitor_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_3);

exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
CHECK_OBJECT(tmp_bitor_expr_left_3);
Py_DECREF(tmp_bitor_expr_left_3);
CHECK_OBJECT(tmp_bitor_expr_right_3);
Py_DECREF(tmp_bitor_expr_right_3);
if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bg_g);
tmp_lshift_expr_left_3 = var_bg_g;
tmp_lshift_expr_right_3 = mod_consts.const_int_pos_8;
tmp_bitor_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_3, tmp_lshift_expr_right_3);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bg_b);
tmp_lshift_expr_left_4 = var_bg_b;
tmp_lshift_expr_right_4 = const_int_0;
tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_4, tmp_lshift_expr_right_4);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_49 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_background;
    assert(old != NULL);
    var_background = tmp_assign_source_49;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_expression_value_39 = module_var_accessor_PIL$WebPImagePlugin$_webp(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__webp);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_WebPAnimEncoder);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_40 = par_im;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_size);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 227;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_background);
tmp_args_element_value_7 = var_background;
CHECK_OBJECT(var_loop);
tmp_args_element_value_8 = var_loop;
CHECK_OBJECT(var_minimize_size);
tmp_args_element_value_9 = var_minimize_size;
CHECK_OBJECT(var_kmin);
tmp_args_element_value_10 = var_kmin;
CHECK_OBJECT(var_kmax);
tmp_args_element_value_11 = var_kmax;
CHECK_OBJECT(var_allow_mixed);
tmp_args_element_value_12 = var_allow_mixed;
tmp_args_element_value_13 = Py_False;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_enc;
    var_enc = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = const_int_0;
{
    PyObject *old = var_frame_idx;
    var_frame_idx = tmp_assign_source_51;
    Py_INCREF(var_frame_idx);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = const_int_0;
{
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_52;
    Py_INCREF(var_timestamp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_im);
tmp_called_instance_3 = par_im;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 240;
tmp_assign_source_53 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_tell);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cur_idx;
    var_cur_idx = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_iter_arg_5;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_list_element_2;
CHECK_OBJECT(par_im);
tmp_list_element_2 = par_im;
tmp_add_expr_left_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_left_3, 0, tmp_list_element_2);
CHECK_OBJECT(var_append_images);
tmp_add_expr_right_3 = var_append_images;
tmp_iter_arg_5 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
assert(!(tmp_iter_arg_5 == NULL));
tmp_assign_source_54 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_55;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_55 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_55 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
exception_lineno = 242;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_56 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_ims;
    var_ims = tmp_assign_source_56;
    Py_INCREF(var_ims);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(var_ims);
tmp_expression_value_41 = var_ims;
tmp_name_value_2 = mod_consts.const_str_plain_n_frames;
tmp_default_value_2 = const_int_pos_1;
tmp_assign_source_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_2, tmp_default_value_2);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_nfr;
    var_nfr = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_iter_arg_6;
PyObject *tmp_xrange_low_1;
CHECK_OBJECT(var_nfr);
tmp_xrange_low_1 = var_nfr;
tmp_iter_arg_6 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_58 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_59;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_59 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_59 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
exception_lineno = 246;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_60 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_60;
    Py_INCREF(var_idx);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_14;
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 247;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_instance_4 = var_ims;
CHECK_OBJECT(var_idx);
tmp_args_element_value_14 = var_idx;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 247;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_seek, tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_15;
tmp_called_value_19 = module_var_accessor_PIL$WebPImagePlugin$_convert_frame(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__convert_frame);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
if (var_ims == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ims);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_15 = var_ims;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 249;
tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_15);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = var_frame;
    var_frame = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_42;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_17;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
if (var_enc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_42 = var_enc;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_add);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(var_frame);
tmp_called_instance_5 = var_frame;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 253;
tmp_args_element_value_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 253;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_21 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_21 != NULL);
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_18 = var_timestamp;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 254;
tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
if (var_lossless == NULL) {
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lossless);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_19 = var_lossless;
if (var_quality == NULL) {
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quality);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_20 = var_quality;
if (var_alpha_quality == NULL) {
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_alpha_quality);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_21 = var_alpha_quality;
if (var_method == NULL) {
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_method);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_args_element_value_22 = var_method;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_isinstance_inst_4 = var_duration;
tmp_isinstance_cls_4 = mod_consts.const_tuple_type_list_type_tuple_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_4;
if (var_timestamp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_2 = var_timestamp;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_43 = var_duration;
if (var_frame_idx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame_idx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_subscript_value_4 = var_frame_idx;
tmp_iadd_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_4);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_62 = tmp_iadd_expr_left_2;
var_timestamp = tmp_assign_source_62;

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
if (var_timestamp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_3 = var_timestamp;
if (var_duration == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_duration);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_right_3 = var_duration;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_63 = tmp_iadd_expr_left_3;
var_timestamp = tmp_assign_source_63;

}
branch_end_11:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
if (var_frame_idx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_frame_idx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}

tmp_iadd_expr_left_4 = var_frame_idx;
tmp_iadd_expr_right_4 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_64 = tmp_iadd_expr_left_4;
var_frame_idx = tmp_assign_source_64;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_3;
loop_end_3:;
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_9;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_9;
}
goto loop_start_2;
loop_end_2:;
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__12__save_all, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__12__save_all, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_23;
CHECK_OBJECT(par_im);
tmp_called_instance_6 = par_im;
CHECK_OBJECT(var_cur_idx);
tmp_args_element_value_23 = var_cur_idx;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 269;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_seek, tmp_args_element_value_23);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame)) {
        frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
goto try_except_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_24;
CHECK_OBJECT(par_im);
tmp_called_instance_7 = par_im;
CHECK_OBJECT(var_cur_idx);
tmp_args_element_value_24 = var_cur_idx;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 269;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_seek, tmp_args_element_value_24);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_44;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
if (var_enc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_44 = var_enc;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_add);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_25 = Py_None;
tmp_called_value_23 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_23 != NULL);
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_22);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_27 = var_timestamp;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 272;
tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_27);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_lossless == NULL) {
Py_DECREF(tmp_called_value_22);
Py_DECREF(tmp_args_element_value_26);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lossless);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_28 = var_lossless;
if (var_quality == NULL) {
Py_DECREF(tmp_called_value_22);
Py_DECREF(tmp_args_element_value_26);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_quality);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_29 = var_quality;
if (var_alpha_quality == NULL) {
Py_DECREF(tmp_called_value_22);
Py_DECREF(tmp_args_element_value_26);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_alpha_quality);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_30 = var_alpha_quality;
tmp_args_element_value_31 = const_int_0;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 272;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
if (var_enc == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enc);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_8 = var_enc;
CHECK_OBJECT(var_icc_profile);
tmp_args_element_value_32 = var_icc_profile;
CHECK_OBJECT(var_exif);
tmp_args_element_value_33 = var_exif;
CHECK_OBJECT(var_xmp);
tmp_args_element_value_34 = var_xmp;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 275;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_assign_source_65 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_8,
        mod_consts.const_str_plain_assemble,
        call_args
    );
}

if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_7 = var_data;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 278;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 278;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_12:;
{
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_35;
CHECK_OBJECT(par_fp);
tmp_called_instance_9 = par_fp;
CHECK_OBJECT(var_data);
tmp_args_element_value_35 = var_data;
frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame.f_lineno = 280;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_write, tmp_args_element_value_35);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooooooooNoooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__12__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__12__save_all->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__12__save_all, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__12__save_all,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    var_background,
    var_encoderinfo,
    var_append_images,
    var_total,
    var_ims,
    var_palette,
    var_r,
    var_g,
    var_b,
    var_duration,
    var_loop,
    var_minimize_size,
    var_kmin,
    var_kmax,
    var_allow_mixed,
    NULL,
    var_lossless,
    var_quality,
    var_alpha_quality,
    var_method,
    var_icc_profile,
    var_exif,
    var_xmp,
    var_msg,
    var_bg_r,
    var_bg_g,
    var_bg_b,
    var_bg_a,
    var_enc,
    var_frame_idx,
    var_timestamp,
    var_cur_idx,
    var_nfr,
    var_idx,
    var_frame,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__12__save_all == cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__12__save_all = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__12__save_all);

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
Py_XDECREF(var_background);
var_background = NULL;
CHECK_OBJECT(var_encoderinfo);
CHECK_OBJECT(var_encoderinfo);
Py_DECREF(var_encoderinfo);
var_encoderinfo = NULL;
CHECK_OBJECT(var_append_images);
CHECK_OBJECT(var_append_images);
Py_DECREF(var_append_images);
var_append_images = NULL;
Py_XDECREF(var_total);
var_total = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_duration);
var_duration = NULL;
Py_XDECREF(var_loop);
var_loop = NULL;
Py_XDECREF(var_minimize_size);
var_minimize_size = NULL;
Py_XDECREF(var_kmin);
var_kmin = NULL;
Py_XDECREF(var_kmax);
var_kmax = NULL;
Py_XDECREF(var_allow_mixed);
var_allow_mixed = NULL;
Py_XDECREF(var_lossless);
var_lossless = NULL;
Py_XDECREF(var_quality);
var_quality = NULL;
Py_XDECREF(var_alpha_quality);
var_alpha_quality = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_icc_profile);
var_icc_profile = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_bg_r);
var_bg_r = NULL;
Py_XDECREF(var_bg_g);
var_bg_g = NULL;
Py_XDECREF(var_bg_b);
var_bg_b = NULL;
Py_XDECREF(var_bg_a);
var_bg_a = NULL;
Py_XDECREF(var_enc);
var_enc = NULL;
Py_XDECREF(var_frame_idx);
var_frame_idx = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_cur_idx);
var_cur_idx = NULL;
Py_XDECREF(var_nfr);
var_nfr = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_background);
var_background = NULL;
Py_XDECREF(var_encoderinfo);
var_encoderinfo = NULL;
Py_XDECREF(var_append_images);
var_append_images = NULL;
Py_XDECREF(var_total);
var_total = NULL;
Py_XDECREF(var_ims);
var_ims = NULL;
Py_XDECREF(var_palette);
var_palette = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_duration);
var_duration = NULL;
Py_XDECREF(var_loop);
var_loop = NULL;
Py_XDECREF(var_minimize_size);
var_minimize_size = NULL;
Py_XDECREF(var_kmin);
var_kmin = NULL;
Py_XDECREF(var_kmax);
var_kmax = NULL;
Py_XDECREF(var_allow_mixed);
var_allow_mixed = NULL;
Py_XDECREF(var_lossless);
var_lossless = NULL;
Py_XDECREF(var_quality);
var_quality = NULL;
Py_XDECREF(var_alpha_quality);
var_alpha_quality = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_icc_profile);
var_icc_profile = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_bg_r);
var_bg_r = NULL;
Py_XDECREF(var_bg_g);
var_bg_g = NULL;
Py_XDECREF(var_bg_b);
var_bg_b = NULL;
Py_XDECREF(var_bg_a);
var_bg_a = NULL;
Py_XDECREF(var_enc);
var_enc = NULL;
Py_XDECREF(var_frame_idx);
var_frame_idx = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_cur_idx);
var_cur_idx = NULL;
Py_XDECREF(var_nfr);
var_nfr = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_frame);
var_frame = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

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



#if 1
struct PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_locals {
PyObject *var_v;
PyObject *tmp_comparison_chain_1__comparison_result;
PyObject *tmp_comparison_chain_1__operand_2;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_locals *generator_heap = (struct PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_v = NULL;
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a0089f126cad523a099bc03b542a88e8, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 216;
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
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->var_v);
tmp_assign_source_3 = generator_heap->var_v;
{
    PyObject *old = generator_heap->tmp_comparison_chain_1__operand_2;
    generator_heap->tmp_comparison_chain_1__operand_2 = tmp_assign_source_3;
    Py_INCREF(generator_heap->tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_int_0;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = generator_heap->tmp_comparison_chain_1__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "No";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_comparison_chain_1__comparison_result;
    generator_heap->tmp_comparison_chain_1__comparison_result = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "No";
    goto try_except_handler_3;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
tmp_expression_value_1 = generator_heap->tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_expression_value_1);
goto try_return_handler_3;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = generator_heap->tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_256;
tmp_expression_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "No";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__comparison_result);
Py_DECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(generator_heap->tmp_comparison_chain_1__operand_2);
Py_DECREF(generator_heap->tmp_comparison_chain_1__operand_2);
generator_heap->tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(generator_heap->tmp_comparison_chain_1__comparison_result);
generator_heap->tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 216;
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


generator_heap->exception_lineno = 216;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

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
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_GENERATOR_PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_context,
        module_PIL$WebPImagePlugin,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_765d8b4d057934e76a7896ad710d1a29,
#endif
        code_objects_a0089f126cad523a099bc03b542a88e8,
        closure,
        1,
#if 1
        sizeof(struct PIL$WebPImagePlugin$$$function__12__save_all$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_PIL$WebPImagePlugin$$$function__13__save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_fp = python_pars[1];
PyObject *par_filename = python_pars[2];
PyObject *var_lossless = NULL;
PyObject *var_quality = NULL;
PyObject *var_alpha_quality = NULL;
PyObject *var_icc_profile = NULL;
PyObject *var_exif = NULL;
PyObject *var_xmp = NULL;
PyObject *var_method = NULL;
PyObject *var_exact = NULL;
PyObject *var_data = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$function__13__save;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save)) {
    Py_XDECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save = MAKE_FUNCTION_FRAME(tstate, code_objects_0c3184d5886143ebd086a6fbcbb12b4c, module_PIL$WebPImagePlugin, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_type_description == NULL);
frame_frame_PIL$WebPImagePlugin$$$function__13__save = cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$function__13__save);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$function__13__save) == 2);

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


exception_lineno = 284;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 284;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_lossless_false_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lossless;
    var_lossless = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_im);
tmp_expression_value_4 = par_im;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 285;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_quality_int_pos_80_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_quality;
    var_quality = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_im);
tmp_expression_value_6 = par_im;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 286;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_alpha_quality_int_pos_100_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_alpha_quality;
    var_alpha_quality = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_im);
tmp_expression_value_8 = par_im;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 287;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_icc_profile_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 287;
type_description_1 = "ooooooooooooN";
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
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_4 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_icc_profile;
    var_icc_profile = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_im);
tmp_expression_value_10 = par_im;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 288;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_exif_bytes_empty_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    var_exif = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_exif);
tmp_isinstance_inst_1 = var_exif;
tmp_expression_value_11 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Exif);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooN";
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_exif);
tmp_called_instance_1 = var_exif;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 290;
tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tobytes);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_exif);
tmp_expression_value_12 = var_exif;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_startswith);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 291;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_bytes_digest_105a85d9789b8dcdfbfc98d86d5554af_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 291;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_exif);
tmp_expression_value_13 = var_exif;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_6_none_none;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_exif;
    assert(old != NULL);
    var_exif = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_im);
tmp_expression_value_15 = par_im;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 293;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_xmp_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_xmp;
    var_xmp = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_im);
tmp_expression_value_17 = par_im;
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 294;
tmp_assign_source_9 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_method_int_pos_4_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_method;
    var_method = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_im);
tmp_expression_value_19 = par_im;
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_encoderinfo);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 295;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_exact_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 295;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_10 = const_int_pos_1;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_10 = const_int_0;
condexpr_end_1:;
{
    PyObject *old = var_exact;
    var_exact = tmp_assign_source_10;
    Py_INCREF(var_exact);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_1;
tmp_called_value_10 = module_var_accessor_PIL$WebPImagePlugin$_convert_frame(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__convert_frame);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 297;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_im;
    assert(old != NULL);
    par_im = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_20;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_float_arg_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_float_arg_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_20 = module_var_accessor_PIL$WebPImagePlugin$_webp(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__webp);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_WebPEncode);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_called_instance_2 = par_im;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 300;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 300;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lossless);
tmp_args_element_value_3 = var_lossless;
CHECK_OBJECT(var_quality);
tmp_float_arg_1 = var_quality;
tmp_args_element_value_4 = TO_FLOAT(tmp_float_arg_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 302;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_alpha_quality);
tmp_float_arg_2 = var_alpha_quality;
tmp_args_element_value_5 = TO_FLOAT(tmp_float_arg_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 303;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_icc_profile);
tmp_args_element_value_6 = var_icc_profile;
CHECK_OBJECT(var_method);
tmp_args_element_value_7 = var_method;
CHECK_OBJECT(var_exact);
tmp_args_element_value_8 = var_exact;
if (var_exif == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exif);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 307;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = var_exif;
CHECK_OBJECT(var_xmp);
tmp_args_element_value_10 = var_xmp;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 299;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS9(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_1 = var_data;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_cc1c6a9c55e26d3b72fa93e1405e05ad;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 312;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 312;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooN";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(par_fp);
tmp_called_instance_3 = par_fp;
CHECK_OBJECT(var_data);
tmp_args_element_value_11 = var_data;
frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame.f_lineno = 314;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooooooooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$function__13__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$function__13__save->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$function__13__save, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$function__13__save,
    type_description_1,
    par_im,
    par_fp,
    par_filename,
    var_lossless,
    var_quality,
    var_alpha_quality,
    var_icc_profile,
    var_exif,
    var_xmp,
    var_method,
    var_exact,
    var_data,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$WebPImagePlugin$$$function__13__save == cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save);
    cache_frame_frame_PIL$WebPImagePlugin$$$function__13__save = NULL;
}

assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$function__13__save);

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
CHECK_OBJECT(par_im);
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
par_im = NULL;
CHECK_OBJECT(var_lossless);
CHECK_OBJECT(var_lossless);
Py_DECREF(var_lossless);
var_lossless = NULL;
CHECK_OBJECT(var_quality);
CHECK_OBJECT(var_quality);
Py_DECREF(var_quality);
var_quality = NULL;
CHECK_OBJECT(var_alpha_quality);
CHECK_OBJECT(var_alpha_quality);
Py_DECREF(var_alpha_quality);
var_alpha_quality = NULL;
CHECK_OBJECT(var_icc_profile);
CHECK_OBJECT(var_icc_profile);
Py_DECREF(var_icc_profile);
var_icc_profile = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
CHECK_OBJECT(var_xmp);
CHECK_OBJECT(var_xmp);
Py_DECREF(var_xmp);
var_xmp = NULL;
CHECK_OBJECT(var_method);
CHECK_OBJECT(var_method);
Py_DECREF(var_method);
var_method = NULL;
CHECK_OBJECT(var_exact);
CHECK_OBJECT(var_exact);
Py_DECREF(var_exact);
var_exact = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_im);
par_im = NULL;
Py_XDECREF(var_lossless);
var_lossless = NULL;
Py_XDECREF(var_quality);
var_quality = NULL;
Py_XDECREF(var_alpha_quality);
var_alpha_quality = NULL;
Py_XDECREF(var_icc_profile);
var_icc_profile = NULL;
Py_XDECREF(var_exif);
var_exif = NULL;
Py_XDECREF(var_xmp);
var_xmp = NULL;
Py_XDECREF(var_method);
var_method = NULL;
Py_XDECREF(var_exact);
var_exact = NULL;
Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__10_tell(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__10_tell,
        mod_consts.const_str_plain_tell,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_95d97d8e4404646cb39ab01289c612a8,
#endif
        code_objects_71d83c95cdcf647e3ed51c27672febfa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__11__convert_frame(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__11__convert_frame,
        mod_consts.const_str_plain__convert_frame,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c393db7e53b3b1a7e2a098f99d15fcf3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__12__save_all(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__12__save_all,
        mod_consts.const_str_plain__save_all,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9105eb53fb9025dd5c05a88dda77fc63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__13__save(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__13__save,
        mod_consts.const_str_plain__save,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0c3184d5886143ebd086a6fbcbb12b4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__1__accept(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__1__accept,
        mod_consts.const_str_plain__accept,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dff9886db996d1bc304043d464f89594,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__2__open(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__2__open,
        mod_consts.const_str_plain__open,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d03755c48a2023b5e8dc014bcfb0d542,
#endif
        code_objects_fe6c3d3871e8e13447633c957d9cb621,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__3__getexif(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__3__getexif,
        mod_consts.const_str_plain__getexif,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eaeee61a23c53ca102ba3671b24cc922,
#endif
        code_objects_a633455335f12eb75798e43067bab31a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__4_seek(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__4_seek,
        mod_consts.const_str_plain_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d8cb699b1283c318e47cca1af43e48b,
#endif
        code_objects_ab73769722b4a32fc6ac7ff9e423828e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__5__reset(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__5__reset,
        mod_consts.const_str_plain__reset,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9290b67dd95fbc331ea397a04a4d4427,
#endif
        code_objects_937738e78f50aa80d4945f60c55d4dd0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__6__get_next(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__6__get_next,
        mod_consts.const_str_plain__get_next,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a009cf55be81f997679243107bd112e4,
#endif
        code_objects_e259b47f51b4a5ca19ce933ac1895efe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__7__seek(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__7__seek,
        mod_consts.const_str_plain__seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05c44758799635fbeea3b2b0701e8828,
#endif
        code_objects_d0889f448f3ae0d36fd761d6ea41f41d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__8_load(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$WebPImagePlugin$$$function__8_load,
        mod_consts.const_str_plain_load,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_780fbf4ee691f1c073b1b60039b07046,
#endif
        code_objects_cdef0ebe1c2bff9fe7a43d43ca52f63e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__9_load_seek(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_load_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ad69428cd0c38d630ab05c314924d6b,
#endif
        code_objects_a7a768c449c82901aa725d8ffda46073,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$WebPImagePlugin,
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

static function_impl_code const function_table_PIL$WebPImagePlugin[] = {
impl_PIL$WebPImagePlugin$$$function__1__accept,
impl_PIL$WebPImagePlugin$$$function__2__open,
impl_PIL$WebPImagePlugin$$$function__3__getexif,
impl_PIL$WebPImagePlugin$$$function__4_seek,
impl_PIL$WebPImagePlugin$$$function__5__reset,
impl_PIL$WebPImagePlugin$$$function__6__get_next,
impl_PIL$WebPImagePlugin$$$function__7__seek,
impl_PIL$WebPImagePlugin$$$function__8_load,
impl_PIL$WebPImagePlugin$$$function__10_tell,
impl_PIL$WebPImagePlugin$$$function__11__convert_frame,
impl_PIL$WebPImagePlugin$$$function__12__save_all,
impl_PIL$WebPImagePlugin$$$function__13__save,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$WebPImagePlugin);
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
        module_PIL$WebPImagePlugin,
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
        function_table_PIL$WebPImagePlugin,
        sizeof(function_table_PIL$WebPImagePlugin) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.WebPImagePlugin";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$WebPImagePlugin(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$WebPImagePlugin");

    // Store the module for future use.
    module_PIL$WebPImagePlugin = module;

    moduledict_PIL$WebPImagePlugin = MODULE_DICT(module_PIL$WebPImagePlugin);

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
        PRINT_STRING("PIL$WebPImagePlugin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$WebPImagePlugin: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$WebPImagePlugin: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.WebPImagePlugin" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$WebPImagePlugin\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$WebPImagePlugin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$WebPImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$WebPImagePlugin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$WebPImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$WebPImagePlugin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$WebPImagePlugin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$WebPImagePlugin);
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

        UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin;
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
PyObject *locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2;
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
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$WebPImagePlugin = MAKE_MODULE_FRAME(code_objects_8ddf938dcbbf79b2c005127776c313f6, module_PIL$WebPImagePlugin);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$WebPImagePlugin$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$WebPImagePlugin$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$WebPImagePlugin;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_PIL$WebPImagePlugin,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_8);
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
        (PyObject *)moduledict_PIL$WebPImagePlugin,
        mod_consts.const_str_plain_ImageFile,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ImageFile);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$WebPImagePlugin;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__webp_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$WebPImagePlugin,
        mod_consts.const_str_plain__webp,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__webp);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__webp, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED, tmp_assign_source_11);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin, exception_keeper_lineno_2);
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_SUPPORTED, tmp_assign_source_12);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 7;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$WebPImagePlugin->m_frame)) {
        frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = exception_tb->tb_lineno;
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
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = DICT_COPY(tstate, mod_consts.const_dict_5a33a4ae2c096983451c6b790db6c852);
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__VP8_MODES_BY_IDENTIFIER, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9aa70217f5a39f0e37caeb95ab54b439);

tmp_assign_source_15 = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__1__accept(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__accept, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$WebPImagePlugin$ImageFile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageFile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto try_except_handler_4;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ImageFile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_4;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_16, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
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


exception_lineno = 39;

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


exception_lineno = 39;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
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


exception_lineno = 39;

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
PyObject *tmp_assign_source_20;
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


exception_lineno = 39;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_WebPImageFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 39;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
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


exception_lineno = 39;

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


exception_lineno = 39;

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


exception_lineno = 39;

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


exception_lineno = 39;

    goto try_except_handler_4;
}
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 39;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 39;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_2:;
{
PyObject *tmp_assign_source_22;
outline_0_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_41af1f0fb42323296cd08c30c4725051;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_WebPImageFile;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_39;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
}
frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_d8f17bd0392ac18bf78c6725b9a2d532, module_PIL$WebPImagePlugin, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2, locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2);
assert(Py_REFCNT(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_WEBP;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, const_str_plain_format, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_str_digest_43dbebc7efd74d45cb3dcb0a05c3280b;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain_format_description, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__WebPImageFile__loaded, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__WebPImageFile__logical_frame, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__2__open(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__open, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_3f959f77f64cad21cbafb49fc395b91e);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__3__getexif(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__getexif, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__4_seek(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_c248b82cf844439399506fbc42de2d9a);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__5__reset(tstate, tmp_defaults_1, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__reset, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0584357c15fbc1791a5ea5733a87b982);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__6__get_next(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__get_next, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_d4b5230838d4aaf3fa77f9421d5420a0);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__7__seek(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain__seek, tmp_dictset_value);
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
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_a37b02cbeb5af50e659ce64a4824e55a);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__8_load(tstate, tmp_annotations_8, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain_load, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_ed6f90097ef68649ee7ba7c17849bdd4);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__9_load_seek(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain_load_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__10_tell(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain_tell, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$WebPImagePlugin$$$class__1_WebPImageFile_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_9e210af43f573bef7263d1c2ebffc068_tuple;
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

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


exception_lineno = 39;

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
tmp_res = PyObject_SetItem(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
}
branch_no_4:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_WebPImageFile;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_1, const_str_plain___classcell__, (PyObject *)outline_0_var___class__);
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_6;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_0_var___class__);
    PyCell_SET((PyObject *)outline_0_var___class__, tmp_assign_source_23);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_0_var___class__));
tmp_assign_source_22 = PyCell_GET((PyObject *)outline_0_var___class__);
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39);
locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39);
locals_PIL$WebPImagePlugin$$$class__1_WebPImageFile_39 = NULL;
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
exception_lineno = 39;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebPImageFile, tmp_assign_source_22);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);

tmp_assign_source_24 = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__11__convert_frame(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__convert_frame, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_25 = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__12__save_all(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save_all, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_b018ccd271180f61287e4749ac87b316);

tmp_assign_source_26 = MAKE_FUNCTION_PIL$WebPImagePlugin$$$function__13__save(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)mod_consts.const_str_plain__save, tmp_assign_source_26);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_8 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_register_open);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 317;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_PIL$WebPImagePlugin$_accept(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__accept);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 317;

    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 317;
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


exception_lineno = 317;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_PIL$WebPImagePlugin$SUPPORTED(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SUPPORTED);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;

    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;

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
tmp_expression_value_10 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 319;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_register_save);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 319;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_format);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 319;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_PIL$WebPImagePlugin$_save(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 319;

    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 319;
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


exception_lineno = 319;

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
tmp_expression_value_12 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_register_save_all);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto frame_exception_exit_1;
}
tmp_expression_value_13 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 320;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_format);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 320;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = module_var_accessor_PIL$WebPImagePlugin$_save_all(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__save_all);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 320;

    goto frame_exception_exit_1;
}
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 320;
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


exception_lineno = 320;

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
tmp_expression_value_14 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_register_extension);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;

    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 321;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_format);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 321;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_007ae19f9470b6343c7f97ec5accb9e4;
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 321;
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


exception_lineno = 321;

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
tmp_expression_value_16 = module_var_accessor_PIL$WebPImagePlugin$Image(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_register_mime);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = module_var_accessor_PIL$WebPImagePlugin$WebPImageFile(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebPImageFile);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 322;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_format);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 322;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_6dc3951e06305e776d52c45f96e8d674;
frame_frame_PIL$WebPImagePlugin->m_frame.f_lineno = 322;
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


exception_lineno = 322;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$WebPImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$WebPImagePlugin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$WebPImagePlugin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$WebPImagePlugin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$WebPImagePlugin", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.WebPImagePlugin" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$WebPImagePlugin);
    return module_PIL$WebPImagePlugin;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$WebPImagePlugin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$WebPImagePlugin", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
