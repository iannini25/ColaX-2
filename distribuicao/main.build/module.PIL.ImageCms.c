/* Generated code for Python module 'PIL$ImageCms'
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



/* The "module_PIL$ImageCms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageCms;
PyDictObject *moduledict_PIL$ImageCms;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Flags;
PyObject *const_str_plain_NONE;
PyObject *const_int_pos_255;
PyObject *const_int_pos_16;
PyObject *const_str_digest_1cc9bda0383b3e9263fbab3c039e4513;
PyObject *const_str_plain_filename;
PyObject *const_str_plain_encode;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_core;
PyObject *const_str_plain_profile_frombytes;
PyObject *const_str_plain_profile;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_profile_open;
PyObject *const_str_plain_CmsProfile;
PyObject *const_str_digest_7c6d1c6514d9825363582ee08d1bfe72;
PyObject *const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f;
PyObject *const_tuple_str_plain_product_name_str_plain_product_info_tuple;
PyObject *const_str_plain_deprecate;
PyObject *const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365;
PyObject *const_int_pos_13;
PyObject *const_str_chr_39;
PyObject *const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b;
PyObject *const_str_plain_profile_tobytes;
PyObject *const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182;
PyObject *const_str_plain_buildTransform;
PyObject *const_str_plain_transform;
PyObject *const_str_plain_buildProofTransform;
PyObject *const_str_plain_input_mode;
PyObject *const_str_plain_inputMode;
PyObject *const_str_plain_output_mode;
PyObject *const_str_plain_outputMode;
PyObject *const_str_plain_output_profile;
PyObject *const_str_plain_apply;
PyObject *const_str_plain_mode;
PyObject *const_str_digest_bfc054ed0ea60d1b2432d08d440628e3;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_new;
PyObject *const_str_plain_size;
PyObject *const_str_plain_getim;
PyObject *const_str_plain_imOut;
PyObject *const_str_plain_tobytes;
PyObject *const_str_plain_info;
PyObject *const_str_plain_icc_profile;
PyObject *const_tuple_str_plain_ImageWin_tuple;
PyObject *const_str_plain_ImageWin;
PyObject *const_str_plain_HDC;
PyObject *const_str_plain_get_display_profile_win32;
PyObject *const_str_plain_ImageCmsProfile;
PyObject *const_str_digest_bf6a363f5101974a7da185659ac1153d;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PyCMSError;
PyObject *const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple;
PyObject *const_str_plain__MAX_FLAG;
PyObject *const_str_digest_0350bbba4e0c470673ad1913f0734c67;
PyObject *const_str_plain_ImageCmsTransform;
PyObject *const_tuple_str_plain_flags_tuple;
PyObject *const_str_plain_apply_in_place;
PyObject *const_tuple_type_OSError_type_TypeError_type_ValueError_tuple;
PyObject *const_str_digest_dc80433ecdd5b3af880261bb5df36700;
PyObject *const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb;
PyObject *const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5;
PyObject *const_str_digest_4e876a642ab0f2fb447e51c066a968d7;
PyObject *const_tuple_type_TypeError_type_ValueError_tuple;
PyObject *const_str_digest_23339e30642186d2a03201a38617d28e;
PyObject *const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple;
PyObject *const_str_digest_c525da6fd273f38ff76758354d5c0e0e;
PyObject *const_str_chr_41;
PyObject *const_str_plain_LAB;
PyObject *const_str_digest_ec49ba414a3a46e206a4ec952150906d;
PyObject *const_str_digest_c0376487707d1d94ee880b8cd8f16da8;
PyObject *const_str_plain_createProfile;
PyObject *const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2;
PyObject *const_str_plain_model;
PyObject *const_str_plain_manufacturer;
PyObject *const_str_plain_profile_description;
PyObject *const_str_newline;
PyObject *const_str_digest_67df5f6d8badc97414fd7b08611a267f;
PyObject *const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
PyObject *const_str_digest_34a082c6c8040c607d266b7c7ddb43e8;
PyObject *const_str_plain_copyright;
PyObject *const_str_digest_e548705936de054393b3ac06f9f3c9d5;
PyObject *const_str_digest_01a7c7930b066a782c52359716bca55b;
PyObject *const_str_digest_191064ae33a0aa41e6eb2de88b02475a;
PyObject *const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8;
PyObject *const_str_digest_c99cf901c21334e1a174472a1ef39220;
PyObject *const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa;
PyObject *const_str_plain_rendering_intent;
PyObject *const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d;
PyObject *const_str_plain_is_intent_supported;
PyObject *const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain_IntFlag;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_SupportsFloat;
PyObject *const_str_plain_SupportsInt;
PyObject *const_str_plain_Union;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_str_plain__deprecate;
PyObject *const_tuple_str_plain_deprecate_tuple;
PyObject *const_str_plain__typing;
PyObject *const_tuple_str_plain_SupportsRead_tuple;
PyObject *const_str_plain_SupportsRead;
PyObject *const_tuple_str_plain__imagingcms_tuple;
PyObject *const_str_plain__imagingcms;
PyObject *const_str_plain__CmsProfileCompatible;
PyObject *const_str_plain_ex;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_DeferredError_tuple;
PyObject *const_str_plain_DeferredError;
PyObject *const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3;
PyObject *const_str_plain__DESCRIPTION;
PyObject *const_str_digest_9b45384fe064244dcb74767caa55ffaa;
PyObject *const_str_plain__VERSION;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Intent;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e94e7b791e32b740ac52a853621b0036;
PyObject *const_int_pos_118;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_PERCEPTUAL;
PyObject *const_str_plain_RELATIVE_COLORIMETRIC;
PyObject *const_int_pos_2;
PyObject *const_str_plain_SATURATION;
PyObject *const_str_plain_ABSOLUTE_COLORIMETRIC;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Direction;
PyObject *const_int_pos_125;
PyObject *const_str_plain_INPUT;
PyObject *const_str_plain_OUTPUT;
PyObject *const_str_plain_PROOF;
PyObject *const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24;
PyObject *const_int_pos_135;
PyObject *const_int_pos_64;
PyObject *const_str_plain_NOCACHE;
PyObject *const_int_pos_256;
PyObject *const_str_plain_NOOPTIMIZE;
PyObject *const_int_pos_512;
PyObject *const_str_plain_NULLTRANSFORM;
PyObject *const_int_pos_4096;
PyObject *const_str_plain_GAMUTCHECK;
PyObject *const_int_pos_16384;
PyObject *const_str_plain_SOFTPROOFING;
PyObject *const_int_pos_8192;
PyObject *const_str_plain_BLACKPOINTCOMPENSATION;
PyObject *const_int_pos_4;
PyObject *const_str_plain_NOWHITEONWHITEFIXUP;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_HIGHRESPRECALC;
PyObject *const_int_pos_2048;
PyObject *const_str_plain_LOWRESPRECALC;
PyObject *const_int_pos_8;
PyObject *const_str_plain_USE_8BITS_DEVICELINK;
PyObject *const_int_pos_32;
PyObject *const_str_plain_GUESSDEVICECLASS;
PyObject *const_int_pos_128;
PyObject *const_str_plain_KEEP_SEQUENCE;
PyObject *const_str_plain_FORCE_CLUT;
PyObject *const_str_plain_CLUT_POST_LINEARIZATION;
PyObject *const_str_plain_CLUT_PRE_LINEARIZATION;
PyObject *const_int_pos_32768;
PyObject *const_str_plain_NONEGATIVES;
PyObject *const_int_hex_4000000;
PyObject *const_str_plain_COPY_ALPHA;
PyObject *const_int_hex_1000000;
PyObject *const_str_plain_NODEFAULTRESOURCEDEF;
PyObject *const_int_pos_65536;
PyObject *const_str_plain__GRIDPOINTS_1;
PyObject *const_int_pos_131072;
PyObject *const_str_plain__GRIDPOINTS_2;
PyObject *const_int_pos_262144;
PyObject *const_str_plain__GRIDPOINTS_4;
PyObject *const_int_pos_524288;
PyObject *const_str_plain__GRIDPOINTS_8;
PyObject *const_int_pos_1048576;
PyObject *const_str_plain__GRIDPOINTS_16;
PyObject *const_int_pos_2097152;
PyObject *const_str_plain__GRIDPOINTS_32;
PyObject *const_int_pos_4194304;
PyObject *const_str_plain__GRIDPOINTS_64;
PyObject *const_int_pos_8388608;
PyObject *const_str_plain__GRIDPOINTS_128;
PyObject *const_dict_435eaaf48a7febe20adb84aa24c58df2;
PyObject *const_str_plain_GRIDPOINTS;
PyObject *const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d;
PyObject *const_str_plain_or_;
PyObject *const_str_plain_MATRIXINPUT;
PyObject *const_str_plain_MATRIXOUTPUT;
PyObject *const_str_plain_MATRIXONLY;
PyObject *const_str_plain_NOPRELINEARIZATION;
PyObject *const_str_plain_NOTCACHE;
PyObject *const_str_plain_NOTPRECALC;
PyObject *const_str_plain_WHITEBLACKCOMPENSATION;
PyObject *const_str_plain_PRESERVEBLACK;
PyObject *const_str_angle_lambda;
PyObject *const_str_plain__FLAGS;
PyObject *const_int_pos_229;
PyObject *const_dict_bc0209e90cc3948bfc7db1b412d3d07b;
PyObject *const_str_digest_d50f79aab55eebf987c611888206b3c9;
PyObject *const_dict_2135d94ca27eb9b9337533c7d9716438;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_9210074aa028800bf3626836d09d37a2;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_602f496f0e9cef547e3f39e063b8de5d;
PyObject *const_tuple_str_plain_filename_str_plain_profile_tuple;
PyObject *const_str_plain_ImagePointHandler;
PyObject *const_str_digest_091dc64f3c9bd7d25729f579fec0b274;
PyObject *const_int_pos_276;
PyObject *const_dict_3f758b8aff899a01503cde377c05532e;
PyObject *const_str_digest_a3ffb0e0898562376041af2a7e206aa2;
PyObject *const_dict_2070848e24313d5331c03bd584ce8f2d;
PyObject *const_str_plain_point;
PyObject *const_str_digest_81422cc944c95512dc90b11d073b8cc9;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_3d4ad18ca192efbe2e73d370f11733c1;
PyObject *const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024;
PyObject *const_str_digest_54ba0e85457829dfa68de5ad68ba2716;
PyObject *const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple;
PyObject *const_dict_8170b5d632419cfcf5553b3ce4e5a8fb;
PyObject *const_str_plain_get_display_profile;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_digest_7c75fed552a19f6fb4481cb16296b69d;
PyObject *const_int_pos_363;
PyObject *const_dict_9c40e5a636af3da0ffef107204cab3ee;
PyObject *const_str_plain_profileToProfile;
PyObject *const_dict_edabf5ed72fa93a194e37e6f0906e618;
PyObject *const_str_plain_getOpenProfile;
PyObject *const_dict_619cccaa7c0763ea90e8a550533b4d81;
PyObject *const_dict_489a58b8a6e5f3b34b784a30e1649a38;
PyObject *const_str_plain_buildTransformFromOpenProfiles;
PyObject *const_str_plain_buildProofTransformFromOpenProfiles;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_70453ad734044c24451623df719538be;
PyObject *const_str_plain_applyTransform;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_ca744bdb3888d502cc17039133d6f19a;
PyObject *const_dict_0c14862c1cb1f65012b386d75f24dcfb;
PyObject *const_str_plain_getProfileName;
PyObject *const_str_plain_getProfileInfo;
PyObject *const_str_plain_getProfileCopyright;
PyObject *const_str_plain_getProfileManufacturer;
PyObject *const_str_plain_getProfileModel;
PyObject *const_str_plain_getProfileDescription;
PyObject *const_dict_8e403060435a34554f48eea63baf70f6;
PyObject *const_str_plain_getDefaultIntent;
PyObject *const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8;
PyObject *const_str_plain_isIntentSupported;
PyObject *const_str_digest_654fed461d4e1a908579a3079a0010e5;
PyObject *const_tuple_str_plain_n_tuple;
PyObject *const_str_digest_221d526710e501f408249d3fd01d1035;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple;
PyObject *const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple;
PyObject *const_tuple_8d265ec843b47231d8a02027afd152f5_tuple;
PyObject *const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple;
PyObject *const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_im_tuple;
PyObject *const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple;
PyObject *const_tuple_aafd46da7d147313ded684294422b886_tuple;
PyObject *const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple;
PyObject *const_tuple_str_plain_profile_str_plain_v_tuple;
PyObject *const_tuple_str_plain_profileFilename_str_plain_v_tuple;
PyObject *const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple;
PyObject *const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple;
PyObject *const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple;
PyObject *const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple;
PyObject *const_tuple_9cade9a861842a476e3311941a4d6004_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[280];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageCms"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 280) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 280 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageCms"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Flags", mod_consts.const_str_plain_Flags);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONE", mod_consts.const_str_plain_NONE);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_NONE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513", mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filename", mod_consts.const_str_plain_filename);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_filename);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_frombytes", mod_consts.const_str_plain_profile_frombytes);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_profile_frombytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile", mod_consts.const_str_plain_profile);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_open", mod_consts.const_str_plain_profile_open);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_profile_open);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CmsProfile", mod_consts.const_str_plain_CmsProfile);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_CmsProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72", mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f", mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple", mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deprecate", mod_consts.const_str_plain_deprecate);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365", mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_int_pos_13);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b", mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_tobytes", mod_consts.const_str_plain_profile_tobytes);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_profile_tobytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182", mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildTransform", mod_consts.const_str_plain_buildTransform);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_buildTransform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transform", mod_consts.const_str_plain_transform);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildProofTransform", mod_consts.const_str_plain_buildProofTransform);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_buildProofTransform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_input_mode", mod_consts.const_str_plain_input_mode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inputMode", mod_consts.const_str_plain_inputMode);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_inputMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output_mode", mod_consts.const_str_plain_output_mode);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_outputMode", mod_consts.const_str_plain_outputMode);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_outputMode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output_profile", mod_consts.const_str_plain_output_profile);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply", mod_consts.const_str_plain_apply);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3", mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_getim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imOut", mod_consts.const_str_plain_imOut);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_imOut);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icc_profile", mod_consts.const_str_plain_icc_profile);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_icc_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ImageWin_tuple", mod_consts.const_tuple_str_plain_ImageWin_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageWin_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWin", mod_consts.const_str_plain_ImageWin);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HDC", mod_consts.const_str_plain_HDC);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_HDC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_display_profile_win32", mod_consts.const_str_plain_get_display_profile_win32);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_display_profile_win32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageCmsProfile", mod_consts.const_str_plain_ImageCmsProfile);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCmsProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d", mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyCMSError", mod_consts.const_str_plain_PyCMSError);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyCMSError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple", mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_FLAG", mod_consts.const_str_plain__MAX_FLAG);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_FLAG);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67", mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageCmsTransform", mod_consts.const_str_plain_ImageCmsTransform);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCmsTransform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_flags_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply_in_place", mod_consts.const_str_plain_apply_in_place);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_in_place);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700", mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb", mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5", mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7", mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e", mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple", mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e", mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAB", mod_consts.const_str_plain_LAB);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_LAB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d", mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8", mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_createProfile", mod_consts.const_str_plain_createProfile);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_createProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2", mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_model", mod_consts.const_str_plain_model);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_manufacturer", mod_consts.const_str_plain_manufacturer);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_manufacturer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_description", mod_consts.const_str_plain_profile_description);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_profile_description);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_newline", mod_consts.const_str_newline);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_newline);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f", mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple", mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8", mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copyright", mod_consts.const_str_plain_copyright);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_copyright);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5", mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b", mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a", mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8", mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220", mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa", mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rendering_intent", mod_consts.const_str_plain_rendering_intent);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_rendering_intent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d", mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_intent_supported", mod_consts.const_str_plain_is_intent_supported);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_intent_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce", mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operator", mod_consts.const_str_plain_operator);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple", mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntEnum", mod_consts.const_str_plain_IntEnum);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntFlag", mod_consts.const_str_plain_IntFlag);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntFlag);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reduce", mod_consts.const_str_plain_reduce);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Literal", mod_consts.const_str_plain_Literal);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsFloat", mod_consts.const_str_plain_SupportsFloat);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsFloat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsInt", mod_consts.const_str_plain_SupportsInt);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsInt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__deprecate", mod_consts.const_str_plain__deprecate);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__deprecate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_deprecate_tuple", mod_consts.const_tuple_str_plain_deprecate_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deprecate_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__typing", mod_consts.const_str_plain__typing);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SupportsRead_tuple", mod_consts.const_tuple_str_plain_SupportsRead_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupportsRead_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsRead", mod_consts.const_str_plain_SupportsRead);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsRead);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__imagingcms_tuple", mod_consts.const_tuple_str_plain__imagingcms_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__imagingcms_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingcms", mod_consts.const_str_plain__imagingcms);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__imagingcms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CmsProfileCompatible", mod_consts.const_str_plain__CmsProfileCompatible);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__CmsProfileCompatible);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ex", mod_consts.const_str_plain_ex);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_ex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__util", mod_consts.const_str_plain__util);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeferredError_tuple", mod_consts.const_tuple_str_plain_DeferredError_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeferredError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeferredError", mod_consts.const_str_plain_DeferredError);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeferredError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3", mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DESCRIPTION", mod_consts.const_str_plain__DESCRIPTION);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain__DESCRIPTION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa", mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VERSION", mod_consts.const_str_plain__VERSION);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain__VERSION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Intent", mod_consts.const_str_plain_Intent);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_Intent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036", mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_118);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PERCEPTUAL", mod_consts.const_str_plain_PERCEPTUAL);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_PERCEPTUAL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RELATIVE_COLORIMETRIC", mod_consts.const_str_plain_RELATIVE_COLORIMETRIC);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_RELATIVE_COLORIMETRIC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SATURATION", mod_consts.const_str_plain_SATURATION);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_SATURATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC", mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Direction", mod_consts.const_str_plain_Direction);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_Direction);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_125", mod_consts.const_int_pos_125);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_int_pos_125);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OUTPUT", mod_consts.const_str_plain_OUTPUT);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_OUTPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROOF", mod_consts.const_str_plain_PROOF);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_PROOF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24", mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_135", mod_consts.const_int_pos_135);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_int_pos_135);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOCACHE", mod_consts.const_str_plain_NOCACHE);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOCACHE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOOPTIMIZE", mod_consts.const_str_plain_NOOPTIMIZE);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOOPTIMIZE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NULLTRANSFORM", mod_consts.const_str_plain_NULLTRANSFORM);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULLTRANSFORM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GAMUTCHECK", mod_consts.const_str_plain_GAMUTCHECK);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_GAMUTCHECK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_16384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SOFTPROOFING", mod_consts.const_str_plain_SOFTPROOFING);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_SOFTPROOFING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8192", mod_consts.const_int_pos_8192);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_int_pos_8192);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BLACKPOINTCOMPENSATION", mod_consts.const_str_plain_BLACKPOINTCOMPENSATION);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_BLACKPOINTCOMPENSATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOWHITEONWHITEFIXUP", mod_consts.const_str_plain_NOWHITEONWHITEFIXUP);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOWHITEONWHITEFIXUP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HIGHRESPRECALC", mod_consts.const_str_plain_HIGHRESPRECALC);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_HIGHRESPRECALC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOWRESPRECALC", mod_consts.const_str_plain_LOWRESPRECALC);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOWRESPRECALC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_USE_8BITS_DEVICELINK", mod_consts.const_str_plain_USE_8BITS_DEVICELINK);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_USE_8BITS_DEVICELINK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GUESSDEVICECLASS", mod_consts.const_str_plain_GUESSDEVICECLASS);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_GUESSDEVICECLASS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEEP_SEQUENCE", mod_consts.const_str_plain_KEEP_SEQUENCE);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEEP_SEQUENCE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORCE_CLUT", mod_consts.const_str_plain_FORCE_CLUT);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_FORCE_CLUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLUT_POST_LINEARIZATION", mod_consts.const_str_plain_CLUT_POST_LINEARIZATION);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLUT_POST_LINEARIZATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION", mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_32768);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONEGATIVES", mod_consts.const_str_plain_NONEGATIVES);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_NONEGATIVES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_4000000", mod_consts.const_int_hex_4000000);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_hex_4000000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COPY_ALPHA", mod_consts.const_str_plain_COPY_ALPHA);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_COPY_ALPHA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_1000000", mod_consts.const_int_hex_1000000);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_hex_1000000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NODEFAULTRESOURCEDEF", mod_consts.const_str_plain_NODEFAULTRESOURCEDEF);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_NODEFAULTRESOURCEDEF);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_1", mod_consts.const_str_plain__GRIDPOINTS_1);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131072", mod_consts.const_int_pos_131072);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_131072);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_2", mod_consts.const_str_plain__GRIDPOINTS_2);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262144", mod_consts.const_int_pos_262144);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_int_pos_262144);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_4", mod_consts.const_str_plain__GRIDPOINTS_4);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524288", mod_consts.const_int_pos_524288);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_524288);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_8", mod_consts.const_str_plain__GRIDPOINTS_8);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1048576", mod_consts.const_int_pos_1048576);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_1048576);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_16", mod_consts.const_str_plain__GRIDPOINTS_16);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2097152", mod_consts.const_int_pos_2097152);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_int_pos_2097152);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_32", mod_consts.const_str_plain__GRIDPOINTS_32);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4194304", mod_consts.const_int_pos_4194304);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_4194304);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_64", mod_consts.const_str_plain__GRIDPOINTS_64);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8388608", mod_consts.const_int_pos_8388608);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_8388608);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_128", mod_consts.const_str_plain__GRIDPOINTS_128);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2", mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GRIDPOINTS", mod_consts.const_str_plain_GRIDPOINTS);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_GRIDPOINTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d", mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_or_", mod_consts.const_str_plain_or_);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_or_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXINPUT", mod_consts.const_str_plain_MATRIXINPUT);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXINPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXOUTPUT", mod_consts.const_str_plain_MATRIXOUTPUT);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXOUTPUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXONLY", mod_consts.const_str_plain_MATRIXONLY);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXONLY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOPRELINEARIZATION", mod_consts.const_str_plain_NOPRELINEARIZATION);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOPRELINEARIZATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOTCACHE", mod_consts.const_str_plain_NOTCACHE);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOTCACHE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOTPRECALC", mod_consts.const_str_plain_NOTPRECALC);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOTPRECALC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHITEBLACKCOMPENSATION", mod_consts.const_str_plain_WHITEBLACKCOMPENSATION);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_WHITEBLACKCOMPENSATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRESERVEBLACK", mod_consts.const_str_plain_PRESERVEBLACK);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_PRESERVEBLACK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FLAGS", mod_consts.const_str_plain__FLAGS);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain__FLAGS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_229", mod_consts.const_int_pos_229);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_int_pos_229);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b", mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9", mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438", mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getattr__", mod_consts.const_str_plain___getattr__);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2", mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d", mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple", mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePointHandler", mod_consts.const_str_plain_ImagePointHandler);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePointHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274", mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_276", mod_consts.const_int_pos_276);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_int_pos_276);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f758b8aff899a01503cde377c05532e", mod_consts.const_dict_3f758b8aff899a01503cde377c05532e);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_3f758b8aff899a01503cde377c05532e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2", mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d", mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain_point);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9", mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1", mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024", mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716", mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple", mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb", mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_display_profile", mod_consts.const_str_plain_get_display_profile);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_display_profile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_Exception_tuple", mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d", mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_363", mod_consts.const_int_pos_363);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_int_pos_363);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee", mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profileToProfile", mod_consts.const_str_plain_profileToProfile);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_plain_profileToProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618", mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getOpenProfile", mod_consts.const_str_plain_getOpenProfile);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_getOpenProfile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81", mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38", mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildTransformFromOpenProfiles", mod_consts.const_str_plain_buildTransformFromOpenProfiles);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_buildTransformFromOpenProfiles);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildProofTransformFromOpenProfiles", mod_consts.const_str_plain_buildProofTransformFromOpenProfiles);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_plain_buildProofTransformFromOpenProfiles);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_70453ad734044c24451623df719538be", mod_consts.const_dict_70453ad734044c24451623df719538be);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_dict_70453ad734044c24451623df719538be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_applyTransform", mod_consts.const_str_plain_applyTransform);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_str_plain_applyTransform);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a", mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb", mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileName", mod_consts.const_str_plain_getProfileName);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileName);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileInfo", mod_consts.const_str_plain_getProfileInfo);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileInfo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileCopyright", mod_consts.const_str_plain_getProfileCopyright);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileCopyright);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileManufacturer", mod_consts.const_str_plain_getProfileManufacturer);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileManufacturer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileModel", mod_consts.const_str_plain_getProfileModel);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileModel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileDescription", mod_consts.const_str_plain_getProfileDescription);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileDescription);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8e403060435a34554f48eea63baf70f6", mod_consts.const_dict_8e403060435a34554f48eea63baf70f6);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_dict_8e403060435a34554f48eea63baf70f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getDefaultIntent", mod_consts.const_str_plain_getDefaultIntent);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_getDefaultIntent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8", mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isIntentSupported", mod_consts.const_str_plain_isIntentSupported);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_plain_isIntentSupported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5", mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_n_tuple", mod_consts.const_tuple_str_plain_n_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035", mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple", mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple", mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple", mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple", mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple", mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple", mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple", mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple", mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple", mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple", mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple", mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple", mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple", mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_PIL$ImageCms(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Flags", mod_consts.const_str_plain_Flags);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Flags) && "mod_consts.const_str_plain_Flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONE", mod_consts.const_str_plain_NONE);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_NONE) && "mod_consts.const_str_plain_NONE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513", mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513) && "mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filename", mod_consts.const_str_plain_filename);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_filename) && "mod_consts.const_str_plain_filename");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_core) && "mod_consts.const_str_plain_core");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_frombytes", mod_consts.const_str_plain_profile_frombytes);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_profile_frombytes) && "mod_consts.const_str_plain_profile_frombytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile", mod_consts.const_str_plain_profile);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_profile) && "mod_consts.const_str_plain_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_open", mod_consts.const_str_plain_profile_open);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_profile_open) && "mod_consts.const_str_plain_profile_open");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CmsProfile", mod_consts.const_str_plain_CmsProfile);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_CmsProfile) && "mod_consts.const_str_plain_CmsProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72", mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72) && "mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f", mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f) && "mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple", mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple) && "mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deprecate", mod_consts.const_str_plain_deprecate);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate) && "mod_consts.const_str_plain_deprecate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365", mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365) && "mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_13", mod_consts.const_int_pos_13);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_int_pos_13) && "mod_consts.const_int_pos_13");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_chr_39) && "mod_consts.const_str_chr_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b", mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b) && "mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_tobytes", mod_consts.const_str_plain_profile_tobytes);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_profile_tobytes) && "mod_consts.const_str_plain_profile_tobytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182", mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182) && "mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildTransform", mod_consts.const_str_plain_buildTransform);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_buildTransform) && "mod_consts.const_str_plain_buildTransform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_transform", mod_consts.const_str_plain_transform);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform) && "mod_consts.const_str_plain_transform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildProofTransform", mod_consts.const_str_plain_buildProofTransform);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_buildProofTransform) && "mod_consts.const_str_plain_buildProofTransform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_input_mode", mod_consts.const_str_plain_input_mode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_mode) && "mod_consts.const_str_plain_input_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_inputMode", mod_consts.const_str_plain_inputMode);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_inputMode) && "mod_consts.const_str_plain_inputMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output_mode", mod_consts.const_str_plain_output_mode);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_mode) && "mod_consts.const_str_plain_output_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_outputMode", mod_consts.const_str_plain_outputMode);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_outputMode) && "mod_consts.const_str_plain_outputMode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output_profile", mod_consts.const_str_plain_output_profile);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_profile) && "mod_consts.const_str_plain_output_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply", mod_consts.const_str_plain_apply);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply) && "mod_consts.const_str_plain_apply");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3", mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3) && "mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_getim) && "mod_consts.const_str_plain_getim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imOut", mod_consts.const_str_plain_imOut);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_imOut) && "mod_consts.const_str_plain_imOut");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobytes", mod_consts.const_str_plain_tobytes);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobytes) && "mod_consts.const_str_plain_tobytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_info", mod_consts.const_str_plain_info);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_info) && "mod_consts.const_str_plain_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_icc_profile", mod_consts.const_str_plain_icc_profile);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_icc_profile) && "mod_consts.const_str_plain_icc_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ImageWin_tuple", mod_consts.const_tuple_str_plain_ImageWin_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ImageWin_tuple) && "mod_consts.const_tuple_str_plain_ImageWin_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageWin", mod_consts.const_str_plain_ImageWin);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageWin) && "mod_consts.const_str_plain_ImageWin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HDC", mod_consts.const_str_plain_HDC);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_HDC) && "mod_consts.const_str_plain_HDC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_display_profile_win32", mod_consts.const_str_plain_get_display_profile_win32);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_display_profile_win32) && "mod_consts.const_str_plain_get_display_profile_win32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageCmsProfile", mod_consts.const_str_plain_ImageCmsProfile);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCmsProfile) && "mod_consts.const_str_plain_ImageCmsProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d", mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d) && "mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyCMSError", mod_consts.const_str_plain_PyCMSError);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyCMSError) && "mod_consts.const_str_plain_PyCMSError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple", mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple) && "mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_FLAG", mod_consts.const_str_plain__MAX_FLAG);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_FLAG) && "mod_consts.const_str_plain__MAX_FLAG");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67", mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67) && "mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageCmsTransform", mod_consts.const_str_plain_ImageCmsTransform);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageCmsTransform) && "mod_consts.const_str_plain_ImageCmsTransform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_flags_tuple", mod_consts.const_tuple_str_plain_flags_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_flags_tuple) && "mod_consts.const_tuple_str_plain_flags_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply_in_place", mod_consts.const_str_plain_apply_in_place);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_in_place) && "mod_consts.const_str_plain_apply_in_place");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple) && "mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700", mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700) && "mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb", mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb) && "mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5", mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5) && "mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7", mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7) && "mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_TypeError_type_ValueError_tuple", mod_consts.const_tuple_type_TypeError_type_ValueError_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TypeError_type_ValueError_tuple) && "mod_consts.const_tuple_type_TypeError_type_ValueError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e", mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e) && "mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple", mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple) && "mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e", mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e) && "mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LAB", mod_consts.const_str_plain_LAB);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_LAB) && "mod_consts.const_str_plain_LAB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d", mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d) && "mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8", mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8) && "mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_createProfile", mod_consts.const_str_plain_createProfile);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_createProfile) && "mod_consts.const_str_plain_createProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2", mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2) && "mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_model", mod_consts.const_str_plain_model);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_model) && "mod_consts.const_str_plain_model");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_manufacturer", mod_consts.const_str_plain_manufacturer);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_manufacturer) && "mod_consts.const_str_plain_manufacturer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profile_description", mod_consts.const_str_plain_profile_description);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_profile_description) && "mod_consts.const_str_plain_profile_description");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_newline", mod_consts.const_str_newline);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_newline) && "mod_consts.const_str_newline");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f", mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f) && "mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple", mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple) && "mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8", mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8) && "mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copyright", mod_consts.const_str_plain_copyright);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_copyright) && "mod_consts.const_str_plain_copyright");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5", mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5) && "mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b", mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b) && "mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a", mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a) && "mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8", mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8) && "mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220", mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220) && "mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa", mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa) && "mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rendering_intent", mod_consts.const_str_plain_rendering_intent);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_rendering_intent) && "mod_consts.const_str_plain_rendering_intent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d", mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d) && "mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_intent_supported", mod_consts.const_str_plain_is_intent_supported);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_intent_supported) && "mod_consts.const_str_plain_is_intent_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce", mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce) && "mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_operator", mod_consts.const_str_plain_operator);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator) && "mod_consts.const_str_plain_operator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple", mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple) && "mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntEnum", mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum) && "mod_consts.const_str_plain_IntEnum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IntFlag", mod_consts.const_str_plain_IntFlag);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntFlag) && "mod_consts.const_str_plain_IntFlag");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_reduce", mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce) && "mod_consts.const_str_plain_reduce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Literal", mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal) && "mod_consts.const_str_plain_Literal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsFloat", mod_consts.const_str_plain_SupportsFloat);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsFloat) && "mod_consts.const_str_plain_SupportsFloat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsInt", mod_consts.const_str_plain_SupportsInt);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsInt) && "mod_consts.const_str_plain_SupportsInt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__deprecate", mod_consts.const_str_plain__deprecate);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__deprecate) && "mod_consts.const_str_plain__deprecate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_deprecate_tuple", mod_consts.const_tuple_str_plain_deprecate_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deprecate_tuple) && "mod_consts.const_tuple_str_plain_deprecate_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__typing", mod_consts.const_str_plain__typing);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing) && "mod_consts.const_str_plain__typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_SupportsRead_tuple", mod_consts.const_tuple_str_plain_SupportsRead_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SupportsRead_tuple) && "mod_consts.const_tuple_str_plain_SupportsRead_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SupportsRead", mod_consts.const_str_plain_SupportsRead);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportsRead) && "mod_consts.const_str_plain_SupportsRead");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__imagingcms_tuple", mod_consts.const_tuple_str_plain__imagingcms_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__imagingcms_tuple) && "mod_consts.const_tuple_str_plain__imagingcms_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingcms", mod_consts.const_str_plain__imagingcms);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__imagingcms) && "mod_consts.const_str_plain__imagingcms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CmsProfileCompatible", mod_consts.const_str_plain__CmsProfileCompatible);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__CmsProfileCompatible) && "mod_consts.const_str_plain__CmsProfileCompatible");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ex", mod_consts.const_str_plain_ex);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_ex) && "mod_consts.const_str_plain_ex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__util", mod_consts.const_str_plain__util);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__util) && "mod_consts.const_str_plain__util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_DeferredError_tuple", mod_consts.const_tuple_str_plain_DeferredError_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DeferredError_tuple) && "mod_consts.const_tuple_str_plain_DeferredError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeferredError", mod_consts.const_str_plain_DeferredError);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeferredError) && "mod_consts.const_str_plain_DeferredError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3", mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3) && "mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DESCRIPTION", mod_consts.const_str_plain__DESCRIPTION);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain__DESCRIPTION) && "mod_consts.const_str_plain__DESCRIPTION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa", mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa) && "mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__VERSION", mod_consts.const_str_plain__VERSION);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain__VERSION) && "mod_consts.const_str_plain__VERSION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Intent", mod_consts.const_str_plain_Intent);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_Intent) && "mod_consts.const_str_plain_Intent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036", mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036) && "mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_118) && "mod_consts.const_int_pos_118");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PERCEPTUAL", mod_consts.const_str_plain_PERCEPTUAL);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_PERCEPTUAL) && "mod_consts.const_str_plain_PERCEPTUAL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RELATIVE_COLORIMETRIC", mod_consts.const_str_plain_RELATIVE_COLORIMETRIC);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_RELATIVE_COLORIMETRIC) && "mod_consts.const_str_plain_RELATIVE_COLORIMETRIC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SATURATION", mod_consts.const_str_plain_SATURATION);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_SATURATION) && "mod_consts.const_str_plain_SATURATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC", mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC) && "mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Direction", mod_consts.const_str_plain_Direction);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_Direction) && "mod_consts.const_str_plain_Direction");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_125", mod_consts.const_int_pos_125);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_int_pos_125) && "mod_consts.const_int_pos_125");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INPUT", mod_consts.const_str_plain_INPUT);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT) && "mod_consts.const_str_plain_INPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OUTPUT", mod_consts.const_str_plain_OUTPUT);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_OUTPUT) && "mod_consts.const_str_plain_OUTPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PROOF", mod_consts.const_str_plain_PROOF);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_PROOF) && "mod_consts.const_str_plain_PROOF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24", mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24) && "mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_135", mod_consts.const_int_pos_135);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_int_pos_135) && "mod_consts.const_int_pos_135");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_int_pos_64) && "mod_consts.const_int_pos_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOCACHE", mod_consts.const_str_plain_NOCACHE);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOCACHE) && "mod_consts.const_str_plain_NOCACHE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOOPTIMIZE", mod_consts.const_str_plain_NOOPTIMIZE);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOOPTIMIZE) && "mod_consts.const_str_plain_NOOPTIMIZE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NULLTRANSFORM", mod_consts.const_str_plain_NULLTRANSFORM);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULLTRANSFORM) && "mod_consts.const_str_plain_NULLTRANSFORM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4096", mod_consts.const_int_pos_4096);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096) && "mod_consts.const_int_pos_4096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GAMUTCHECK", mod_consts.const_str_plain_GAMUTCHECK);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_GAMUTCHECK) && "mod_consts.const_str_plain_GAMUTCHECK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16384", mod_consts.const_int_pos_16384);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_16384) && "mod_consts.const_int_pos_16384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SOFTPROOFING", mod_consts.const_str_plain_SOFTPROOFING);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_SOFTPROOFING) && "mod_consts.const_str_plain_SOFTPROOFING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8192", mod_consts.const_int_pos_8192);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_int_pos_8192) && "mod_consts.const_int_pos_8192");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BLACKPOINTCOMPENSATION", mod_consts.const_str_plain_BLACKPOINTCOMPENSATION);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_BLACKPOINTCOMPENSATION) && "mod_consts.const_str_plain_BLACKPOINTCOMPENSATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOWHITEONWHITEFIXUP", mod_consts.const_str_plain_NOWHITEONWHITEFIXUP);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOWHITEONWHITEFIXUP) && "mod_consts.const_str_plain_NOWHITEONWHITEFIXUP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024) && "mod_consts.const_int_pos_1024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HIGHRESPRECALC", mod_consts.const_str_plain_HIGHRESPRECALC);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_HIGHRESPRECALC) && "mod_consts.const_str_plain_HIGHRESPRECALC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048) && "mod_consts.const_int_pos_2048");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOWRESPRECALC", mod_consts.const_str_plain_LOWRESPRECALC);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOWRESPRECALC) && "mod_consts.const_str_plain_LOWRESPRECALC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8", mod_consts.const_int_pos_8);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_8) && "mod_consts.const_int_pos_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_USE_8BITS_DEVICELINK", mod_consts.const_str_plain_USE_8BITS_DEVICELINK);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_USE_8BITS_DEVICELINK) && "mod_consts.const_str_plain_USE_8BITS_DEVICELINK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GUESSDEVICECLASS", mod_consts.const_str_plain_GUESSDEVICECLASS);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_GUESSDEVICECLASS) && "mod_consts.const_str_plain_GUESSDEVICECLASS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEEP_SEQUENCE", mod_consts.const_str_plain_KEEP_SEQUENCE);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEEP_SEQUENCE) && "mod_consts.const_str_plain_KEEP_SEQUENCE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FORCE_CLUT", mod_consts.const_str_plain_FORCE_CLUT);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_FORCE_CLUT) && "mod_consts.const_str_plain_FORCE_CLUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLUT_POST_LINEARIZATION", mod_consts.const_str_plain_CLUT_POST_LINEARIZATION);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLUT_POST_LINEARIZATION) && "mod_consts.const_str_plain_CLUT_POST_LINEARIZATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION", mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION) && "mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_32768) && "mod_consts.const_int_pos_32768");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NONEGATIVES", mod_consts.const_str_plain_NONEGATIVES);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_NONEGATIVES) && "mod_consts.const_str_plain_NONEGATIVES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_4000000", mod_consts.const_int_hex_4000000);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_hex_4000000) && "mod_consts.const_int_hex_4000000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COPY_ALPHA", mod_consts.const_str_plain_COPY_ALPHA);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_COPY_ALPHA) && "mod_consts.const_str_plain_COPY_ALPHA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_hex_1000000", mod_consts.const_int_hex_1000000);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_hex_1000000) && "mod_consts.const_int_hex_1000000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NODEFAULTRESOURCEDEF", mod_consts.const_str_plain_NODEFAULTRESOURCEDEF);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_NODEFAULTRESOURCEDEF) && "mod_consts.const_str_plain_NODEFAULTRESOURCEDEF");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65536", mod_consts.const_int_pos_65536);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536) && "mod_consts.const_int_pos_65536");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_1", mod_consts.const_str_plain__GRIDPOINTS_1);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_1) && "mod_consts.const_str_plain__GRIDPOINTS_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_131072", mod_consts.const_int_pos_131072);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_131072) && "mod_consts.const_int_pos_131072");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_2", mod_consts.const_str_plain__GRIDPOINTS_2);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_2) && "mod_consts.const_str_plain__GRIDPOINTS_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_262144", mod_consts.const_int_pos_262144);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_int_pos_262144) && "mod_consts.const_int_pos_262144");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_4", mod_consts.const_str_plain__GRIDPOINTS_4);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_4) && "mod_consts.const_str_plain__GRIDPOINTS_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_524288", mod_consts.const_int_pos_524288);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_524288) && "mod_consts.const_int_pos_524288");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_8", mod_consts.const_str_plain__GRIDPOINTS_8);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_8) && "mod_consts.const_str_plain__GRIDPOINTS_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1048576", mod_consts.const_int_pos_1048576);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_1048576) && "mod_consts.const_int_pos_1048576");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_16", mod_consts.const_str_plain__GRIDPOINTS_16);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_16) && "mod_consts.const_str_plain__GRIDPOINTS_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2097152", mod_consts.const_int_pos_2097152);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_int_pos_2097152) && "mod_consts.const_int_pos_2097152");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_32", mod_consts.const_str_plain__GRIDPOINTS_32);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_32) && "mod_consts.const_str_plain__GRIDPOINTS_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4194304", mod_consts.const_int_pos_4194304);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_4194304) && "mod_consts.const_int_pos_4194304");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_64", mod_consts.const_str_plain__GRIDPOINTS_64);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_64) && "mod_consts.const_str_plain__GRIDPOINTS_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_8388608", mod_consts.const_int_pos_8388608);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_8388608) && "mod_consts.const_int_pos_8388608");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__GRIDPOINTS_128", mod_consts.const_str_plain__GRIDPOINTS_128);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain__GRIDPOINTS_128) && "mod_consts.const_str_plain__GRIDPOINTS_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2", mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2) && "mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_GRIDPOINTS", mod_consts.const_str_plain_GRIDPOINTS);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_GRIDPOINTS) && "mod_consts.const_str_plain_GRIDPOINTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d", mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d) && "mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_or_", mod_consts.const_str_plain_or_);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_or_) && "mod_consts.const_str_plain_or_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXINPUT", mod_consts.const_str_plain_MATRIXINPUT);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXINPUT) && "mod_consts.const_str_plain_MATRIXINPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXOUTPUT", mod_consts.const_str_plain_MATRIXOUTPUT);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXOUTPUT) && "mod_consts.const_str_plain_MATRIXOUTPUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MATRIXONLY", mod_consts.const_str_plain_MATRIXONLY);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_MATRIXONLY) && "mod_consts.const_str_plain_MATRIXONLY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOPRELINEARIZATION", mod_consts.const_str_plain_NOPRELINEARIZATION);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOPRELINEARIZATION) && "mod_consts.const_str_plain_NOPRELINEARIZATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOTCACHE", mod_consts.const_str_plain_NOTCACHE);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOTCACHE) && "mod_consts.const_str_plain_NOTCACHE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NOTPRECALC", mod_consts.const_str_plain_NOTPRECALC);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOTPRECALC) && "mod_consts.const_str_plain_NOTPRECALC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WHITEBLACKCOMPENSATION", mod_consts.const_str_plain_WHITEBLACKCOMPENSATION);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_WHITEBLACKCOMPENSATION) && "mod_consts.const_str_plain_WHITEBLACKCOMPENSATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PRESERVEBLACK", mod_consts.const_str_plain_PRESERVEBLACK);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_PRESERVEBLACK) && "mod_consts.const_str_plain_PRESERVEBLACK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FLAGS", mod_consts.const_str_plain__FLAGS);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain__FLAGS) && "mod_consts.const_str_plain__FLAGS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_229", mod_consts.const_int_pos_229);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_int_pos_229) && "mod_consts.const_int_pos_229");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b", mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b) && "mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9", mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9) && "mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438", mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438) && "mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getattr__", mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__) && "mod_consts.const_str_plain___getattr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2", mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2) && "mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053) && "mod_consts.const_dict_2366cb3246e451cebe4ed21878030053");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d", mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d) && "mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple", mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple) && "mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImagePointHandler", mod_consts.const_str_plain_ImagePointHandler);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImagePointHandler) && "mod_consts.const_str_plain_ImagePointHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274", mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274) && "mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_276", mod_consts.const_int_pos_276);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_int_pos_276) && "mod_consts.const_int_pos_276");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f758b8aff899a01503cde377c05532e", mod_consts.const_dict_3f758b8aff899a01503cde377c05532e);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_3f758b8aff899a01503cde377c05532e) && "mod_consts.const_dict_3f758b8aff899a01503cde377c05532e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2", mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2) && "mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d", mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d) && "mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_point", mod_consts.const_str_plain_point);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain_point) && "mod_consts.const_str_plain_point");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9", mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9) && "mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1", mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1) && "mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024", mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024) && "mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716", mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716) && "mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple", mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple) && "mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb", mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb) && "mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_display_profile", mod_consts.const_str_plain_get_display_profile);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_display_profile) && "mod_consts.const_str_plain_get_display_profile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_Exception_tuple", mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple) && "mod_consts.const_tuple_type_Exception_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d", mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d) && "mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_363", mod_consts.const_int_pos_363);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_int_pos_363) && "mod_consts.const_int_pos_363");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee", mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee) && "mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_profileToProfile", mod_consts.const_str_plain_profileToProfile);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_plain_profileToProfile) && "mod_consts.const_str_plain_profileToProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618", mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618) && "mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getOpenProfile", mod_consts.const_str_plain_getOpenProfile);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_getOpenProfile) && "mod_consts.const_str_plain_getOpenProfile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81", mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81) && "mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38", mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38) && "mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildTransformFromOpenProfiles", mod_consts.const_str_plain_buildTransformFromOpenProfiles);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_buildTransformFromOpenProfiles) && "mod_consts.const_str_plain_buildTransformFromOpenProfiles");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_buildProofTransformFromOpenProfiles", mod_consts.const_str_plain_buildProofTransformFromOpenProfiles);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_plain_buildProofTransformFromOpenProfiles) && "mod_consts.const_str_plain_buildProofTransformFromOpenProfiles");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_70453ad734044c24451623df719538be", mod_consts.const_dict_70453ad734044c24451623df719538be);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_dict_70453ad734044c24451623df719538be) && "mod_consts.const_dict_70453ad734044c24451623df719538be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_applyTransform", mod_consts.const_str_plain_applyTransform);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_str_plain_applyTransform) && "mod_consts.const_str_plain_applyTransform");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a", mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a) && "mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb", mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb) && "mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileName", mod_consts.const_str_plain_getProfileName);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileName) && "mod_consts.const_str_plain_getProfileName");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileInfo", mod_consts.const_str_plain_getProfileInfo);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileInfo) && "mod_consts.const_str_plain_getProfileInfo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileCopyright", mod_consts.const_str_plain_getProfileCopyright);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileCopyright) && "mod_consts.const_str_plain_getProfileCopyright");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileManufacturer", mod_consts.const_str_plain_getProfileManufacturer);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileManufacturer) && "mod_consts.const_str_plain_getProfileManufacturer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileModel", mod_consts.const_str_plain_getProfileModel);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileModel) && "mod_consts.const_str_plain_getProfileModel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getProfileDescription", mod_consts.const_str_plain_getProfileDescription);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_plain_getProfileDescription) && "mod_consts.const_str_plain_getProfileDescription");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8e403060435a34554f48eea63baf70f6", mod_consts.const_dict_8e403060435a34554f48eea63baf70f6);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_dict_8e403060435a34554f48eea63baf70f6) && "mod_consts.const_dict_8e403060435a34554f48eea63baf70f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getDefaultIntent", mod_consts.const_str_plain_getDefaultIntent);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_getDefaultIntent) && "mod_consts.const_str_plain_getDefaultIntent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8", mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8) && "mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isIntentSupported", mod_consts.const_str_plain_isIntentSupported);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_plain_isIntentSupported) && "mod_consts.const_str_plain_isIntentSupported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5", mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5) && "mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_n_tuple", mod_consts.const_tuple_str_plain_n_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_tuple) && "mod_consts.const_tuple_str_plain_n_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035", mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035) && "mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple", mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple) && "mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple", mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple) && "mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple", mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple) && "mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_im_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple", mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple) && "mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple", mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple) && "mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple", mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple) && "mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple", mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple) && "mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple", mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple) && "mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple", mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple) && "mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple", mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple) && "mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple", mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple) && "mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple", mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple) && "mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple", mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple) && "mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
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
static PyObject *module_var_accessor_PIL$ImageCms$DeferredError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeferredError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeferredError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeferredError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeferredError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$Flags(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Flags);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Flags);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Flags, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Flags);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Flags, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Flags);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Flags);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Flags);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$ImageCmsProfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsProfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageCmsProfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageCmsProfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageCmsProfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageCmsProfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsProfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsProfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsProfile);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$ImageCmsTransform(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsTransform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageCmsTransform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageCmsTransform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ImageCmsTransform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ImageCmsTransform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsTransform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsTransform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsTransform);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$IntEnum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntEnum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntEnum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$IntFlag(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntFlag);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntFlag);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntFlag, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IntFlag);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IntFlag, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntFlag);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntFlag);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IntFlag);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$Intent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Intent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Intent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Intent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Intent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Intent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Intent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Intent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Intent);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$PyCMSError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_PyCMSError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyCMSError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyCMSError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyCMSError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyCMSError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_PyCMSError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_PyCMSError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyCMSError);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$SupportsRead(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsRead);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsRead);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsRead, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportsRead);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportsRead, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsRead);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsRead);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsRead);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$_MAX_FLAG(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_FLAG);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_FLAG);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_FLAG, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_FLAG);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_FLAG, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_FLAG);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_FLAG);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_FLAG);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$buildProofTransform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_buildProofTransform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_buildProofTransform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_buildProofTransform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_buildProofTransform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransform);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$buildTransform(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransform);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_buildTransform);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_buildTransform, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_buildTransform);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_buildTransform, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransform);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransform);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransform);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$core(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_core);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_core, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_core);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_core, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_core);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$deprecate(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deprecate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deprecate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$ex(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ex);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$operator(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_operator);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageCms$reduce(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageCms->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageCms->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageCms->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reduce);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reduce, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reduce);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reduce, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_58528f29434f02ea7340e83342b22db6;
static PyCodeObject *code_objects_aae8d5d87c7a0cef5f965ca81e46f1ca;
static PyCodeObject *code_objects_637a3a58005e41b5976d3629568daa7e;
static PyCodeObject *code_objects_2a2e701182fc1d0af081553f1f7bd637;
static PyCodeObject *code_objects_b1ccdf1184222b9a6d9577c79c09cb42;
static PyCodeObject *code_objects_7eb224c0b6a045b01766c514874fb3a0;
static PyCodeObject *code_objects_04b3a881cfc436feedc7e91b1e637820;
static PyCodeObject *code_objects_28f5b945cb98121be8f5af8131382047;
static PyCodeObject *code_objects_fd1cf2ab6e41c824e87f72f858346797;
static PyCodeObject *code_objects_9981aec9f86775adcbf17cb036cbb934;
static PyCodeObject *code_objects_cf91086c2686495ba743b953348ec6a5;
static PyCodeObject *code_objects_fa35ebe6591a93f6b884b8d0da53f748;
static PyCodeObject *code_objects_ceedabe1366e8c8adf61b1a4971a6125;
static PyCodeObject *code_objects_b5a9e00b3ad277a5d9b1ffbe85dacb65;
static PyCodeObject *code_objects_ae490f64b0cd7c6074759a2f8da58dc0;
static PyCodeObject *code_objects_2a5832c88de1fed52cc7b4590aa5a4f8;
static PyCodeObject *code_objects_3039696866e59afb60f57ee3118cd50e;
static PyCodeObject *code_objects_50632c3eefe56cac95d979d4a8998e15;
static PyCodeObject *code_objects_a55f4740c09912fa95a5569b611c5f20;
static PyCodeObject *code_objects_1ae84c42898df87015b97c3614253be6;
static PyCodeObject *code_objects_e5ebdb3bb27dedfb4cafd73dc9886654;
static PyCodeObject *code_objects_06901f0bdd9124f76501dae733a88d78;
static PyCodeObject *code_objects_6f12a274265c336322b9c84228e15bd6;
static PyCodeObject *code_objects_725d9260015fd3890fbda1778535425e;
static PyCodeObject *code_objects_966fa85cec5a391ecf01d4eb91d44c96;
static PyCodeObject *code_objects_d2de37d4ebdd5532efd026dec252012e;
static PyCodeObject *code_objects_8452e758ecb01c03d565243c92e3ffe5;
static PyCodeObject *code_objects_efa586fdbe6dcdc31bd6c238d04b7f2d;
static PyCodeObject *code_objects_6b22941b0f83d57464b4f4d788be2599;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_654fed461d4e1a908579a3079a0010e5); CHECK_OBJECT(module_filename_obj);
code_objects_58528f29434f02ea7340e83342b22db6 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_n_tuple, NULL, 1, 0, 0);
code_objects_aae8d5d87c7a0cef5f965ca81e46f1ca = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035, mod_consts.const_str_digest_221d526710e501f408249d3fd01d1035, NULL, NULL, 0, 0, 0);
code_objects_637a3a58005e41b5976d3629568daa7e = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Direction, mod_consts.const_str_plain_Direction, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2a2e701182fc1d0af081553f1f7bd637 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Flags, mod_consts.const_str_plain_Flags, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b1ccdf1184222b9a6d9577c79c09cb42 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GRIDPOINTS, mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d, mod_consts.const_tuple_str_plain_n_tuple, NULL, 1, 0, 0);
code_objects_7eb224c0b6a045b01766c514874fb3a0 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ImageCmsTransform, mod_consts.const_str_plain_ImageCmsTransform, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_04b3a881cfc436feedc7e91b1e637820 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Intent, mod_consts.const_str_plain_Intent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_28f5b945cb98121be8f5af8131382047 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2, mod_consts.const_tuple_str_plain_self_str_plain_name_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_fd1cf2ab6e41c824e87f72f858346797 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9, mod_consts.const_tuple_54d70cdc0bc156f2220bdbf5327efc64_tuple, NULL, 2, 0, 0);
code_objects_9981aec9f86775adcbf17cb036cbb934 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2, mod_consts.const_tuple_8d265ec843b47231d8a02027afd152f5_tuple, NULL, 9, 0, 0);
code_objects_cf91086c2686495ba743b953348ec6a5 = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_apply, mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024, mod_consts.const_tuple_str_plain_self_str_plain_im_str_plain_imOut_str_plain_msg_tuple, NULL, 3, 0, 0);
code_objects_fa35ebe6591a93f6b884b8d0da53f748 = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_applyTransform, mod_consts.const_str_plain_applyTransform, mod_consts.const_tuple_bf6eadbe2b12e57f0a282b4b6eb4952b_tuple, NULL, 3, 0, 0);
code_objects_ceedabe1366e8c8adf61b1a4971a6125 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_apply_in_place, mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple, NULL, 2, 0, 0);
code_objects_b5a9e00b3ad277a5d9b1ffbe85dacb65 = MAKE_CODE_OBJECT(module_filename_obj, 573, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_buildProofTransform, mod_consts.const_str_plain_buildProofTransform, mod_consts.const_tuple_c0fb86c4bc1aa878629fa796c9a2738f_tuple, NULL, 8, 0, 0);
code_objects_ae490f64b0cd7c6074759a2f8da58dc0 = MAKE_CODE_OBJECT(module_filename_obj, 490, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_buildTransform, mod_consts.const_str_plain_buildTransform, mod_consts.const_tuple_aafd46da7d147313ded684294422b886_tuple, NULL, 6, 0, 0);
code_objects_2a5832c88de1fed52cc7b4590aa5a4f8 = MAKE_CODE_OBJECT(module_filename_obj, 745, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_createProfile, mod_consts.const_str_plain_createProfile, mod_consts.const_tuple_450b51615a53195fc5b53cfa63c2550c_tuple, NULL, 2, 0, 0);
code_objects_3039696866e59afb60f57ee3118cd50e = MAKE_CODE_OBJECT(module_filename_obj, 989, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getDefaultIntent, mod_consts.const_str_plain_getDefaultIntent, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_50632c3eefe56cac95d979d4a8998e15 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getOpenProfile, mod_consts.const_str_plain_getOpenProfile, mod_consts.const_tuple_str_plain_profileFilename_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_a55f4740c09912fa95a5569b611c5f20 = MAKE_CODE_OBJECT(module_filename_obj, 875, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileCopyright, mod_consts.const_str_plain_getProfileCopyright, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_1ae84c42898df87015b97c3614253be6 = MAKE_CODE_OBJECT(module_filename_obj, 960, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileDescription, mod_consts.const_str_plain_getProfileDescription, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_e5ebdb3bb27dedfb4cafd73dc9886654 = MAKE_CODE_OBJECT(module_filename_obj, 838, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileInfo, mod_consts.const_str_plain_getProfileInfo, mod_consts.const_tuple_51d39dd95fe6fa04fd2c5e77924ce693_tuple, NULL, 1, 0, 0);
code_objects_06901f0bdd9124f76501dae733a88d78 = MAKE_CODE_OBJECT(module_filename_obj, 903, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileManufacturer, mod_consts.const_str_plain_getProfileManufacturer, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_6f12a274265c336322b9c84228e15bd6 = MAKE_CODE_OBJECT(module_filename_obj, 931, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileModel, mod_consts.const_str_plain_getProfileModel, mod_consts.const_tuple_str_plain_profile_str_plain_v_tuple, NULL, 1, 0, 0);
code_objects_725d9260015fd3890fbda1778535425e = MAKE_CODE_OBJECT(module_filename_obj, 796, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getProfileName, mod_consts.const_str_plain_getProfileName, mod_consts.const_tuple_2c6f482e91c4d35f8c9c745de6f754c5_tuple, NULL, 1, 0, 0);
code_objects_966fa85cec5a391ecf01d4eb91d44c96 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_display_profile, mod_consts.const_str_plain_get_display_profile, mod_consts.const_tuple_str_plain_handle_str_plain_ImageWin_str_plain_profile_tuple, NULL, 1, 0, 0);
code_objects_d2de37d4ebdd5532efd026dec252012e = MAKE_CODE_OBJECT(module_filename_obj, 1028, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_isIntentSupported, mod_consts.const_str_plain_isIntentSupported, mod_consts.const_tuple_8a4c52d88298bcb13dbdd9d418065694_tuple, NULL, 3, 0, 0);
code_objects_8452e758ecb01c03d565243c92e3ffe5 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_point, mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple, NULL, 2, 0, 0);
code_objects_efa586fdbe6dcdc31bd6c238d04b7f2d = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_profileToProfile, mod_consts.const_str_plain_profileToProfile, mod_consts.const_tuple_9cade9a861842a476e3311941a4d6004_tuple, NULL, 7, 0, 0);
code_objects_6b22941b0f83d57464b4f4d788be2599 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tobytes, mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__10_get_display_profile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__11_profileToProfile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__12_getOpenProfile(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__13_buildTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__14_buildProofTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__15_applyTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__16_createProfile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__17_getProfileName(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__18_getProfileInfo(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__19_getProfileCopyright(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__1_GRIDPOINTS(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__20_getProfileManufacturer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__21_getProfileModel(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__22_getProfileDescription(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__23_getDefaultIntent(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__24_isIntentSupported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__2_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__4___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__5_tobytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__7_point(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__8_apply(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__9_apply_in_place(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageCms$$$function__1_GRIDPOINTS(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_n = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS = MAKE_FUNCTION_FRAME(tstate, code_objects_b1ccdf1184222b9a6d9577c79c09cb42, module_PIL$ImageCms, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS = cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS) == 2);

// Framed code:
{
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NONE);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_bitand_expr_left_1 = par_n;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_255;
tmp_lshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_lshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_lshift_expr_right_1 = mod_consts.const_int_pos_16;
tmp_bitor_expr_right_1 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_left_1);
Py_DECREF(tmp_lshift_expr_left_1);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 191;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS,
    type_description_1,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS == cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS);
    cache_frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__1_GRIDPOINTS);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_n = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__2_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__2_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__2_lambda)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__2_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__2_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__2_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_58528f29434f02ea7340e83342b22db6, module_PIL$ImageCms, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__2_lambda->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__2_lambda = cache_frame_frame_PIL$ImageCms$$$function__2_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__2_lambda);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__2_lambda) == 2);

// Framed code:
{
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(par_n);
tmp_bitand_expr_left_1 = par_n;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_255;
tmp_lshift_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_lshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_lshift_expr_right_1 = mod_consts.const_int_pos_16;
tmp_return_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
CHECK_OBJECT(tmp_lshift_expr_left_1);
Py_DECREF(tmp_lshift_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__2_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__2_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__2_lambda,
    type_description_1,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__2_lambda == cache_frame_frame_PIL$ImageCms$$$function__2_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__2_lambda);
    cache_frame_frame_PIL$ImageCms$$$function__2_lambda = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__2_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_profile = python_pars[1];
PyObject *var_profile_bytes_path = NULL;
PyObject *var_f = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__3___init__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fd1cf2ab6e41c824e87f72f858346797, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__3___init__->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__3___init__ = cache_frame_frame_PIL$ImageCms$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__3___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_filename, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooN";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_profile);
tmp_expression_value_1 = par_profile;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 241;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_profile_bytes_path;
    var_profile_bytes_path = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_profile_bytes_path);
tmp_expression_value_2 = var_profile_bytes_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 243;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooN";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__3___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__3___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_profile);
tmp_open_filename_1 = par_profile;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_2 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_3 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 245;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_6 = tmp_with_1__enter;
{
    PyObject *old = var_f;
    var_f = tmp_assign_source_6;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_2;
tmp_expression_value_5 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_1 = "ooooN";
    goto try_except_handler_6;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_profile_frombytes);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooN";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_f);
tmp_called_instance_1 = var_f;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 246;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 246;
type_description_1 = "ooooN";
    goto try_except_handler_6;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 246;
tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooN";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_profile, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooN";
    goto try_except_handler_6;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__3___init__, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__3___init__, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_7;
tmp_assign_source_7 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_7;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 245;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_7;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 245;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__3___init__->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooN";
goto try_except_handler_7;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 245;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__3___init__->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooN";
goto try_except_handler_7;
branch_end_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 245;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 245;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooN";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 242;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__3___init__->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooN";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_profile);
tmp_ass_attr_value_3 = par_profile;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_filename, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_ass_attr_target_4;
tmp_called_instance_2 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_5 = par_profile;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 249;
tmp_ass_attr_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_profile_open, tmp_args_element_value_5);
if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_profile, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_profile);
tmp_expression_value_6 = par_profile;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, const_str_plain_read);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_3;
PyObject *tmp_ass_attr_target_5;
tmp_expression_value_7 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_profile_frombytes);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_profile);
tmp_called_instance_3 = par_profile;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 251;
tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_read);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 251;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 251;
tmp_ass_attr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_ass_attr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_profile, tmp_ass_attr_value_5);
CHECK_OBJECT(tmp_ass_attr_value_5);
Py_DECREF(tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_7;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_2 = par_profile;
tmp_expression_value_8 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CmsProfile);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
CHECK_OBJECT(par_profile);
tmp_ass_attr_value_6 = par_profile;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_profile, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_7c6d1c6514d9825363582ee08d1bfe72;
frame_frame_PIL$ImageCms$$$function__3___init__->m_frame.f_lineno = 256;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 256;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooN";
goto frame_exception_exit_1;
}
branch_end_8:;
branch_end_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__3___init__,
    type_description_1,
    par_self,
    par_profile,
    var_profile_bytes_path,
    var_f,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__3___init__ == cache_frame_frame_PIL$ImageCms$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__3___init__);
    cache_frame_frame_PIL$ImageCms$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__3___init__);

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
Py_XDECREF(var_profile_bytes_path);
var_profile_bytes_path = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_profile_bytes_path);
var_profile_bytes_path = NULL;
Py_XDECREF(var_f);
var_f = NULL;
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
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__4___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__4___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__4___getattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__4___getattr__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__4___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__4___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__4___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_28f5b945cb98121be8f5af8131382047, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__4___getattr__->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__4___getattr__ = cache_frame_frame_PIL$ImageCms$$$function__4___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__4___getattr__);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__4___getattr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_product_name_str_plain_product_info_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$deprecate(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deprecate);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_a5ab58d35dcd73d68cc8b4b9b5659365;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
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
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
tmp_args_element_value_2 = mod_consts.const_int_pos_13;
frame_frame_PIL$ImageCms$$$function__4___getattr__->m_frame.f_lineno = 260;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_chr_39;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_da74e4cd4ee01f97c7f1cd770146f85b;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_name);
tmp_format_value_3 = par_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$ImageCms$$$function__4___getattr__->m_frame.f_lineno = 263;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 263;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__4___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__4___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__4___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__4___getattr__,
    type_description_1,
    par_self,
    par_name,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__4___getattr__ == cache_frame_frame_PIL$ImageCms$$$function__4___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__4___getattr__);
    cache_frame_frame_PIL$ImageCms$$$function__4___getattr__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__4___getattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__5_tobytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__5_tobytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__5_tobytes = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__5_tobytes)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__5_tobytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__5_tobytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__5_tobytes = MAKE_FUNCTION_FRAME(tstate, code_objects_6b22941b0f83d57464b4f4d788be2599, module_PIL$ImageCms, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__5_tobytes->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__5_tobytes = cache_frame_frame_PIL$ImageCms$$$function__5_tobytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__5_tobytes);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__5_tobytes) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_profile_tobytes);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 273;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__5_tobytes->m_frame.f_lineno = 273;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__5_tobytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__5_tobytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__5_tobytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__5_tobytes,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__5_tobytes == cache_frame_frame_PIL$ImageCms$$$function__5_tobytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__5_tobytes);
    cache_frame_frame_PIL$ImageCms$$$function__5_tobytes = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__5_tobytes);

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


static PyObject *impl_PIL$ImageCms$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_input = python_pars[1];
PyObject *par_output = python_pars[2];
PyObject *par_input_mode = python_pars[3];
PyObject *par_output_mode = python_pars[4];
PyObject *par_intent = python_pars[5];
PyObject *par_proof = python_pars[6];
PyObject *par_proof_intent = python_pars[7];
PyObject *par_flags = python_pars[8];
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_assign_unpack_2__assign_source = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9981aec9f86775adcbf17cb036cbb934, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__6___init__->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__6___init__ = cache_frame_frame_PIL$ImageCms$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__6___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__6___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_proof);
tmp_cmp_expr_left_1 = par_proof;
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
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_ass_attr_target_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_buildTransform);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input);
tmp_expression_value_2 = par_input;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 297;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_expression_value_3 = par_output;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 297;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_mode);
tmp_args_element_value_3 = par_input_mode;
CHECK_OBJECT(par_output_mode);
tmp_args_element_value_4 = par_output_mode;
CHECK_OBJECT(par_intent);
tmp_args_element_value_5 = par_intent;
CHECK_OBJECT(par_flags);
tmp_args_element_value_6 = par_flags;
frame_frame_PIL$ImageCms$$$function__6___init__->m_frame.f_lineno = 296;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_attr_value_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_transform, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_ass_attr_target_2;
tmp_expression_value_4 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_buildProofTransform);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input);
tmp_expression_value_5 = par_input;
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 301;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_output);
tmp_expression_value_6 = par_output;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 302;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_proof);
tmp_expression_value_7 = par_proof;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_profile);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 303;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_input_mode);
tmp_args_element_value_10 = par_input_mode;
CHECK_OBJECT(par_output_mode);
tmp_args_element_value_11 = par_output_mode;
CHECK_OBJECT(par_intent);
tmp_args_element_value_12 = par_intent;
CHECK_OBJECT(par_proof_intent);
tmp_args_element_value_13 = par_proof_intent;
CHECK_OBJECT(par_flags);
tmp_args_element_value_14 = par_flags;
frame_frame_PIL$ImageCms$$$function__6___init__->m_frame.f_lineno = 300;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_transform, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_input_mode);
tmp_assign_source_1 = par_input_mode;
{
    PyObject *old = tmp_assign_unpack_1__assign_source;
    tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    Py_INCREF(tmp_assign_unpack_1__assign_source);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_ass_attr_value_3 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_input_mode, tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_ass_attr_value_4 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_inputMode, tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooooo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_output_mode);
tmp_assign_source_2 = par_output_mode;
{
    PyObject *old = tmp_assign_unpack_2__assign_source;
    tmp_assign_unpack_2__assign_source = tmp_assign_source_2;
    Py_INCREF(tmp_assign_unpack_2__assign_source);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_ass_attr_value_5;
PyObject *tmp_ass_attr_target_5;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_ass_attr_value_5 = tmp_assign_unpack_2__assign_source;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_5, mod_consts.const_str_plain_output_mode, tmp_ass_attr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_ass_attr_value_6;
PyObject *tmp_ass_attr_target_6;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
tmp_ass_attr_value_6 = tmp_assign_unpack_2__assign_source;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_6, mod_consts.const_str_plain_outputMode, tmp_ass_attr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooooo";
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

CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
Py_DECREF(tmp_assign_unpack_2__assign_source);
tmp_assign_unpack_2__assign_source = NULL;
{
PyObject *tmp_ass_attr_value_7;
PyObject *tmp_ass_attr_target_7;
CHECK_OBJECT(par_output);
tmp_ass_attr_value_7 = par_output;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_7, mod_consts.const_str_plain_output_profile, tmp_ass_attr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__6___init__,
    type_description_1,
    par_self,
    par_input,
    par_output,
    par_input_mode,
    par_output_mode,
    par_intent,
    par_proof,
    par_proof_intent,
    par_flags
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__6___init__ == cache_frame_frame_PIL$ImageCms$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__6___init__);
    cache_frame_frame_PIL$ImageCms$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__6___init__);

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
CHECK_OBJECT(par_input);
Py_DECREF(par_input);
CHECK_OBJECT(par_output);
Py_DECREF(par_output);
CHECK_OBJECT(par_input_mode);
Py_DECREF(par_input_mode);
CHECK_OBJECT(par_output_mode);
Py_DECREF(par_output_mode);
CHECK_OBJECT(par_intent);
Py_DECREF(par_intent);
CHECK_OBJECT(par_proof);
Py_DECREF(par_proof);
CHECK_OBJECT(par_proof_intent);
Py_DECREF(par_proof_intent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_input);
Py_DECREF(par_input);
CHECK_OBJECT(par_output);
Py_DECREF(par_output);
CHECK_OBJECT(par_input_mode);
Py_DECREF(par_input_mode);
CHECK_OBJECT(par_output_mode);
Py_DECREF(par_output_mode);
CHECK_OBJECT(par_intent);
Py_DECREF(par_intent);
CHECK_OBJECT(par_proof);
Py_DECREF(par_proof);
CHECK_OBJECT(par_proof_intent);
Py_DECREF(par_proof_intent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__7_point(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__7_point;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__7_point = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__7_point)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__7_point);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__7_point == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__7_point = MAKE_FUNCTION_FRAME(tstate, code_objects_8452e758ecb01c03d565243c92e3ffe5, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__7_point->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__7_point = cache_frame_frame_PIL$ImageCms$$$function__7_point;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__7_point);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__7_point) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
frame_frame_PIL$ImageCms$$$function__7_point->m_frame.f_lineno = 317;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_apply, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__7_point, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__7_point->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__7_point, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__7_point,
    type_description_1,
    par_self,
    par_im
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__7_point == cache_frame_frame_PIL$ImageCms$$$function__7_point) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__7_point);
    cache_frame_frame_PIL$ImageCms$$$function__7_point = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__7_point);

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


static PyObject *impl_PIL$ImageCms$$$function__8_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
PyObject *par_imOut = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__8_apply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__8_apply = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__8_apply)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__8_apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__8_apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__8_apply = MAKE_FUNCTION_FRAME(tstate, code_objects_cf91086c2686495ba743b953348ec6a5, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__8_apply->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__8_apply = cache_frame_frame_PIL$ImageCms$$$function__8_apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__8_apply);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__8_apply) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_input_mode);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 320;
type_description_1 = "oooN";
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


exception_lineno = 320;
type_description_1 = "oooN";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3;
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 322;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 322;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooN";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_imOut);
tmp_cmp_expr_left_2 = par_imOut;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_imOut);
tmp_expression_value_3 = par_imOut;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_output_mode);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 324;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooN";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_bfc054ed0ea60d1b2432d08d440628e3;
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 326;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 326;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooN";
goto frame_exception_exit_1;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
tmp_expression_value_5 = module_var_accessor_PIL$ImageCms$Image(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_output_mode);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 328;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_expression_value_7 = par_im;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_size);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 328;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = Py_None;
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 328;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_imOut;
    assert(old != NULL);
    par_imOut = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_end_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_transform);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_apply);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im);
tmp_called_instance_1 = par_im;
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 329;
tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
if (par_imOut == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_imOut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = par_imOut;
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 329;
tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_output_profile);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__8_apply->m_frame.f_lineno = 330;
tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_tobytes);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
if (par_imOut == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_imOut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 330;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = par_imOut;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_info);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 330;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_icc_profile;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
}
if (par_imOut == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_imOut);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 331;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}

tmp_return_value = par_imOut;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__8_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__8_apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__8_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__8_apply,
    type_description_1,
    par_self,
    par_im,
    par_imOut,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__8_apply == cache_frame_frame_PIL$ImageCms$$$function__8_apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__8_apply);
    cache_frame_frame_PIL$ImageCms$$$function__8_apply = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__8_apply);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_imOut);
par_imOut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_imOut);
par_imOut = NULL;
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


static PyObject *impl_PIL$ImageCms$$$function__9_apply_in_place(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__9_apply_in_place;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place = MAKE_FUNCTION_FRAME(tstate, code_objects_ceedabe1366e8c8adf61b1a4971a6125, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__9_apply_in_place = cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__9_apply_in_place);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__9_apply_in_place) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
CHECK_OBJECT(par_im);
tmp_args_element_value_2 = par_im;
frame_frame_PIL$ImageCms$$$function__9_apply_in_place->m_frame.f_lineno = 334;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__9_apply_in_place, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__9_apply_in_place->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__9_apply_in_place, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__9_apply_in_place,
    type_description_1,
    par_self,
    par_im
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__9_apply_in_place == cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place);
    cache_frame_frame_PIL$ImageCms$$$function__9_apply_in_place = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__9_apply_in_place);

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


static PyObject *impl_PIL$ImageCms$$$function__10_get_display_profile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *var_ImageWin = NULL;
PyObject *var_profile = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__10_get_display_profile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile = MAKE_FUNCTION_FRAME(tstate, code_objects_966fa85cec5a391ecf01d4eb91d44c96, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__10_get_display_profile = cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__10_get_display_profile);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__10_get_display_profile) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ImageWin_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_frame.f_lineno = 347;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_ImageWin,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ImageWin);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ImageWin;
    var_ImageWin = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_handle);
tmp_isinstance_inst_1 = par_handle;
CHECK_OBJECT(var_ImageWin);
tmp_expression_value_1 = var_ImageWin;
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HDC);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_get_display_profile_win32);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_handle);
tmp_int_arg_1 = par_handle;
tmp_args_element_value_1 = PyNumber_Int(tmp_int_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = const_int_pos_1;
frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_frame.f_lineno = 350;
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


exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_profile;
    var_profile = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_int_arg_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
tmp_expression_value_3 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_get_display_profile_win32);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_handle);
tmp_or_left_value_1 = par_handle;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_int_0;
tmp_int_arg_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_int_arg_2 = tmp_or_left_value_1;
or_end_1:;
tmp_args_element_value_3 = PyNumber_Int(tmp_int_arg_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_frame.f_lineno = 352;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_profile;
    var_profile = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_profile);
tmp_cmp_expr_left_1 = var_profile;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_profile);
tmp_args_element_value_4 = var_profile;
frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_frame.f_lineno = 355;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__10_get_display_profile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__10_get_display_profile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__10_get_display_profile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__10_get_display_profile,
    type_description_1,
    par_handle,
    var_ImageWin,
    var_profile
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__10_get_display_profile == cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile);
    cache_frame_frame_PIL$ImageCms$$$function__10_get_display_profile = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__10_get_display_profile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ImageWin);
CHECK_OBJECT(var_ImageWin);
Py_DECREF(var_ImageWin);
var_ImageWin = NULL;
CHECK_OBJECT(var_profile);
CHECK_OBJECT(var_profile);
Py_DECREF(var_profile);
var_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ImageWin);
var_ImageWin = NULL;
Py_XDECREF(var_profile);
var_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__11_profileToProfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_inputProfile = python_pars[1];
PyObject *par_outputProfile = python_pars[2];
PyObject *par_renderingIntent = python_pars[3];
PyObject *par_outputMode = python_pars[4];
PyObject *par_inPlace = python_pars[5];
PyObject *par_flags = python_pars[6];
PyObject *var_msg = NULL;
PyObject *var_transform = NULL;
PyObject *var_imOut = NULL;
PyObject *var_v = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__11_profileToProfile;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile = MAKE_FUNCTION_FRAME(tstate, code_objects_efa586fdbe6dcdc31bd6c238d04b7f2d, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__11_profileToProfile = cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__11_profileToProfile);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__11_profileToProfile) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_outputMode);
tmp_cmp_expr_left_1 = par_outputMode;
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_outputMode;
    assert(old != NULL);
    par_outputMode = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_renderingIntent);
tmp_isinstance_inst_1 = par_renderingIntent;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooo";
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
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_renderingIntent);
tmp_assign_source_2 = par_renderingIntent;
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_2;
    Py_INCREF(tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_3:;
{
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_3;
tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooo";
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


exception_lineno = 434;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 436;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 436;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_4;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(par_flags);
tmp_isinstance_inst_2 = par_flags;
tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooo";
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
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(par_flags);
tmp_assign_source_4 = par_flags;
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_4;
    Py_INCREF(tmp_comparison_chain_2__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_4 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_5 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_5:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_5 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_5 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_operand_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooo";
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


exception_lineno = 438;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_4 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_format_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_format_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 440;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 440;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_7;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_inputProfile);
tmp_isinstance_inst_3 = par_inputProfile;
tmp_isinstance_cls_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 443;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_args_element_value_2 = par_inputProfile;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 444;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_inputProfile;
    assert(old != NULL);
    par_inputProfile = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_8;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_outputProfile);
tmp_isinstance_inst_4 = par_outputProfile;
tmp_isinstance_cls_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_outputProfile);
tmp_args_element_value_3 = par_outputProfile;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 446;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_outputProfile;
    assert(old != NULL);
    par_outputProfile = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_5 = module_var_accessor_PIL$ImageCms$ImageCmsTransform(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsTransform);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_kw_call_arg_value_0_1 = par_inputProfile;
CHECK_OBJECT(par_outputProfile);
tmp_kw_call_arg_value_1_1 = par_outputProfile;
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 450;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_outputMode);
tmp_kw_call_arg_value_3_1 = par_outputMode;
CHECK_OBJECT(par_renderingIntent);
tmp_kw_call_arg_value_4_1 = par_renderingIntent;
CHECK_OBJECT(par_flags);
tmp_kw_call_dict_value_0_1 = par_flags;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 447;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_transform;
    var_transform = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_1;
CHECK_OBJECT(par_inPlace);
tmp_truth_name_1 = CHECK_IF_TRUE(par_inPlace);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_transform);
tmp_called_instance_1 = var_transform;
CHECK_OBJECT(par_im);
tmp_args_element_value_4 = par_im;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 456;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_apply_in_place, tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_None;
{
    PyObject *old = var_imOut;
    var_imOut = tmp_assign_source_10;
    Py_INCREF(var_imOut);
    Py_XDECREF(old);
}

}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_transform);
tmp_called_instance_2 = var_transform;
CHECK_OBJECT(par_im);
tmp_args_element_value_5 = par_im;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 459;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_apply, tmp_args_element_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_imOut;
    var_imOut = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
branch_end_8:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__11_profileToProfile, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__11_profileToProfile, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_12); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_12;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_raise_cause_1;
tmp_called_value_6 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_6 = var_v;
frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = 461;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 461;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooo";
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

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 442;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
branch_end_9:;
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
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__11_profileToProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__11_profileToProfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__11_profileToProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__11_profileToProfile,
    type_description_1,
    par_im,
    par_inputProfile,
    par_outputProfile,
    par_renderingIntent,
    par_outputMode,
    par_inPlace,
    par_flags,
    var_msg,
    var_transform,
    var_imOut,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__11_profileToProfile == cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile);
    cache_frame_frame_PIL$ImageCms$$$function__11_profileToProfile = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__11_profileToProfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_imOut);
tmp_return_value = var_imOut;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_inputProfile);
CHECK_OBJECT(par_inputProfile);
Py_DECREF(par_inputProfile);
par_inputProfile = NULL;
CHECK_OBJECT(par_outputProfile);
CHECK_OBJECT(par_outputProfile);
Py_DECREF(par_outputProfile);
par_outputProfile = NULL;
CHECK_OBJECT(par_outputMode);
CHECK_OBJECT(par_outputMode);
Py_DECREF(par_outputMode);
par_outputMode = NULL;
CHECK_OBJECT(var_transform);
CHECK_OBJECT(var_transform);
Py_DECREF(var_transform);
var_transform = NULL;
CHECK_OBJECT(var_imOut);
CHECK_OBJECT(var_imOut);
Py_DECREF(var_imOut);
var_imOut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_inputProfile);
par_inputProfile = NULL;
Py_XDECREF(par_outputProfile);
par_outputProfile = NULL;
Py_XDECREF(par_outputMode);
par_outputMode = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_transform);
var_transform = NULL;
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
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_inPlace);
Py_DECREF(par_inPlace);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_inPlace);
Py_DECREF(par_inPlace);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__12_getOpenProfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profileFilename = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__12_getOpenProfile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile = MAKE_FUNCTION_FRAME(tstate, code_objects_50632c3eefe56cac95d979d4a8998e15, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__12_getOpenProfile = cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__12_getOpenProfile);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__12_getOpenProfile) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 485;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_profileFilename);
tmp_args_element_value_1 = par_profileFilename;
frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_frame.f_lineno = 485;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__12_getOpenProfile, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__12_getOpenProfile, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "oo";
    goto try_except_handler_2;
}
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
    PyObject *old = var_v;
    var_v = tmp_assign_source_1;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_frame.f_lineno = 487;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 487;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
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

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 484;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__12_getOpenProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__12_getOpenProfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__12_getOpenProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__12_getOpenProfile,
    type_description_1,
    par_profileFilename,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__12_getOpenProfile == cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile);
    cache_frame_frame_PIL$ImageCms$$$function__12_getOpenProfile = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__12_getOpenProfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_profileFilename);
Py_DECREF(par_profileFilename);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_profileFilename);
Py_DECREF(par_profileFilename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__13_buildTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inputProfile = python_pars[0];
PyObject *par_outputProfile = python_pars[1];
PyObject *par_inMode = python_pars[2];
PyObject *par_outMode = python_pars[3];
PyObject *par_renderingIntent = python_pars[4];
PyObject *par_flags = python_pars[5];
PyObject *var_msg = NULL;
PyObject *var_v = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__13_buildTransform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform = MAKE_FUNCTION_FRAME(tstate, code_objects_ae490f64b0cd7c6074759a2f8da58dc0, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__13_buildTransform = cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__13_buildTransform);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__13_buildTransform) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_renderingIntent);
tmp_isinstance_inst_1 = par_renderingIntent;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooo";
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
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_renderingIntent);
tmp_assign_source_1 = par_renderingIntent;
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


exception_lineno = 553;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_3;
tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooo";
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


exception_lineno = 553;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 555;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 555;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 555;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(par_flags);
tmp_isinstance_inst_2 = par_flags;
tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooo";
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
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_flags);
tmp_assign_source_3 = par_flags;
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
    Py_INCREF(tmp_comparison_chain_2__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
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
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 557;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_operand_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooo";
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


exception_lineno = 557;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_format_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_format_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 558;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 558;
type_description_1 = "oooooooo";
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
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_5 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 559;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 559;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 559;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_7;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_inputProfile);
tmp_isinstance_inst_3 = par_inputProfile;
tmp_isinstance_cls_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 562;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_args_element_value_2 = par_inputProfile;
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 563;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_inputProfile;
    assert(old != NULL);
    par_inputProfile = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_8;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_outputProfile);
tmp_isinstance_inst_4 = par_outputProfile;
tmp_isinstance_cls_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 564;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 565;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_outputProfile);
tmp_args_element_value_3 = par_outputProfile;
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 565;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 565;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_outputProfile;
    assert(old != NULL);
    par_outputProfile = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_5 = module_var_accessor_PIL$ImageCms$ImageCmsTransform(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsTransform);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 566;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_kw_call_arg_value_0_1 = par_inputProfile;
CHECK_OBJECT(par_outputProfile);
tmp_kw_call_arg_value_1_1 = par_outputProfile;
CHECK_OBJECT(par_inMode);
tmp_kw_call_arg_value_2_1 = par_inMode;
CHECK_OBJECT(par_outMode);
tmp_kw_call_arg_value_3_1 = par_outMode;
CHECK_OBJECT(par_renderingIntent);
tmp_kw_call_arg_value_4_1 = par_renderingIntent;
CHECK_OBJECT(par_flags);
tmp_kw_call_dict_value_0_1 = par_flags;
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 566;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS5_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_flags_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__13_buildTransform, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__13_buildTransform, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_raise_cause_1;
tmp_called_value_6 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 570;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_4 = var_v;
frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = 570;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 570;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooo";
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

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_7;
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 561;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_end_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__13_buildTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__13_buildTransform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__13_buildTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__13_buildTransform,
    type_description_1,
    par_inputProfile,
    par_outputProfile,
    par_inMode,
    par_outMode,
    par_renderingIntent,
    par_flags,
    var_msg,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__13_buildTransform == cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform);
    cache_frame_frame_PIL$ImageCms$$$function__13_buildTransform = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__13_buildTransform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_inputProfile);
CHECK_OBJECT(par_inputProfile);
Py_DECREF(par_inputProfile);
par_inputProfile = NULL;
CHECK_OBJECT(par_outputProfile);
CHECK_OBJECT(par_outputProfile);
Py_DECREF(par_outputProfile);
par_outputProfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_inputProfile);
par_inputProfile = NULL;
Py_XDECREF(par_outputProfile);
par_outputProfile = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inMode);
Py_DECREF(par_inMode);
CHECK_OBJECT(par_outMode);
Py_DECREF(par_outMode);
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inMode);
Py_DECREF(par_inMode);
CHECK_OBJECT(par_outMode);
Py_DECREF(par_outMode);
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__14_buildProofTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inputProfile = python_pars[0];
PyObject *par_outputProfile = python_pars[1];
PyObject *par_proofProfile = python_pars[2];
PyObject *par_inMode = python_pars[3];
PyObject *par_outMode = python_pars[4];
PyObject *par_renderingIntent = python_pars[5];
PyObject *par_proofRenderingIntent = python_pars[6];
PyObject *par_flags = python_pars[7];
PyObject *var_msg = NULL;
PyObject *var_v = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_comparison_chain_2__comparison_result = NULL;
PyObject *tmp_comparison_chain_2__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__14_buildProofTransform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform = MAKE_FUNCTION_FRAME(tstate, code_objects_b5a9e00b3ad277a5d9b1ffbe85dacb65, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform = cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__14_buildProofTransform);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__14_buildProofTransform) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_renderingIntent);
tmp_isinstance_inst_1 = par_renderingIntent;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "oooooooooo";
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
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_renderingIntent);
tmp_assign_source_1 = par_renderingIntent;
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


exception_lineno = 657;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
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
tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_2);
goto try_return_handler_2;
branch_no_2:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_3;
tmp_operand_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "oooooooooo";
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


exception_lineno = 657;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 659;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_8f018fa86a73c26d820150445eba73ac_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 659;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_3;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_operand_value_4;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(par_flags);
tmp_isinstance_inst_2 = par_flags;
tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
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
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_flags);
tmp_assign_source_3 = par_flags;
{
    PyObject *old = tmp_comparison_chain_2__operand_2;
    tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
    Py_INCREF(tmp_comparison_chain_2__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_right_3 = tmp_comparison_chain_2__operand_2;
tmp_assign_source_4 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_comparison_chain_2__comparison_result;
    tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
tmp_operand_value_6 = tmp_comparison_chain_2__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
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
tmp_operand_value_5 = tmp_comparison_chain_2__comparison_result;
Py_INCREF(tmp_operand_value_5);
goto try_return_handler_3;
branch_no_4:;
{
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
tmp_cmp_expr_left_4 = tmp_comparison_chain_2__operand_2;
tmp_cmp_expr_right_4 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
tmp_operand_value_5 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooo";
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


exception_lineno = 661;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_3 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_0350bbba4e0c470673ad1913f0734c67;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_PIL$ImageCms$_MAX_FLAG(tstate);
if (unlikely(tmp_format_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_FLAG);
}

if (tmp_format_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 662;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "oooooooooo";
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
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_5 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 663;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 663;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 663;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_7;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_inputProfile);
tmp_isinstance_inst_3 = par_inputProfile;
tmp_isinstance_cls_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_args_element_value_2 = par_inputProfile;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 667;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_inputProfile;
    assert(old != NULL);
    par_inputProfile = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_8;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(par_outputProfile);
tmp_isinstance_inst_4 = par_outputProfile;
tmp_isinstance_cls_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_outputProfile);
tmp_args_element_value_3 = par_outputProfile;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 669;
tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_outputProfile;
    assert(old != NULL);
    par_outputProfile = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_9;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
CHECK_OBJECT(par_proofProfile);
tmp_isinstance_inst_5 = par_proofProfile;
tmp_isinstance_cls_5 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_proofProfile);
tmp_args_element_value_4 = par_proofProfile;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 671;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = par_proofProfile;
    assert(old != NULL);
    par_proofProfile = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_value_6 = module_var_accessor_PIL$ImageCms$ImageCmsTransform(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsTransform);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 672;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_inputProfile);
tmp_args_element_value_5 = par_inputProfile;
CHECK_OBJECT(par_outputProfile);
tmp_args_element_value_6 = par_outputProfile;
CHECK_OBJECT(par_inMode);
tmp_args_element_value_7 = par_inMode;
CHECK_OBJECT(par_outMode);
tmp_args_element_value_8 = par_outMode;
CHECK_OBJECT(par_renderingIntent);
tmp_args_element_value_9 = par_renderingIntent;
CHECK_OBJECT(par_proofProfile);
tmp_args_element_value_10 = par_proofProfile;
CHECK_OBJECT(par_proofRenderingIntent);
tmp_args_element_value_11 = par_proofRenderingIntent;
CHECK_OBJECT(par_flags);
tmp_args_element_value_12 = par_flags;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 672;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_6, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__14_buildProofTransform, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__14_buildProofTransform, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = mod_consts.const_tuple_type_OSError_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 682;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_9;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_13;
PyObject *tmp_raise_cause_1;
tmp_called_value_7 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 683;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_13 = var_v;
frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = 683;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_13);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 683;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 683;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 683;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooooooooo";
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

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 665;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooo";
goto try_except_handler_5;
branch_end_8:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__14_buildProofTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__14_buildProofTransform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__14_buildProofTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__14_buildProofTransform,
    type_description_1,
    par_inputProfile,
    par_outputProfile,
    par_proofProfile,
    par_inMode,
    par_outMode,
    par_renderingIntent,
    par_proofRenderingIntent,
    par_flags,
    var_msg,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__14_buildProofTransform == cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform);
    cache_frame_frame_PIL$ImageCms$$$function__14_buildProofTransform = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__14_buildProofTransform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_inputProfile);
CHECK_OBJECT(par_inputProfile);
Py_DECREF(par_inputProfile);
par_inputProfile = NULL;
CHECK_OBJECT(par_outputProfile);
CHECK_OBJECT(par_outputProfile);
Py_DECREF(par_outputProfile);
par_outputProfile = NULL;
CHECK_OBJECT(par_proofProfile);
CHECK_OBJECT(par_proofProfile);
Py_DECREF(par_proofProfile);
par_proofProfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_inputProfile);
par_inputProfile = NULL;
Py_XDECREF(par_outputProfile);
par_outputProfile = NULL;
Py_XDECREF(par_proofProfile);
par_proofProfile = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inMode);
Py_DECREF(par_inMode);
CHECK_OBJECT(par_outMode);
Py_DECREF(par_outMode);
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_proofRenderingIntent);
Py_DECREF(par_proofRenderingIntent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inMode);
Py_DECREF(par_inMode);
CHECK_OBJECT(par_outMode);
Py_DECREF(par_outMode);
CHECK_OBJECT(par_renderingIntent);
Py_DECREF(par_renderingIntent);
CHECK_OBJECT(par_proofRenderingIntent);
Py_DECREF(par_proofRenderingIntent);
CHECK_OBJECT(par_flags);
Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__15_applyTransform(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_im = python_pars[0];
PyObject *par_transform = python_pars[1];
PyObject *par_inPlace = python_pars[2];
PyObject *var_imOut = NULL;
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__15_applyTransform;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform = MAKE_FUNCTION_FRAME(tstate, code_objects_fa35ebe6591a93f6b884b8d0da53f748, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__15_applyTransform = cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__15_applyTransform);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__15_applyTransform) == 2);

// Framed code:
// Tried code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_inPlace);
tmp_truth_name_1 = CHECK_IF_TRUE(par_inPlace);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_transform);
tmp_called_instance_1 = par_transform;
CHECK_OBJECT(par_im);
tmp_args_element_value_1 = par_im;
frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame.f_lineno = 735;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_apply_in_place, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_imOut;
    var_imOut = tmp_assign_source_1;
    Py_INCREF(var_imOut);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_transform);
tmp_called_instance_2 = par_transform;
CHECK_OBJECT(par_im);
tmp_args_element_value_2 = par_im;
frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame.f_lineno = 738;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_apply, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 738;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_imOut;
    var_imOut = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__15_applyTransform, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__15_applyTransform, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 739;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_3;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_raise_cause_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 740;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_3 = var_v;
frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame.f_lineno = 740;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 740;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 740;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 733;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__15_applyTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__15_applyTransform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__15_applyTransform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__15_applyTransform,
    type_description_1,
    par_im,
    par_transform,
    par_inPlace,
    var_imOut,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__15_applyTransform == cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform);
    cache_frame_frame_PIL$ImageCms$$$function__15_applyTransform = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__15_applyTransform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_imOut);
tmp_return_value = var_imOut;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_imOut);
CHECK_OBJECT(var_imOut);
Py_DECREF(var_imOut);
var_imOut = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_transform);
Py_DECREF(par_transform);
CHECK_OBJECT(par_inPlace);
Py_DECREF(par_inPlace);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_im);
Py_DECREF(par_im);
CHECK_OBJECT(par_transform);
Py_DECREF(par_transform);
CHECK_OBJECT(par_inPlace);
Py_DECREF(par_inPlace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__16_createProfile(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_colorSpace = python_pars[0];
PyObject *par_colorTemp = python_pars[1];
PyObject *var_msg = NULL;
PyObject *var_e = NULL;
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__16_createProfile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__16_createProfile = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__16_createProfile)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__16_createProfile);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__16_createProfile == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__16_createProfile = MAKE_FUNCTION_FRAME(tstate, code_objects_2a5832c88de1fed52cc7b4590aa5a4f8, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__16_createProfile->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__16_createProfile = cache_frame_frame_PIL$ImageCms$$$function__16_createProfile;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__16_createProfile);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__16_createProfile) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_colorSpace);
tmp_cmp_expr_left_1 = par_colorSpace;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_LAB_str_plain_XYZ_str_plain_sRGB_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 777;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_c525da6fd273f38ff76758354d5c0e0e;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_colorSpace);
tmp_format_value_1 = par_colorSpace;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 779;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 781;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_1 = var_msg;
frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = 781;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 781;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 781;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_colorSpace);
tmp_cmp_expr_left_2 = par_colorSpace;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_LAB;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 783;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_float_arg_1;
CHECK_OBJECT(par_colorTemp);
tmp_float_arg_1 = par_colorTemp;
tmp_assign_source_2 = TO_FLOAT(tmp_float_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 785;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_colorTemp;
    assert(old != NULL);
    par_colorTemp = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_ec49ba414a3a46e206a4ec952150906d;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_colorTemp);
tmp_format_value_2 = par_colorTemp;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_c0376487707d1d94ee880b8cd8f16da8;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_4 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 788;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_msg);
tmp_args_element_value_2 = var_msg;
frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = 788;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 788;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 784;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:
try_end_1:;
branch_no_2:;
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_instance_1 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 791;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_colorSpace);
tmp_args_element_value_3 = par_colorSpace;
CHECK_OBJECT(par_colorTemp);
tmp_args_element_value_4 = par_colorTemp;
frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = 791;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_createProfile,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 791;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = mod_consts.const_tuple_type_TypeError_type_ValueError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 792;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_5); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_5;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_raise_cause_2;
tmp_called_value_3 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 793;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_5 = var_v;
frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = 793;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "ooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_2 = var_v;
exception_state.exception_value = tmp_raise_type_3;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 793;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooo";
goto try_except_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 790;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__16_createProfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__16_createProfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__16_createProfile,
    type_description_1,
    par_colorSpace,
    par_colorTemp,
    var_msg,
    var_e,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__16_createProfile == cache_frame_frame_PIL$ImageCms$$$function__16_createProfile) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__16_createProfile);
    cache_frame_frame_PIL$ImageCms$$$function__16_createProfile = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__16_createProfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_colorTemp);
CHECK_OBJECT(par_colorTemp);
Py_DECREF(par_colorTemp);
par_colorTemp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_colorTemp);
par_colorTemp = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_colorSpace);
Py_DECREF(par_colorSpace);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_colorSpace);
Py_DECREF(par_colorSpace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageCms$$$function__17_getProfileName(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_model = NULL;
PyObject *var_manufacturer = NULL;
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__17_getProfileName;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName = MAKE_FUNCTION_FRAME(tstate, code_objects_725d9260015fd3890fbda1778535425e, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__17_getProfileName = cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__17_getProfileName);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__17_getProfileName) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 819;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 819;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 819;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_frame.f_lineno = 820;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 825;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 825;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_model;
    var_model = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_profile);
tmp_expression_value_4 = par_profile;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_profile);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 826;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_manufacturer);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 826;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_manufacturer;
    var_manufacturer = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(var_model);
tmp_or_left_value_1 = var_model;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_manufacturer);
tmp_or_right_value_1 = var_manufacturer;
tmp_operand_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_2 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 828;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_profile);
tmp_expression_value_6 = par_profile;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_profile);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_profile_description);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 829;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_add_expr_left_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_add_expr_left_1 = tmp_or_left_value_2;
or_end_2:;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 829;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_operand_value_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(var_manufacturer);
tmp_operand_value_3 = var_manufacturer;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_or_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_model);
tmp_truth_name_1 = CHECK_IF_TRUE(var_model);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_model);
tmp_len_arg_1 = var_model;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 830;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 30;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_3 = tmp_and_left_value_1;
and_end_1:;
tmp_condition_result_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_3 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_model);
tmp_format_value_1 = var_model;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 831;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_newline;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
CHECK_OBJECT(var_model);
tmp_format_value_2 = var_model;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_67df5f6d8badc97414fd7b08611a267f;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_manufacturer);
tmp_format_value_3 = var_manufacturer;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 832;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_newline;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__17_getProfileName, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__17_getProfileName, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 834;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_4;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 835;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_frame.f_lineno = 835;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 835;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 817;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__17_getProfileName, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__17_getProfileName->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__17_getProfileName, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__17_getProfileName,
    type_description_1,
    par_profile,
    var_model,
    var_manufacturer,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__17_getProfileName == cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName);
    cache_frame_frame_PIL$ImageCms$$$function__17_getProfileName = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__17_getProfileName);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
CHECK_OBJECT(var_model);
CHECK_OBJECT(var_model);
Py_DECREF(var_model);
var_model = NULL;
CHECK_OBJECT(var_manufacturer);
CHECK_OBJECT(var_manufacturer);
Py_DECREF(var_manufacturer);
var_manufacturer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
Py_XDECREF(var_model);
var_model = NULL;
Py_XDECREF(var_manufacturer);
var_manufacturer = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__18_getProfileInfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_description = NULL;
PyObject *var_cpright = NULL;
PyObject *var_elements = NULL;
PyObject *var_v = NULL;
PyObject *outline_0_var_element = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__18_getProfileInfo;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo = MAKE_FUNCTION_FRAME(tstate, code_objects_e5ebdb3bb27dedfb4cafd73dc9886654, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__18_getProfileInfo = cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__18_getProfileInfo);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__18_getProfileInfo) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 860;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 860;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 860;
type_description_1 = "ooooo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 861;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_frame.f_lineno = 861;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_profile_description);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 866;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_description;
    var_description = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_profile);
tmp_expression_value_4 = par_profile;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_profile);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_copyright);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 867;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_cpright;
    var_cpright = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_description);
tmp_tuple_element_1 = var_description;
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_cpright);
tmp_tuple_element_1 = var_cpright;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_5 == NULL));
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 868;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_element;
    outline_0_var_element = tmp_assign_source_8;
    Py_INCREF(outline_0_var_element);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(outline_0_var_element);
tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var_element);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "ooooo";
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
CHECK_OBJECT(outline_0_var_element);
tmp_append_value_1 = outline_0_var_element;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 868;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
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
Py_XDECREF(outline_0_var_element);
outline_0_var_element = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_element);
outline_0_var_element = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 868;
goto try_except_handler_2;
outline_result_1:;
{
    PyObject *old = var_elements;
    var_elements = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5;
CHECK_OBJECT(var_elements);
tmp_iterable_value_1 = var_elements;
tmp_add_expr_left_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 869;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_e548705936de054393b3ac06f9f3c9d5;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__18_getProfileInfo, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__18_getProfileInfo, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 871;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_9;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 872;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_frame.f_lineno = 872;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 872;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooo";
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

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 859;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_5;
branch_end_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__18_getProfileInfo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__18_getProfileInfo->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__18_getProfileInfo, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__18_getProfileInfo,
    type_description_1,
    par_profile,
    var_description,
    var_cpright,
    var_elements,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__18_getProfileInfo == cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo);
    cache_frame_frame_PIL$ImageCms$$$function__18_getProfileInfo = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__18_getProfileInfo);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
CHECK_OBJECT(var_description);
CHECK_OBJECT(var_description);
Py_DECREF(var_description);
var_description = NULL;
CHECK_OBJECT(var_cpright);
CHECK_OBJECT(var_cpright);
Py_DECREF(var_cpright);
var_cpright = NULL;
CHECK_OBJECT(var_elements);
CHECK_OBJECT(var_elements);
Py_DECREF(var_elements);
var_elements = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
Py_XDECREF(var_description);
var_description = NULL;
Py_XDECREF(var_cpright);
var_cpright = NULL;
Py_XDECREF(var_elements);
var_elements = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_PIL$ImageCms$$$function__19_getProfileCopyright(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright = MAKE_FUNCTION_FRAME(tstate, code_objects_a55f4740c09912fa95a5569b611c5f20, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright = cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 896;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 896;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 897;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_frame.f_lineno = 897;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copyright);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 898;
type_description_1 = "oo";
    goto try_except_handler_2;
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
tmp_add_expr_left_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_add_expr_left_1 = tmp_or_left_value_1;
or_end_1:;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 899;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 900;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_frame.f_lineno = 900;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 900;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 900;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 900;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 894;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright,
    type_description_1,
    par_profile,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright == cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright);
    cache_frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__19_getProfileCopyright);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__20_getProfileManufacturer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer = MAKE_FUNCTION_FRAME(tstate, code_objects_06901f0bdd9124f76501dae733a88d78, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer = cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 924;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 924;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 924;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 925;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_frame.f_lineno = 925;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 925;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_manufacturer);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 926;
type_description_1 = "oo";
    goto try_except_handler_2;
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
tmp_add_expr_left_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_add_expr_left_1 = tmp_or_left_value_1;
or_end_1:;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 927;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 928;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_frame.f_lineno = 928;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 928;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 928;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 928;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 922;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer,
    type_description_1,
    par_profile,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer == cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer);
    cache_frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__20_getProfileManufacturer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__21_getProfileModel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__21_getProfileModel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel = MAKE_FUNCTION_FRAME(tstate, code_objects_6f12a274265c336322b9c84228e15bd6, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__21_getProfileModel = cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__21_getProfileModel);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__21_getProfileModel) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 953;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 953;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 953;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 954;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_frame.f_lineno = 954;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 954;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 955;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 955;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 955;
type_description_1 = "oo";
    goto try_except_handler_2;
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
tmp_add_expr_left_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_add_expr_left_1 = tmp_or_left_value_1;
or_end_1:;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 955;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__21_getProfileModel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__21_getProfileModel, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 956;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 957;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_frame.f_lineno = 957;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 957;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 957;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 957;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 951;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__21_getProfileModel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__21_getProfileModel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__21_getProfileModel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__21_getProfileModel,
    type_description_1,
    par_profile,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__21_getProfileModel == cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel);
    cache_frame_frame_PIL$ImageCms$$$function__21_getProfileModel = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__21_getProfileModel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__22_getProfileDescription(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__22_getProfileDescription;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription = MAKE_FUNCTION_FRAME(tstate, code_objects_1ae84c42898df87015b97c3614253be6, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__22_getProfileDescription = cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__22_getProfileDescription);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__22_getProfileDescription) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 982;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 982;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 982;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 983;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_frame.f_lineno = 983;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 983;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 984;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_profile_description);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 984;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 984;
type_description_1 = "oo";
    goto try_except_handler_2;
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
tmp_add_expr_left_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_add_expr_left_1 = tmp_or_left_value_1;
or_end_1:;
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 984;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__22_getProfileDescription, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__22_getProfileDescription, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 985;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 986;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_frame.f_lineno = 986;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 986;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 986;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 986;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 980;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__22_getProfileDescription, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__22_getProfileDescription->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__22_getProfileDescription, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__22_getProfileDescription,
    type_description_1,
    par_profile,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__22_getProfileDescription == cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription);
    cache_frame_frame_PIL$ImageCms$$$function__22_getProfileDescription = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__22_getProfileDescription);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__23_getDefaultIntent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent = MAKE_FUNCTION_FRAME(tstate, code_objects_3039696866e59afb60f57ee3118cd50e, module_PIL$ImageCms, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent = cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1021;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1021;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1021;
type_description_1 = "oo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1022;
type_description_1 = "oo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_frame.f_lineno = 1022;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1022;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_profile);
tmp_expression_value_2 = par_profile;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_profile);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1023;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rendering_intent);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1023;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1024;
type_description_1 = "oo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1025;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_frame.f_lineno = 1025;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1025;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1025;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 1025;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1020;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent,
    type_description_1,
    par_profile,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent == cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent);
    cache_frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__23_getDefaultIntent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_PIL$ImageCms$$$function__24_isIntentSupported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_profile = python_pars[0];
PyObject *par_intent = python_pars[1];
PyObject *par_direction = python_pars[2];
PyObject *var_v = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$function__24_isIntentSupported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported = MAKE_FUNCTION_FRAME(tstate, code_objects_d2de37d4ebdd5532efd026dec252012e, module_PIL$ImageCms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_type_description == NULL);
frame_frame_PIL$ImageCms$$$function__24_isIntentSupported = cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$function__24_isIntentSupported);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$function__24_isIntentSupported) == 2);

// Framed code:
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_profile);
tmp_isinstance_inst_1 = par_profile;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1069;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1069;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1069;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageCms$ImageCmsProfile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ImageCmsProfile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1070;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_profile);
tmp_args_element_value_1 = par_profile;
frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame.f_lineno = 1070;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1070;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_profile;
    assert(old != NULL);
    par_profile = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(par_profile);
tmp_expression_value_1 = par_profile;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_profile);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1073;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_intent);
tmp_args_element_value_2 = par_intent;
CHECK_OBJECT(par_direction);
tmp_args_element_value_3 = par_direction;
frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame.f_lineno = 1073;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_is_intent_supported,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1073;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 1073;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
tmp_return_value = const_int_pos_1;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_2;
branch_no_2:;
tmp_return_value = const_int_neg_1;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__24_isIntentSupported, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__24_isIntentSupported, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_25c1879cb55e73040585303054ec0ea7_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1077;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_2;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_PIL$ImageCms$PyCMSError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyCMSError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1078;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_4 = var_v;
frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame.f_lineno = 1078;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1078;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1078;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_v);
tmp_raise_cause_1 = var_v;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 1078;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto try_except_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_v);
var_v = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 1068;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame)) {
        frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$function__24_isIntentSupported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$function__24_isIntentSupported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$function__24_isIntentSupported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$function__24_isIntentSupported,
    type_description_1,
    par_profile,
    par_intent,
    par_direction,
    var_v
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageCms$$$function__24_isIntentSupported == cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported);
    cache_frame_frame_PIL$ImageCms$$$function__24_isIntentSupported = NULL;
}

assertFrameObject(frame_frame_PIL$ImageCms$$$function__24_isIntentSupported);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_profile);
CHECK_OBJECT(par_profile);
Py_DECREF(par_profile);
par_profile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_profile);
par_profile = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_intent);
Py_DECREF(par_intent);
CHECK_OBJECT(par_direction);
Py_DECREF(par_direction);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_intent);
Py_DECREF(par_intent);
CHECK_OBJECT(par_direction);
Py_DECREF(par_direction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__10_get_display_profile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__10_get_display_profile,
        mod_consts.const_str_plain_get_display_profile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_966fa85cec5a391ecf01d4eb91d44c96,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_bf6a363f5101974a7da185659ac1153d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__11_profileToProfile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__11_profileToProfile,
        mod_consts.const_str_plain_profileToProfile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_efa586fdbe6dcdc31bd6c238d04b7f2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_dc80433ecdd5b3af880261bb5df36700,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__12_getOpenProfile(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__12_getOpenProfile,
        mod_consts.const_str_plain_getOpenProfile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_50632c3eefe56cac95d979d4a8998e15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_9fb2a7dd7c34940edaaccf123cbca2fb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__13_buildTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__13_buildTransform,
        mod_consts.const_str_plain_buildTransform,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ae490f64b0cd7c6074759a2f8da58dc0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_1e475493beba4fd6f6e3fc7f969b1ad5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__14_buildProofTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__14_buildProofTransform,
        mod_consts.const_str_plain_buildProofTransform,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b5a9e00b3ad277a5d9b1ffbe85dacb65,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_4e876a642ab0f2fb447e51c066a968d7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__15_applyTransform(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__15_applyTransform,
        mod_consts.const_str_plain_applyTransform,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa35ebe6591a93f6b884b8d0da53f748,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_23339e30642186d2a03201a38617d28e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__16_createProfile(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__16_createProfile,
        mod_consts.const_str_plain_createProfile,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a5832c88de1fed52cc7b4590aa5a4f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_3f983affa3d2d0e89f3c4c1fd5e50ad2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__17_getProfileName(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__17_getProfileName,
        mod_consts.const_str_plain_getProfileName,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_725d9260015fd3890fbda1778535425e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_34a082c6c8040c607d266b7c7ddb43e8,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__18_getProfileInfo(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__18_getProfileInfo,
        mod_consts.const_str_plain_getProfileInfo,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e5ebdb3bb27dedfb4cafd73dc9886654,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_01a7c7930b066a782c52359716bca55b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__19_getProfileCopyright(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__19_getProfileCopyright,
        mod_consts.const_str_plain_getProfileCopyright,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a55f4740c09912fa95a5569b611c5f20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_191064ae33a0aa41e6eb2de88b02475a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__1_GRIDPOINTS(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__1_GRIDPOINTS,
        mod_consts.const_str_plain_GRIDPOINTS,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d3c0e901cb1a511441f7b3c418d38a9d,
#endif
        code_objects_b1ccdf1184222b9a6d9577c79c09cb42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_1cc9bda0383b3e9263fbab3c039e4513,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__20_getProfileManufacturer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__20_getProfileManufacturer,
        mod_consts.const_str_plain_getProfileManufacturer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_06901f0bdd9124f76501dae733a88d78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_cd40ce2c20f65cd18bcc319c6884c5c8,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__21_getProfileModel(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__21_getProfileModel,
        mod_consts.const_str_plain_getProfileModel,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6f12a274265c336322b9c84228e15bd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_c99cf901c21334e1a174472a1ef39220,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__22_getProfileDescription(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__22_getProfileDescription,
        mod_consts.const_str_plain_getProfileDescription,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ae84c42898df87015b97c3614253be6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_5a2065cefea938fcb68bd9206c3bb1aa,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__23_getDefaultIntent(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__23_getDefaultIntent,
        mod_consts.const_str_plain_getDefaultIntent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3039696866e59afb60f57ee3118cd50e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_cf5387b6ac9e2e0190823db7358b6c9d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__24_isIntentSupported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__24_isIntentSupported,
        mod_consts.const_str_plain_isIntentSupported,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d2de37d4ebdd5532efd026dec252012e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_b4b62eddbb0ccb01e52cc00a36abd2ce,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__2_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__2_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_58528f29434f02ea7340e83342b22db6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_PIL$ImageCms,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d50f79aab55eebf987c611888206b3c9,
#endif
        code_objects_fd1cf2ab6e41c824e87f72f858346797,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_d20bdf183cd549f0a1ad291de83b1e1f,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__4___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__4___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9210074aa028800bf3626836d09d37a2,
#endif
        code_objects_28f5b945cb98121be8f5af8131382047,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__5_tobytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__5_tobytes,
        mod_consts.const_str_plain_tobytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_602f496f0e9cef547e3f39e063b8de5d,
#endif
        code_objects_6b22941b0f83d57464b4f4d788be2599,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        mod_consts.const_str_digest_ffd42d0b70b4ddc0531e4baff8abb182,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3ffb0e0898562376041af2a7e206aa2,
#endif
        code_objects_9981aec9f86775adcbf17cb036cbb934,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__7_point(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__7_point,
        mod_consts.const_str_plain_point,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_81422cc944c95512dc90b11d073b8cc9,
#endif
        code_objects_8452e758ecb01c03d565243c92e3ffe5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__8_apply(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__8_apply,
        mod_consts.const_str_plain_apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c73ef54bc6a3d05c42029a91cd5d4024,
#endif
        code_objects_cf91086c2686495ba743b953348ec6a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageCms$$$function__9_apply_in_place(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageCms$$$function__9_apply_in_place,
        mod_consts.const_str_plain_apply_in_place,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54ba0e85457829dfa68de5ad68ba2716,
#endif
        code_objects_ceedabe1366e8c8adf61b1a4971a6125,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageCms,
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

static function_impl_code const function_table_PIL$ImageCms[] = {
impl_PIL$ImageCms$$$function__1_GRIDPOINTS,
impl_PIL$ImageCms$$$function__2_lambda,
impl_PIL$ImageCms$$$function__3___init__,
impl_PIL$ImageCms$$$function__4___getattr__,
impl_PIL$ImageCms$$$function__5_tobytes,
impl_PIL$ImageCms$$$function__6___init__,
impl_PIL$ImageCms$$$function__7_point,
impl_PIL$ImageCms$$$function__8_apply,
impl_PIL$ImageCms$$$function__9_apply_in_place,
impl_PIL$ImageCms$$$function__10_get_display_profile,
impl_PIL$ImageCms$$$function__11_profileToProfile,
impl_PIL$ImageCms$$$function__12_getOpenProfile,
impl_PIL$ImageCms$$$function__13_buildTransform,
impl_PIL$ImageCms$$$function__14_buildProofTransform,
impl_PIL$ImageCms$$$function__15_applyTransform,
impl_PIL$ImageCms$$$function__16_createProfile,
impl_PIL$ImageCms$$$function__17_getProfileName,
impl_PIL$ImageCms$$$function__18_getProfileInfo,
impl_PIL$ImageCms$$$function__19_getProfileCopyright,
impl_PIL$ImageCms$$$function__20_getProfileManufacturer,
impl_PIL$ImageCms$$$function__21_getProfileModel,
impl_PIL$ImageCms$$$function__22_getProfileDescription,
impl_PIL$ImageCms$$$function__23_getDefaultIntent,
impl_PIL$ImageCms$$$function__24_isIntentSupported,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageCms);
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
        module_PIL$ImageCms,
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
        function_table_PIL$ImageCms,
        sizeof(function_table_PIL$ImageCms) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageCms";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageCms(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageCms");

    // Store the module for future use.
    module_PIL$ImageCms = module;

    moduledict_PIL$ImageCms = MODULE_DICT(module_PIL$ImageCms);

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
        PRINT_STRING("PIL$ImageCms: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageCms: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageCms: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageCms" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageCms\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageCms,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageCms,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageCms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageCms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageCms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageCms);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageCms);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
PyObject *locals_PIL$ImageCms$$$class__1_Intent_118 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$class__1_Intent_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_PIL$ImageCms$$$class__2_Direction_125 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$class__2_Direction_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_PIL$ImageCms$$$class__3_Flags_135 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$class__3_Flags_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276 = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_PIL$ImageCms$$$class__6_PyCMSError_363 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageCms = MAKE_MODULE_FRAME(code_objects_aae8d5d87c7a0cef5f965ca81e46f1ca, module_PIL$ImageCms);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms);
assert(Py_REFCNT(frame_frame_PIL$ImageCms) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageCms$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageCms$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 22;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_operator, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_IntEnum_str_plain_IntFlag_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 24;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_IntEnum,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_IntEnum);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntEnum, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_IntFlag,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_IntFlag);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_IntFlag, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_reduce,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_reduce);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_12);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_SupportsFloat,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_SupportsFloat);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsFloat, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_SupportsInt,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_SupportsInt);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsInt, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 28;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Image);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__deprecate;
tmp_globals_arg_value_4 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_deprecate_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 29;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_deprecate,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_deprecate);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_deprecate, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__typing;
tmp_globals_arg_value_5 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_SupportsRead_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 30;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_SupportsRead,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_SupportsRead);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportsRead, tmp_assign_source_20);
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__imagingcms_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 33;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain__imagingcms,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain__imagingcms);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_core, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageCms$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto try_except_handler_3;
}
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_PIL$ImageCms$SupportsRead(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportsRead);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
tmp_subscript_value_2 = (PyObject *)&PyBytes_Type;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_PIL$ImageCms$core(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_core);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CmsProfile);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_ImageCmsProfile;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__CmsProfileCompatible, tmp_assign_source_22);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms, exception_keeper_lineno_3);
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
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_23); 
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ex, tmp_assign_source_23);
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_7 = (PyObject *)moduledict_PIL$ImageCms;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_DeferredError_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 41;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_5;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_PIL$ImageCms,
        mod_consts.const_str_plain_DeferredError,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_DeferredError);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_DeferredError, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
tmp_expression_value_4 = module_var_accessor_PIL$ImageCms$DeferredError(tstate);
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
tmp_args_element_value_1 = module_var_accessor_PIL$ImageCms$ex(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ex);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 43;

    goto try_except_handler_5;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 43;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_core, tmp_assign_source_25);
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

if (DICT_REMOVE_ITEM((PyObject *)moduledict_PIL$ImageCms, mod_consts.const_str_plain_ex) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
if (DICT_REMOVE_ITEM((PyObject *)moduledict_PIL$ImageCms, mod_consts.const_str_plain_ex) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}

goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 32;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageCms->m_frame)) {
        frame_frame_PIL$ImageCms->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_end_1:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
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
try_end_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_str_digest_f365ac7f24934dc62f1db5d2e6bf66d3;
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__DESCRIPTION, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_digest_9b45384fe064244dcb74767caa55ffaa;
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__VERSION, tmp_assign_source_27);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_PIL$ImageCms$IntEnum(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_5 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_Intent;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 118;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_8 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
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
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 118;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
branch_end_2:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ImageCms$$$class__1_Intent_118 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_Intent;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_118;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
frame_frame_PIL$ImageCms$$$class__1_Intent_2 = MAKE_CLASS_FRAME(tstate, code_objects_04b3a881cfc436feedc7e91b1e637820, module_PIL$ImageCms, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ImageCms$$$class__1_Intent_2, locals_PIL$ImageCms$$$class__1_Intent_118);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$class__1_Intent_2);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$class__1_Intent_2) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain_PERCEPTUAL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain_RELATIVE_COLORIMETRIC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain_SATURATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__1_Intent_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$class__1_Intent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$class__1_Intent_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$class__1_Intent_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$class__1_Intent_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_PIL$ImageCms$$$class__1_Intent_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__1_Intent_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
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


exception_lineno = 118;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__1_Intent_118, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
branch_no_4:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain_Intent;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_PIL$ImageCms$$$class__1_Intent_118;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_34 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_PIL$ImageCms$$$class__1_Intent_118);
locals_PIL$ImageCms$$$class__1_Intent_118 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__1_Intent_118);
locals_PIL$ImageCms$$$class__1_Intent_118 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
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
exception_lineno = 118;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Intent, tmp_assign_source_34);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
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
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_PIL$ImageCms$IntEnum(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntEnum);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_5);
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


exception_lineno = 125;

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
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_Direction;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 125;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_9;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 125;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 125;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_41;
}
branch_end_5:;
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_PIL$ImageCms$$$class__2_Direction_125 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_Direction;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_125;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
frame_frame_PIL$ImageCms$$$class__2_Direction_3 = MAKE_CLASS_FRAME(tstate, code_objects_637a3a58005e41b5976d3629568daa7e, module_PIL$ImageCms, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ImageCms$$$class__2_Direction_3, locals_PIL$ImageCms$$$class__2_Direction_125);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$class__2_Direction_3);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$class__2_Direction_3) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain_INPUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain_OUTPUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain_PROOF, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__2_Direction_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$class__2_Direction_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$class__2_Direction_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$class__2_Direction_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$class__2_Direction_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_PIL$ImageCms$$$class__2_Direction_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__2_Direction_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__2_Direction_125, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto try_except_handler_11;
}
branch_no_7:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_Direction;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_PIL$ImageCms$$$class__2_Direction_125;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

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
Py_DECREF(locals_PIL$ImageCms$$$class__2_Direction_125);
locals_PIL$ImageCms$$$class__2_Direction_125 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__2_Direction_125);
locals_PIL$ImageCms$$$class__2_Direction_125 = NULL;
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
exception_lineno = 125;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Direction, tmp_assign_source_42);
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
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_PIL$ImageCms$IntFlag(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IntFlag);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_8);
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


exception_lineno = 135;

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
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_Flags;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 135;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_12, tmp_default_value_3);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_12;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 135;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 135;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_49;
}
branch_end_8:;
{
PyObject *tmp_assign_source_50;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_PIL$ImageCms$$$class__3_Flags_135 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_65a751dfb6586c740bcfc8e3fbc11b24;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_Flags;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_135;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
frame_frame_PIL$ImageCms$$$class__3_Flags_4 = MAKE_CLASS_FRAME(tstate, code_objects_2a2e701182fc1d0af081553f1f7bd637, module_PIL$ImageCms, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ImageCms$$$class__3_Flags_4, locals_PIL$ImageCms$$$class__3_Flags_135);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$class__3_Flags_4);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$class__3_Flags_4) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NONE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NOCACHE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NOOPTIMIZE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_512;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NULLTRANSFORM, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_GAMUTCHECK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_16384;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_SOFTPROOFING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_8192;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_BLACKPOINTCOMPENSATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NOWHITEONWHITEFIXUP, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_1024;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_HIGHRESPRECALC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_2048;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_LOWRESPRECALC, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_USE_8BITS_DEVICELINK, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_GUESSDEVICECLASS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_KEEP_SEQUENCE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_FORCE_CLUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_CLUT_POST_LINEARIZATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_CLUT_PRE_LINEARIZATION, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_32768;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NONEGATIVES, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_hex_4000000;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_COPY_ALPHA, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_hex_1000000;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_NODEFAULTRESOURCEDEF, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_65536;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_1, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_131072;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_2, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_262144;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_4, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_524288;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_8, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_1048576;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_16, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_2097152;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_32, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_4194304;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_64, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_dictset_value = mod_consts.const_int_pos_8388608;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain__GRIDPOINTS_128, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_5 = PyObject_GetItem(locals_PIL$ImageCms$$$class__3_Flags_135, const_str_plain_staticmethod);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_435eaaf48a7febe20adb84aa24c58df2);

tmp_args_element_value_2 = MAKE_FUNCTION_PIL$ImageCms$$$function__1_GRIDPOINTS(tstate, tmp_annotations_1);

frame_frame_PIL$ImageCms$$$class__3_Flags_4->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain_GRIDPOINTS, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__3_Flags_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$class__3_Flags_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$class__3_Flags_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$class__3_Flags_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$class__3_Flags_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_PIL$ImageCms$$$class__3_Flags_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__3_Flags_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__3_Flags_135, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto try_except_handler_14;
}
branch_no_10:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_13 = mod_consts.const_str_plain_Flags;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_PIL$ImageCms$$$class__3_Flags_135;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

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
Py_DECREF(locals_PIL$ImageCms$$$class__3_Flags_135);
locals_PIL$ImageCms$$$class__3_Flags_135 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__3_Flags_135);
locals_PIL$ImageCms$$$class__3_Flags_135 = NULL;
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
exception_lineno = 135;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_Flags, tmp_assign_source_50);
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
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_4;
tmp_called_value_6 = module_var_accessor_PIL$ImageCms$reduce(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reduce);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

    goto frame_exception_exit_1;
}
tmp_expression_value_23 = module_var_accessor_PIL$ImageCms$operator(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_operator);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_or_);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_3);

exception_lineno = 194;

    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_FLAG, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_MATRIXINPUT;
tmp_dict_value_1 = const_int_pos_1;
tmp_assign_source_53 = _PyDict_NewPresized( 18 );
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_MATRIXOUTPUT;
tmp_dict_value_1 = mod_consts.const_int_pos_2;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_MATRIXONLY;
tmp_dict_value_1 = mod_consts.const_int_pos_3;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NOWHITEONWHITEFIXUP;
tmp_dict_value_1 = mod_consts.const_int_pos_4;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NOPRELINEARIZATION;
tmp_dict_value_1 = mod_consts.const_int_pos_16;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GUESSDEVICECLASS;
tmp_dict_value_1 = mod_consts.const_int_pos_32;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NOTCACHE;
tmp_dict_value_1 = mod_consts.const_int_pos_64;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NOTPRECALC;
tmp_dict_value_1 = mod_consts.const_int_pos_256;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NULLTRANSFORM;
tmp_dict_value_1 = mod_consts.const_int_pos_512;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_HIGHRESPRECALC;
tmp_dict_value_1 = mod_consts.const_int_pos_1024;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_LOWRESPRECALC;
tmp_dict_value_1 = mod_consts.const_int_pos_2048;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WHITEBLACKCOMPENSATION;
tmp_dict_value_1 = mod_consts.const_int_pos_8192;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_BLACKPOINTCOMPENSATION;
tmp_dict_value_1 = mod_consts.const_int_pos_8192;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GAMUTCHECK;
tmp_dict_value_1 = mod_consts.const_int_pos_4096;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SOFTPROOFING;
tmp_dict_value_1 = mod_consts.const_int_pos_16384;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PRESERVEBLACK;
tmp_dict_value_1 = mod_consts.const_int_pos_32768;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NODEFAULTRESOURCEDEF;
tmp_dict_value_1 = mod_consts.const_int_hex_1000000;
tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GRIDPOINTS;

tmp_dict_value_1 = MAKE_FUNCTION_PIL$ImageCms$$$function__2_lambda(tstate);

tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain__FLAGS, tmp_assign_source_53);
}
{
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_55;
}
// Tried code:
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ImageCmsProfile;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_229;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_bc0209e90cc3948bfc7db1b412d3d07b);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__3___init__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_2135d94ca27eb9b9337533c7d9716438);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__4___getattr__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__5_tobytes(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, mod_consts.const_str_plain_tobytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_filename_str_plain_profile_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_14;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
tmp_name_value_14 = mod_consts.const_str_plain_ImageCmsProfile;
tmp_bases_value_7 = const_tuple_empty;
tmp_dict_arg_value_4 = locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_14, tmp_bases_value_7, tmp_dict_arg_value_4);
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto try_except_handler_17;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_56 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229);
locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229);
locals_PIL$ImageCms$$$class__4_ImageCmsProfile_229 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 229;
goto try_except_handler_15;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsProfile, tmp_assign_source_56);
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_24;
tmp_expression_value_24 = module_var_accessor_PIL$ImageCms$Image(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_ImagePointHandler);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_58, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_6, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_61;
}
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_ImageCmsTransform;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 276;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_62;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_18;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 276;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 276;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_63;
}
branch_end_11:;
{
PyObject *tmp_assign_source_64;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_091dc64f3c9bd7d25729f579fec0b274;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_ImageCmsTransform;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_276;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5 = MAKE_CLASS_FRAME(tstate, code_objects_7eb224c0b6a045b01766c514874fb3a0, module_PIL$ImageCms, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5, locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5);
assert(Py_REFCNT(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_31;
PyObject *tmp_annotations_5;
tmp_expression_value_31 = PyObject_GetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_Intent);

if (tmp_expression_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_31 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_PERCEPTUAL);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_14);
tmp_expression_value_32 = PyObject_GetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_Intent);

if (tmp_expression_value_32 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_32 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_expression_value_32);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_14);
tmp_expression_value_33 = PyObject_GetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_Flags);

if (tmp_expression_value_33 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_33 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_expression_value_33);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_NONE);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_defaults_1, 3, tmp_tuple_element_14);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_defaults_1);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_3f758b8aff899a01503cde377c05532e);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__6___init__(tstate, tmp_defaults_1, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__7_point(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_point, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_7;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_3d4ad18ca192efbe2e73d370f11733c1);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__8_apply(tstate, tmp_defaults_2, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_2070848e24313d5331c03bd584ce8f2d);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageCms$$$function__9_apply_in_place(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain_apply_in_place, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_PIL$ImageCms$$$class__5_ImageCmsTransform_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_20;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_90ea9e0accd909f770a8192d85bb5087_tuple;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
branch_no_13:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_9;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_9;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_metaclass_value_9 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_ImageCmsTransform;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_5__bases;
tmp_dict_arg_value_5 = locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_9, tmp_dict_arg_value_5);
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_metaclass_value_9, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto try_except_handler_20;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_64 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276);
locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276);
locals_PIL$ImageCms$$$class__5_ImageCmsTransform_276 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 276;
goto try_except_handler_18;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageCmsTransform, tmp_assign_source_64);
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_9;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_8170b5d632419cfcf5553b3ce4e5a8fb);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_66 = MAKE_FUNCTION_PIL$ImageCms$$$function__10_get_display_profile(tstate, tmp_defaults_3, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_get_display_profile, tmp_assign_source_66);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_direct_call_arg1_5;
tmp_direct_call_arg1_5 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_67 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_18;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_condition_result_18 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_34 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_7, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_69 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_69;
}
{
bool tmp_condition_result_19;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_condition_result_19 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_PyCMSError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_PIL$ImageCms->m_frame.f_lineno = 363;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_70;
}
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_37 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_38;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_38, tmp_name_value_17, tmp_default_value_5);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_39;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_21;
}
frame_frame_PIL$ImageCms->m_frame.f_lineno = 363;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 363;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_15:;
goto branch_end_14;
branch_no_14:;
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_71;
}
branch_end_14:;
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_PIL$ImageCms$$$class__6_PyCMSError_363 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e94e7b791e32b740ac52a853621b0036;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_7c75fed552a19f6fb4481cb16296b69d;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_PyCMSError;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_363;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
tmp_cmp_expr_right_6 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_PIL$ImageCms$$$class__6_PyCMSError_363, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
branch_no_16:;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_metaclass_value_11;
PyObject *tmp_name_value_18;
PyObject *tmp_bases_value_11;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_class_decl_dict_value_6;
PyObject *tmp_metaclass_args_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_metaclass_value_11 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_18 = mod_consts.const_str_plain_PyCMSError;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_6__bases;
tmp_dict_arg_value_6 = locals_PIL$ImageCms$$$class__6_PyCMSError_363;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_decl_dict_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
tmp_metaclass_args_6 = MAKE_TUPLE3(tstate, tmp_name_value_18, tmp_bases_value_11, tmp_dict_arg_value_6);
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_metaclass_value_11, tmp_metaclass_args_6, tmp_class_decl_dict_value_6);
CHECK_OBJECT(tmp_metaclass_args_6);
Py_DECREF(tmp_metaclass_args_6);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto try_except_handler_23;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_72 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_PIL$ImageCms$$$class__6_PyCMSError_363);
locals_PIL$ImageCms$$$class__6_PyCMSError_363 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageCms$$$class__6_PyCMSError_363);
locals_PIL$ImageCms$$$class__6_PyCMSError_363 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 363;
goto try_except_handler_21;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_PyCMSError, tmp_assign_source_72);
}
goto try_end_11;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_40;
PyObject *tmp_annotations_10;
tmp_expression_value_40 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;

    goto frame_exception_exit_1;
}
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_PERCEPTUAL);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;

    goto frame_exception_exit_1;
}
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_41;
PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = Py_None;
PyTuple_SET_ITEM0(tmp_defaults_4, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = Py_False;
PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_17);
tmp_expression_value_41 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 377;

    goto tuple_build_exception_8;
}
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_NONE);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_defaults_4, 3, tmp_tuple_element_17);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_9c40e5a636af3da0ffef107204cab3ee);

tmp_assign_source_74 = MAKE_FUNCTION_PIL$ImageCms$$$function__11_profileToProfile(tstate, tmp_defaults_4, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_profileToProfile, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_edabf5ed72fa93a194e37e6f0906e618);

tmp_assign_source_75 = MAKE_FUNCTION_PIL$ImageCms$$$function__12_getOpenProfile(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getOpenProfile, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_defaults_5;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_42;
PyObject *tmp_annotations_12;
tmp_expression_value_42 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 495;

    goto frame_exception_exit_1;
}
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_PERCEPTUAL);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;

    goto frame_exception_exit_1;
}
tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_18);
tmp_expression_value_43 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 496;

    goto tuple_build_exception_9;
}
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_NONE);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 496;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_defaults_5, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_defaults_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_619cccaa7c0763ea90e8a550533b4d81);

tmp_assign_source_76 = MAKE_FUNCTION_PIL$ImageCms$$$function__13_buildTransform(tstate, tmp_defaults_5, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransform, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_defaults_6;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_44;
PyObject *tmp_annotations_13;
tmp_expression_value_44 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;

    goto frame_exception_exit_1;
}
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_PERCEPTUAL);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;

    goto frame_exception_exit_1;
}
tmp_defaults_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_45;
PyObject *tmp_expression_value_46;
PyTuple_SET_ITEM(tmp_defaults_6, 0, tmp_tuple_element_19);
tmp_expression_value_45 = module_var_accessor_PIL$ImageCms$Intent(tstate);
if (unlikely(tmp_expression_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Intent);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;

    goto tuple_build_exception_10;
}
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_ABSOLUTE_COLORIMETRIC);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_defaults_6, 1, tmp_tuple_element_19);
tmp_expression_value_46 = module_var_accessor_PIL$ImageCms$Flags(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Flags);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 581;

    goto tuple_build_exception_10;
}
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_SOFTPROOFING);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_defaults_6, 2, tmp_tuple_element_19);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_defaults_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_489a58b8a6e5f3b34b784a30e1649a38);

tmp_assign_source_77 = MAKE_FUNCTION_PIL$ImageCms$$$function__14_buildProofTransform(tstate, tmp_defaults_6, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransform, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = module_var_accessor_PIL$ImageCms$buildTransform(tstate);
if (unlikely(tmp_assign_source_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_buildTransform);
}

if (tmp_assign_source_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 686;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildTransformFromOpenProfiles, tmp_assign_source_78);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageCms, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageCms->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageCms, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageCms);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = module_var_accessor_PIL$ImageCms$buildProofTransform(tstate);
assert(!(tmp_assign_source_79 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_buildProofTransformFromOpenProfiles, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_14;
tmp_defaults_7 = mod_consts.const_tuple_false_tuple;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_70453ad734044c24451623df719538be);
Py_INCREF(tmp_defaults_7);

tmp_assign_source_80 = MAKE_FUNCTION_PIL$ImageCms$$$function__15_applyTransform(tstate, tmp_defaults_7, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_applyTransform, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_15;
tmp_defaults_8 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_ca744bdb3888d502cc17039133d6f19a);
Py_INCREF(tmp_defaults_8);

tmp_assign_source_81 = MAKE_FUNCTION_PIL$ImageCms$$$function__16_createProfile(tstate, tmp_defaults_8, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_createProfile, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_82 = MAKE_FUNCTION_PIL$ImageCms$$$function__17_getProfileName(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileName, tmp_assign_source_82);
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_83 = MAKE_FUNCTION_PIL$ImageCms$$$function__18_getProfileInfo(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileInfo, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_84 = MAKE_FUNCTION_PIL$ImageCms$$$function__19_getProfileCopyright(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileCopyright, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_85 = MAKE_FUNCTION_PIL$ImageCms$$$function__20_getProfileManufacturer(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileManufacturer, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_86 = MAKE_FUNCTION_PIL$ImageCms$$$function__21_getProfileModel(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileModel, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_0c14862c1cb1f65012b386d75f24dcfb);

tmp_assign_source_87 = MAKE_FUNCTION_PIL$ImageCms$$$function__22_getProfileDescription(tstate, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getProfileDescription, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_8e403060435a34554f48eea63baf70f6);

tmp_assign_source_88 = MAKE_FUNCTION_PIL$ImageCms$$$function__23_getDefaultIntent(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_getDefaultIntent, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_2bc6ca07b2bd67109527bdf2c3aa6fb8);

tmp_assign_source_89 = MAKE_FUNCTION_PIL$ImageCms$$$function__24_isIntentSupported(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_PIL$ImageCms, (Nuitka_StringObject *)mod_consts.const_str_plain_isIntentSupported, tmp_assign_source_89);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageCms", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageCms" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageCms);
    return module_PIL$ImageCms;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageCms, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageCms", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
