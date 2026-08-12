/* Generated code for Python module 'PIL$ImageMath'
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



/* The "module_PIL$ImageMath" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageMath;
PyDictObject *moduledict_PIL$ImageMath;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_im;
PyObject *const_str_plain__Operand;
PyObject *const_str_plain_mode;
PyObject *const_tuple_str_plain_1_str_plain_L_tuple;
PyObject *const_str_plain_convert;
PyObject *const_tuple_str_plain_I_tuple;
PyObject *const_tuple_str_plain_I_str_plain_F_tuple;
PyObject *const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7;
PyObject *const_tuple_type_int_type_float_tuple;
PyObject *const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_new;
PyObject *const_str_plain_I;
PyObject *const_str_plain_size;
PyObject *const_str_plain_F;
PyObject *const_str_plain__Operand__fixup;
PyObject *const_str_plain__imagingmath;
PyObject *const_str_digest_431727d0a0da6fe3383048dfac1ef740;
PyObject *const_str_chr_39;
PyObject *const_str_plain_unop;
PyObject *const_str_plain_getim;
PyObject *const_tuple_str_plain_F_tuple;
PyObject *const_str_plain_im_1;
PyObject *const_str_plain_im_2;
PyObject *const_str_plain_min;
PyObject *const_str_plain_crop;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_binop;
PyObject *const_str_plain_out;
PyObject *const_str_plain_getbbox;
PyObject *const_str_plain_apply;
PyObject *const_str_plain_abs;
PyObject *const_str_plain_neg;
PyObject *const_str_plain_add;
PyObject *const_str_plain_sub;
PyObject *const_str_plain_mul;
PyObject *const_str_plain_div;
PyObject *const_str_plain_mod;
PyObject *const_str_plain_pow;
PyObject *const_str_plain_invert;
PyObject *const_str_plain_and;
PyObject *const_str_plain_or;
PyObject *const_str_plain_xor;
PyObject *const_str_plain_lshift;
PyObject *const_str_plain_rshift;
PyObject *const_str_plain_eq;
PyObject *const_str_plain_ne;
PyObject *const_str_plain_lt;
PyObject *const_str_plain_le;
PyObject *const_str_plain_gt;
PyObject *const_str_plain_ge;
PyObject *const_tuple_str_plain_mode_tuple;
PyObject *const_str_plain_max;
PyObject *const_str_plain_ops;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_update;
PyObject *const_str_plain_items;
PyObject *const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528;
PyObject *const_str_plain___;
PyObject *const_str_digest_885cec5b45c0ed8e677959a50e77c586;
PyObject *const_str_angle_string;
PyObject *const_str_plain_eval;
PyObject *const_dict_27c801e9aaaf0d296fbe5e056b5207a1;
PyObject *const_str_plain_scan;
PyObject *const_str_digest_d9989714cfa0cdc7a4030ad99b316c07;
PyObject *const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a;
PyObject *const_str_plain_co_consts;
PyObject *const_str_plain_compiled_code;
PyObject *const_str_plain_co_names;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_builtins;
PyObject *const_tuple_str_plain_Image_str_plain__imagingmath_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06;
PyObject *const_str_digest_d4f69054ab748bd8325e331f45b2fc6c;
PyObject *const_int_pos_30;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_3e056183d504a567c0414c65e041c390;
PyObject *const_str_digest_d0c6649e7ffa978d7206b07359749d3b;
PyObject *const_dict_c258654a5e3b128a4e13c2eba31ed46c;
PyObject *const_str_plain___fixup;
PyObject *const_str_digest_a88da80759691cfa6fd91c334aabb236;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_303dd8c148367cad2f30287157a8008a;
PyObject *const_str_digest_39d3892d05e8bd876797d71f961bf7f6;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain___bool__;
PyObject *const_str_digest_ecc37ec48f79526a5f2c6e87710ed797;
PyObject *const_dict_9452993b5b4d620f3fb6e88f18e7b1c0;
PyObject *const_str_plain___abs__;
PyObject *const_str_digest_6c84c4cea282a25429ddfc95de36aa56;
PyObject *const_str_plain___pos__;
PyObject *const_str_digest_a46af9613795758d67c207fa1abbbe00;
PyObject *const_str_plain___neg__;
PyObject *const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7;
PyObject *const_dict_66e1cb7faaaff7ddd013f4cf556b7e20;
PyObject *const_str_plain___add__;
PyObject *const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3;
PyObject *const_str_plain___radd__;
PyObject *const_str_digest_85c95978ffc29e5ce81016cccf0b563b;
PyObject *const_str_plain___sub__;
PyObject *const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc;
PyObject *const_str_plain___rsub__;
PyObject *const_str_digest_260c92069cc12430f4a38ddf9f978bc3;
PyObject *const_str_plain___mul__;
PyObject *const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3;
PyObject *const_str_plain___rmul__;
PyObject *const_str_digest_c88454aec10b9f1637feea31dd661ebd;
PyObject *const_str_plain___truediv__;
PyObject *const_str_digest_cc5bc042c3c02ba78217cac55329f88e;
PyObject *const_str_plain___rtruediv__;
PyObject *const_str_digest_213d9b45910ae370436c079b83fd570f;
PyObject *const_str_plain___mod__;
PyObject *const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4;
PyObject *const_str_plain___rmod__;
PyObject *const_str_digest_0796f140e9873a02072c424e450669ec;
PyObject *const_str_plain___pow__;
PyObject *const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53;
PyObject *const_str_plain___rpow__;
PyObject *const_str_digest_12cb8c8c819dc27388e79a75ffaa9334;
PyObject *const_str_plain___invert__;
PyObject *const_str_digest_256728e5d9d549e303ccbf537542fbd8;
PyObject *const_str_plain___and__;
PyObject *const_str_digest_5eac02be304cd8f48063f17cfddd6c54;
PyObject *const_str_plain___rand__;
PyObject *const_str_digest_41b805bb10408e5918a0e65fcfe0d605;
PyObject *const_str_plain___or__;
PyObject *const_str_digest_98a0583932cf8b719d971c34052b8de4;
PyObject *const_str_plain___ror__;
PyObject *const_str_digest_b247e1940d3ec91e3c1658a5d0133742;
PyObject *const_str_plain___xor__;
PyObject *const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59;
PyObject *const_str_plain___rxor__;
PyObject *const_str_digest_7c4630ad0b4c750ec7058d31bfe63132;
PyObject *const_str_plain___lshift__;
PyObject *const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48;
PyObject *const_str_plain___rshift__;
PyObject *const_str_digest_c1945c390f83cb15be2d3199f045da05;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363;
PyObject *const_str_plain___ne__;
PyObject *const_str_digest_16f8430539740c64897df360d170a125;
PyObject *const_str_plain___lt__;
PyObject *const_str_digest_abfa8ada837a2d5054d1468ab2a8136b;
PyObject *const_str_plain___le__;
PyObject *const_str_digest_ca7a3f79e21158410e7669f195ce709a;
PyObject *const_str_plain___gt__;
PyObject *const_str_digest_f762807296e4e31d077b15ab03bf74ca;
PyObject *const_str_plain___ge__;
PyObject *const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027;
PyObject *const_tuple_str_plain_im_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_dict_110175d860e562c4c3c717cdf027b6f4;
PyObject *const_str_plain_imagemath_int;
PyObject *const_str_plain_imagemath_float;
PyObject *const_dict_5b10588a573438149692c302a98648ca;
PyObject *const_str_plain_imagemath_equal;
PyObject *const_str_plain_imagemath_notequal;
PyObject *const_str_plain_imagemath_min;
PyObject *const_str_plain_imagemath_max;
PyObject *const_dict_79dcef769faf7a303cc46167eda2df1b;
PyObject *const_str_plain_imagemath_convert;
PyObject *const_str_plain_float;
PyObject *const_str_plain_equal;
PyObject *const_str_plain_notequal;
PyObject *const_dict_c64c3916a5a0ddc5305019ce523bb19d;
PyObject *const_str_plain_lambda_eval;
PyObject *const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141;
PyObject *const_str_plain_unsafe_eval;
PyObject *const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18;
PyObject *const_str_digest_a9f08336eee0a57620213995b8d65de5;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple;
PyObject *const_tuple_str_plain_self_str_plain_im_tuple;
PyObject *const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple;
PyObject *const_tuple_str_plain_self_str_plain_mode_tuple;
PyObject *const_tuple_90597532a1abbb4687707433a820907a_tuple;
PyObject *const_tuple_2f91e821c0286245f95db5eda58cd537_tuple;
PyObject *const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple;
PyObject *const_tuple_275540abed203252870b9ce81d618ea5_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[183];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageMath"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 183) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 183 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageMath"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Operand", mod_consts.const_str_plain__Operand);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__Operand);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_I_tuple", mod_consts.const_tuple_str_plain_I_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_I_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_I_str_plain_F_tuple", mod_consts.const_tuple_str_plain_I_str_plain_F_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_I_str_plain_F_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7", mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_float_tuple", mod_consts.const_tuple_type_int_type_float_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_I", mod_consts.const_str_plain_I);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_I);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F", mod_consts.const_str_plain_F);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_F);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Operand__fixup", mod_consts.const_str_plain__Operand__fixup);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__Operand__fixup);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingmath", mod_consts.const_str_plain__imagingmath);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__imagingmath);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740", mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unop", mod_consts.const_str_plain_unop);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_unop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_getim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_F_tuple", mod_consts.const_tuple_str_plain_F_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_F_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_1", mod_consts.const_str_plain_im_1);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_2", mod_consts.const_str_plain_im_2);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_im_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_crop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binop", mod_consts.const_str_plain_binop);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_binop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_out);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getbbox", mod_consts.const_str_plain_getbbox);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_getbbox);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply", mod_consts.const_str_plain_apply);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abs", mod_consts.const_str_plain_abs);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_abs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_neg", mod_consts.const_str_plain_neg);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_neg);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_sub);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mul", mod_consts.const_str_plain_mul);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_mul);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_div", mod_consts.const_str_plain_div);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_div);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mod", mod_consts.const_str_plain_mod);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_mod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pow", mod_consts.const_str_plain_pow);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_invert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_and", mod_consts.const_str_plain_and);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_and);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_or", mod_consts.const_str_plain_or);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_or);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xor", mod_consts.const_str_plain_xor);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_xor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lshift", mod_consts.const_str_plain_lshift);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_lshift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rshift", mod_consts.const_str_plain_rshift);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_rshift);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_eq", mod_consts.const_str_plain_eq);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_eq);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ne", mod_consts.const_str_plain_ne);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ne);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lt", mod_consts.const_str_plain_lt);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_lt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_le", mod_consts.const_str_plain_le);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gt", mod_consts.const_str_plain_gt);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_gt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ge", mod_consts.const_str_plain_ge);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_ge);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_mode_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ops", mod_consts.const_str_plain_ops);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ops);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528", mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___", mod_consts.const_str_plain___);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586", mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_string", mod_consts.const_str_angle_string);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_angle_string);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_eval", mod_consts.const_str_plain_eval);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_eval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1", mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scan", mod_consts.const_str_plain_scan);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_scan);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07", mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a", mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_co_consts", mod_consts.const_str_plain_co_consts);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_consts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compiled_code", mod_consts.const_str_plain_compiled_code);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_compiled_code);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_co_names", mod_consts.const_str_plain_co_names);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_co_names);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtins", mod_consts.const_str_plain_builtins);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtins);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple", mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06", mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c", mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3e056183d504a567c0414c65e041c390", mod_consts.const_dict_3e056183d504a567c0414c65e041c390);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_3e056183d504a567c0414c65e041c390);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b", mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c", mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___fixup", mod_consts.const_str_plain___fixup);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain___fixup);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236", mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_303dd8c148367cad2f30287157a8008a", mod_consts.const_dict_303dd8c148367cad2f30287157a8008a);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_303dd8c148367cad2f30287157a8008a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6", mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___bool__", mod_consts.const_str_plain___bool__);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain___bool__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797", mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0", mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___abs__", mod_consts.const_str_plain___abs__);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain___abs__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56", mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___pos__", mod_consts.const_str_plain___pos__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___pos__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00", mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___neg__", mod_consts.const_str_plain___neg__);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain___neg__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7", mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20", mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___add__", mod_consts.const_str_plain___add__);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain___add__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3", mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___radd__", mod_consts.const_str_plain___radd__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___radd__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b", mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___sub__", mod_consts.const_str_plain___sub__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain___sub__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc", mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rsub__", mod_consts.const_str_plain___rsub__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___rsub__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3", mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mul__", mod_consts.const_str_plain___mul__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___mul__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3", mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rmul__", mod_consts.const_str_plain___rmul__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd", mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___truediv__", mod_consts.const_str_plain___truediv__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___truediv__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e", mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rtruediv__", mod_consts.const_str_plain___rtruediv__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___rtruediv__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f", mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mod__", mod_consts.const_str_plain___mod__);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___mod__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4", mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rmod__", mod_consts.const_str_plain___rmod__);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain___rmod__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec", mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___pow__", mod_consts.const_str_plain___pow__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain___pow__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53", mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rpow__", mod_consts.const_str_plain___rpow__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334", mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___invert__", mod_consts.const_str_plain___invert__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___invert__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8", mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___and__", mod_consts.const_str_plain___and__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___and__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54", mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rand__", mod_consts.const_str_plain___rand__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___rand__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605", mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___or__", mod_consts.const_str_plain___or__);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___or__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4", mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ror__", mod_consts.const_str_plain___ror__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___ror__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742", mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___xor__", mod_consts.const_str_plain___xor__);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___xor__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59", mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rxor__", mod_consts.const_str_plain___rxor__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132", mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___lshift__", mod_consts.const_str_plain___lshift__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___lshift__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48", mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rshift__", mod_consts.const_str_plain___rshift__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain___rshift__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05", mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363", mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ne__", mod_consts.const_str_plain___ne__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain___ne__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_16f8430539740c64897df360d170a125", mod_consts.const_str_digest_16f8430539740c64897df360d170a125);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_16f8430539740c64897df360d170a125);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___lt__", mod_consts.const_str_plain___lt__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___lt__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b", mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___le__", mod_consts.const_str_plain___le__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___le__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a", mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___gt__", mod_consts.const_str_plain___gt__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___gt__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca", mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ge__", mod_consts.const_str_plain___ge__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain___ge__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027", mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_tuple", mod_consts.const_tuple_str_plain_im_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4", mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_int", mod_consts.const_str_plain_imagemath_int);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_float", mod_consts.const_str_plain_imagemath_float);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_float);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5b10588a573438149692c302a98648ca", mod_consts.const_dict_5b10588a573438149692c302a98648ca);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_equal", mod_consts.const_str_plain_imagemath_equal);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_equal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_notequal", mod_consts.const_str_plain_imagemath_notequal);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_notequal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_min", mod_consts.const_str_plain_imagemath_min);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_max", mod_consts.const_str_plain_imagemath_max);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b", mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_convert", mod_consts.const_str_plain_imagemath_convert);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_convert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_float", mod_consts.const_str_plain_float);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_equal", mod_consts.const_str_plain_equal);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_equal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_notequal", mod_consts.const_str_plain_notequal);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_notequal);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d", mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lambda_eval", mod_consts.const_str_plain_lambda_eval);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_lambda_eval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141", mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unsafe_eval", mod_consts.const_str_plain_unsafe_eval);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_eval);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18", mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5", mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple", mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple", mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple", mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple", mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple", mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple);
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
void checkModuleConstants_PIL$ImageMath(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Operand", mod_consts.const_str_plain__Operand);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__Operand) && "mod_consts.const_str_plain__Operand");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_tuple) && "mod_consts.const_tuple_str_plain_1_str_plain_L_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert", mod_consts.const_str_plain_convert);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert) && "mod_consts.const_str_plain_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_I_tuple", mod_consts.const_tuple_str_plain_I_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_I_tuple) && "mod_consts.const_tuple_str_plain_I_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_I_str_plain_F_tuple", mod_consts.const_tuple_str_plain_I_str_plain_F_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_I_str_plain_F_tuple) && "mod_consts.const_tuple_str_plain_I_str_plain_F_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7", mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7) && "mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_int_type_float_tuple", mod_consts.const_tuple_type_int_type_float_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_type_int_type_float_tuple) && "mod_consts.const_tuple_type_int_type_float_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple) && "mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_I", mod_consts.const_str_plain_I);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_I) && "mod_consts.const_str_plain_I");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_F", mod_consts.const_str_plain_F);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_F) && "mod_consts.const_str_plain_F");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Operand__fixup", mod_consts.const_str_plain__Operand__fixup);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__Operand__fixup) && "mod_consts.const_str_plain__Operand__fixup");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingmath", mod_consts.const_str_plain__imagingmath);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__imagingmath) && "mod_consts.const_str_plain__imagingmath");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740", mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740) && "mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_chr_39) && "mod_consts.const_str_chr_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unop", mod_consts.const_str_plain_unop);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_unop) && "mod_consts.const_str_plain_unop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_getim) && "mod_consts.const_str_plain_getim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_F_tuple", mod_consts.const_tuple_str_plain_F_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_F_tuple) && "mod_consts.const_tuple_str_plain_F_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_1", mod_consts.const_str_plain_im_1);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_1) && "mod_consts.const_str_plain_im_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im_2", mod_consts.const_str_plain_im_2);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_im_2) && "mod_consts.const_str_plain_im_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_min) && "mod_consts.const_str_plain_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crop", mod_consts.const_str_plain_crop);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_crop) && "mod_consts.const_str_plain_crop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_int_0_tuple", mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple) && "mod_consts.const_tuple_int_0_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binop", mod_consts.const_str_plain_binop);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_binop) && "mod_consts.const_str_plain_binop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_out", mod_consts.const_str_plain_out);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_out) && "mod_consts.const_str_plain_out");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getbbox", mod_consts.const_str_plain_getbbox);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_getbbox) && "mod_consts.const_str_plain_getbbox");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply", mod_consts.const_str_plain_apply);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply) && "mod_consts.const_str_plain_apply");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abs", mod_consts.const_str_plain_abs);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_abs) && "mod_consts.const_str_plain_abs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_neg", mod_consts.const_str_plain_neg);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_neg) && "mod_consts.const_str_plain_neg");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sub", mod_consts.const_str_plain_sub);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_sub) && "mod_consts.const_str_plain_sub");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mul", mod_consts.const_str_plain_mul);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_mul) && "mod_consts.const_str_plain_mul");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_div", mod_consts.const_str_plain_div);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_div) && "mod_consts.const_str_plain_div");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mod", mod_consts.const_str_plain_mod);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_mod) && "mod_consts.const_str_plain_mod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pow", mod_consts.const_str_plain_pow);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow) && "mod_consts.const_str_plain_pow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invert", mod_consts.const_str_plain_invert);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_invert) && "mod_consts.const_str_plain_invert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_and", mod_consts.const_str_plain_and);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_and) && "mod_consts.const_str_plain_and");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_or", mod_consts.const_str_plain_or);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_or) && "mod_consts.const_str_plain_or");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_xor", mod_consts.const_str_plain_xor);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_xor) && "mod_consts.const_str_plain_xor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lshift", mod_consts.const_str_plain_lshift);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_lshift) && "mod_consts.const_str_plain_lshift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rshift", mod_consts.const_str_plain_rshift);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_rshift) && "mod_consts.const_str_plain_rshift");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_eq", mod_consts.const_str_plain_eq);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_eq) && "mod_consts.const_str_plain_eq");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ne", mod_consts.const_str_plain_ne);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ne) && "mod_consts.const_str_plain_ne");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lt", mod_consts.const_str_plain_lt);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_lt) && "mod_consts.const_str_plain_lt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_le", mod_consts.const_str_plain_le);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_le) && "mod_consts.const_str_plain_le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gt", mod_consts.const_str_plain_gt);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_gt) && "mod_consts.const_str_plain_gt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ge", mod_consts.const_str_plain_ge);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_ge) && "mod_consts.const_str_plain_ge");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_mode_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple) && "mod_consts.const_tuple_str_plain_mode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ops", mod_consts.const_str_plain_ops);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ops) && "mod_consts.const_str_plain_ops");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_copy", mod_consts.const_str_plain_copy);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy) && "mod_consts.const_str_plain_copy");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_update) && "mod_consts.const_str_plain_update");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528", mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528) && "mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___", mod_consts.const_str_plain___);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___) && "mod_consts.const_str_plain___");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586", mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586) && "mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_string", mod_consts.const_str_angle_string);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_angle_string) && "mod_consts.const_str_angle_string");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_eval", mod_consts.const_str_plain_eval);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_eval) && "mod_consts.const_str_plain_eval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1", mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1) && "mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scan", mod_consts.const_str_plain_scan);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_scan) && "mod_consts.const_str_plain_scan");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07", mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07) && "mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a", mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a) && "mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_co_consts", mod_consts.const_str_plain_co_consts);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_consts) && "mod_consts.const_str_plain_co_consts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compiled_code", mod_consts.const_str_plain_compiled_code);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_compiled_code) && "mod_consts.const_str_plain_compiled_code");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_co_names", mod_consts.const_str_plain_co_names);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_co_names) && "mod_consts.const_str_plain_co_names");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_builtins", mod_consts.const_str_plain_builtins);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtins) && "mod_consts.const_str_plain_builtins");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple", mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06", mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06) && "mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c", mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c) && "mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_30) && "mod_consts.const_int_pos_30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3e056183d504a567c0414c65e041c390", mod_consts.const_dict_3e056183d504a567c0414c65e041c390);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_3e056183d504a567c0414c65e041c390) && "mod_consts.const_dict_3e056183d504a567c0414c65e041c390");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b", mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b) && "mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c", mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c) && "mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___fixup", mod_consts.const_str_plain___fixup);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain___fixup) && "mod_consts.const_str_plain___fixup");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236", mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236) && "mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_303dd8c148367cad2f30287157a8008a", mod_consts.const_dict_303dd8c148367cad2f30287157a8008a);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_303dd8c148367cad2f30287157a8008a) && "mod_consts.const_dict_303dd8c148367cad2f30287157a8008a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6", mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6) && "mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___bool__", mod_consts.const_str_plain___bool__);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain___bool__) && "mod_consts.const_str_plain___bool__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797", mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797) && "mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0", mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0) && "mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___abs__", mod_consts.const_str_plain___abs__);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain___abs__) && "mod_consts.const_str_plain___abs__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56", mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56) && "mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___pos__", mod_consts.const_str_plain___pos__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___pos__) && "mod_consts.const_str_plain___pos__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00", mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00) && "mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___neg__", mod_consts.const_str_plain___neg__);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain___neg__) && "mod_consts.const_str_plain___neg__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7", mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7) && "mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20", mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20) && "mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___add__", mod_consts.const_str_plain___add__);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain___add__) && "mod_consts.const_str_plain___add__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3", mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3) && "mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___radd__", mod_consts.const_str_plain___radd__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___radd__) && "mod_consts.const_str_plain___radd__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b", mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b) && "mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___sub__", mod_consts.const_str_plain___sub__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain___sub__) && "mod_consts.const_str_plain___sub__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc", mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc) && "mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rsub__", mod_consts.const_str_plain___rsub__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___rsub__) && "mod_consts.const_str_plain___rsub__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3", mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3) && "mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mul__", mod_consts.const_str_plain___mul__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___mul__) && "mod_consts.const_str_plain___mul__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3", mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3) && "mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rmul__", mod_consts.const_str_plain___rmul__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmul__) && "mod_consts.const_str_plain___rmul__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd", mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd) && "mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___truediv__", mod_consts.const_str_plain___truediv__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___truediv__) && "mod_consts.const_str_plain___truediv__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e", mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e) && "mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rtruediv__", mod_consts.const_str_plain___rtruediv__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___rtruediv__) && "mod_consts.const_str_plain___rtruediv__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f", mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f) && "mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___mod__", mod_consts.const_str_plain___mod__);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___mod__) && "mod_consts.const_str_plain___mod__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4", mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4) && "mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rmod__", mod_consts.const_str_plain___rmod__);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain___rmod__) && "mod_consts.const_str_plain___rmod__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec", mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec) && "mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___pow__", mod_consts.const_str_plain___pow__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain___pow__) && "mod_consts.const_str_plain___pow__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53", mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53) && "mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rpow__", mod_consts.const_str_plain___rpow__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___rpow__) && "mod_consts.const_str_plain___rpow__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334", mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334) && "mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___invert__", mod_consts.const_str_plain___invert__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___invert__) && "mod_consts.const_str_plain___invert__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8", mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8) && "mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___and__", mod_consts.const_str_plain___and__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___and__) && "mod_consts.const_str_plain___and__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54", mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54) && "mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rand__", mod_consts.const_str_plain___rand__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___rand__) && "mod_consts.const_str_plain___rand__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605", mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605) && "mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___or__", mod_consts.const_str_plain___or__);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___or__) && "mod_consts.const_str_plain___or__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4", mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4) && "mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ror__", mod_consts.const_str_plain___ror__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___ror__) && "mod_consts.const_str_plain___ror__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742", mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742) && "mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___xor__", mod_consts.const_str_plain___xor__);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___xor__) && "mod_consts.const_str_plain___xor__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59", mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59) && "mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rxor__", mod_consts.const_str_plain___rxor__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___rxor__) && "mod_consts.const_str_plain___rxor__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132", mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132) && "mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___lshift__", mod_consts.const_str_plain___lshift__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___lshift__) && "mod_consts.const_str_plain___lshift__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48", mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48) && "mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___rshift__", mod_consts.const_str_plain___rshift__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain___rshift__) && "mod_consts.const_str_plain___rshift__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05", mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05) && "mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363", mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363) && "mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ne__", mod_consts.const_str_plain___ne__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain___ne__) && "mod_consts.const_str_plain___ne__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_16f8430539740c64897df360d170a125", mod_consts.const_str_digest_16f8430539740c64897df360d170a125);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_16f8430539740c64897df360d170a125) && "mod_consts.const_str_digest_16f8430539740c64897df360d170a125");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___lt__", mod_consts.const_str_plain___lt__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___lt__) && "mod_consts.const_str_plain___lt__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b", mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b) && "mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___le__", mod_consts.const_str_plain___le__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___le__) && "mod_consts.const_str_plain___le__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a", mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a) && "mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___gt__", mod_consts.const_str_plain___gt__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___gt__) && "mod_consts.const_str_plain___gt__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca", mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca) && "mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___ge__", mod_consts.const_str_plain___ge__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain___ge__) && "mod_consts.const_str_plain___ge__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027", mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027) && "mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_im_tuple", mod_consts.const_tuple_str_plain_im_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_im_tuple) && "mod_consts.const_tuple_str_plain_im_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4", mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4) && "mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_int", mod_consts.const_str_plain_imagemath_int);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_int) && "mod_consts.const_str_plain_imagemath_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_float", mod_consts.const_str_plain_imagemath_float);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_float) && "mod_consts.const_str_plain_imagemath_float");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5b10588a573438149692c302a98648ca", mod_consts.const_dict_5b10588a573438149692c302a98648ca);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca) && "mod_consts.const_dict_5b10588a573438149692c302a98648ca");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_equal", mod_consts.const_str_plain_imagemath_equal);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_equal) && "mod_consts.const_str_plain_imagemath_equal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_notequal", mod_consts.const_str_plain_imagemath_notequal);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_notequal) && "mod_consts.const_str_plain_imagemath_notequal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_min", mod_consts.const_str_plain_imagemath_min);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_min) && "mod_consts.const_str_plain_imagemath_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_max", mod_consts.const_str_plain_imagemath_max);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_max) && "mod_consts.const_str_plain_imagemath_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b", mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b) && "mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_imagemath_convert", mod_consts.const_str_plain_imagemath_convert);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_imagemath_convert) && "mod_consts.const_str_plain_imagemath_convert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_float", mod_consts.const_str_plain_float);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_float) && "mod_consts.const_str_plain_float");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_equal", mod_consts.const_str_plain_equal);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_equal) && "mod_consts.const_str_plain_equal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_notequal", mod_consts.const_str_plain_notequal);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_notequal) && "mod_consts.const_str_plain_notequal");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d", mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d) && "mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lambda_eval", mod_consts.const_str_plain_lambda_eval);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_lambda_eval) && "mod_consts.const_str_plain_lambda_eval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141", mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141) && "mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unsafe_eval", mod_consts.const_str_plain_unsafe_eval);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsafe_eval) && "mod_consts.const_str_plain_unsafe_eval");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18", mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18) && "mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5", mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5) && "mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_im_tuple", mod_consts.const_tuple_str_plain_self_str_plain_im_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_im_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple", mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple) && "mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple", mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple) && "mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple", mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple) && "mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple", mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple) && "mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple", mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple) && "mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_PIL$ImageMath$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$_Operand(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__Operand);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Operand);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Operand, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Operand);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Operand, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__Operand);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__Operand);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Operand);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$_imagingmath(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__imagingmath);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__imagingmath);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__imagingmath, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__imagingmath);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__imagingmath, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__imagingmath);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__imagingmath);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__imagingmath);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_convert(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_convert);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_convert);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_convert, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_convert);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_convert, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_convert);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_convert);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_convert);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_equal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_equal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_equal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_equal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_equal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_equal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_equal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_equal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_equal);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_float(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_float);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_float);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_float, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_float);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_float, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_float);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_float);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_float);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_int(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_int);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_max(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_max);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_max);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_max, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_max);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_max, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_max);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_max);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_max);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_min(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_min);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_min);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_min, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_min);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_min, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_min);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_min);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_min);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$imagemath_notequal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_notequal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_notequal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_notequal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_imagemath_notequal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_imagemath_notequal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_notequal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_notequal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_notequal);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageMath$ops(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageMath->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageMath->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_ops);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageMath->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ops);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ops, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ops);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ops, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_ops);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_ops);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ops);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dc9a1024faf0d4923f1191b0a3f20c82;
static PyCodeObject *code_objects_e16594791fa73c6a6d1733b42d0e84bb;
static PyCodeObject *code_objects_8d18f8160d8d2043d9b31d4422df908e;
static PyCodeObject *code_objects_8779ea8f303b2e6e528f44386f984622;
static PyCodeObject *code_objects_6838ddab919f4fa65baee1be1a96d193;
static PyCodeObject *code_objects_3883388cc0015cb1ec832410d923113b;
static PyCodeObject *code_objects_0c727dc29eb35c2246568225963a55f2;
static PyCodeObject *code_objects_7cf7127a2f05e7d4253e98e0cd657908;
static PyCodeObject *code_objects_ff52b8655be2752aff576b608c22b091;
static PyCodeObject *code_objects_08d45d938549ff8e6827d851a8204f83;
static PyCodeObject *code_objects_de89e2d28ff12dc765c7e54cf2e94b9c;
static PyCodeObject *code_objects_395d3e2f52511b2d43861a501af708df;
static PyCodeObject *code_objects_264d792ed211ecdbd8e747746f9d6751;
static PyCodeObject *code_objects_809aba6e24cf86e010a2e584c078276a;
static PyCodeObject *code_objects_b9c5839b1597af98911f561a942ae273;
static PyCodeObject *code_objects_55d7970cf09e912a22057d69a27e1bf6;
static PyCodeObject *code_objects_3359cd3835bca14c3ba4275dcac9898b;
static PyCodeObject *code_objects_f8fab1ed56a5b53e4116d5a421f9fd66;
static PyCodeObject *code_objects_10fad262f48fdfe8e5daa3e894633071;
static PyCodeObject *code_objects_3fe4542c7b014703a35d4bce8154d7e1;
static PyCodeObject *code_objects_6eff9d7f2050c5e5bf2b0e5455f13e6c;
static PyCodeObject *code_objects_0708a4394f8b1cfcdc059de34c480ccc;
static PyCodeObject *code_objects_ec0ef148f75bd439aa7b82016230ef10;
static PyCodeObject *code_objects_526e5df44bc241cc60c50f9d04eedcb3;
static PyCodeObject *code_objects_10916e6d0d5cc05480ca0f39343b258d;
static PyCodeObject *code_objects_73e0099f0d5eea5e21876dedac05f03e;
static PyCodeObject *code_objects_c98a7db471d293f904c95670956b3cf1;
static PyCodeObject *code_objects_033f6a906b0af48ee5277c68399999ed;
static PyCodeObject *code_objects_ba8a4241de9161c8a656a77b9f7ff376;
static PyCodeObject *code_objects_f219dd89b0e309d500b27d65d2e1b053;
static PyCodeObject *code_objects_dac5ba995e24ed39ba685a6e42d54cd7;
static PyCodeObject *code_objects_c0c748956b0b3381a00c21c736b44422;
static PyCodeObject *code_objects_40411d34e77cdcd95f05866f43e01202;
static PyCodeObject *code_objects_639f7d7fafc23c7225f5818bc9c316af;
static PyCodeObject *code_objects_2be99abcf677d0c51c54e9f7c32f14e1;
static PyCodeObject *code_objects_b9e4f6b3cbd70bf5e3de3e6defb2ea93;
static PyCodeObject *code_objects_605a602bcd72318789dc380819ef4665;
static PyCodeObject *code_objects_bf615acf3698088e489cf0e679ecfd10;
static PyCodeObject *code_objects_1d27c0c12339ac887fcbd47d4e1f1a6c;
static PyCodeObject *code_objects_9969bfd8cb82ac42b46dedee3c8e9e89;
static PyCodeObject *code_objects_5d3b297222e1c0ac1b36255ea811964a;
static PyCodeObject *code_objects_b4ac9d4f8ddd81e3c7d083ba5d23aaac;
static PyCodeObject *code_objects_cab285e422b4885e7a322c2a9561076d;
static PyCodeObject *code_objects_a2124fdfe23ab337d23834e09fa30f68;
static PyCodeObject *code_objects_9fe2e2cd7b26acc7cf218ddfb84c276f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f20d961ebf6e0b58ff8117c173a7fb18); CHECK_OBJECT(module_filename_obj);
code_objects_dc9a1024faf0d4923f1191b0a3f20c82 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5, mod_consts.const_str_digest_a9f08336eee0a57620213995b8d65de5, NULL, NULL, 0, 0, 0);
code_objects_e16594791fa73c6a6d1733b42d0e84bb = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___abs__, mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d18f8160d8d2043d9b31d4422df908e = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___add__, mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_8779ea8f303b2e6e528f44386f984622 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___and__, mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_6838ddab919f4fa65baee1be1a96d193 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___bool__, mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3883388cc0015cb1ec832410d923113b = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_0c727dc29eb35c2246568225963a55f2 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___fixup, mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236, mod_consts.const_tuple_str_plain_self_str_plain_im1_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_7cf7127a2f05e7d4253e98e0cd657908 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___ge__, mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_ff52b8655be2752aff576b608c22b091 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___gt__, mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_08d45d938549ff8e6827d851a8204f83 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b, mod_consts.const_tuple_str_plain_self_str_plain_im_tuple, NULL, 2, 0, 0);
code_objects_de89e2d28ff12dc765c7e54cf2e94b9c = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___invert__, mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_395d3e2f52511b2d43861a501af708df = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___le__, mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_264d792ed211ecdbd8e747746f9d6751 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___lshift__, mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_809aba6e24cf86e010a2e584c078276a = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___lt__, mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_b9c5839b1597af98911f561a942ae273 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___mod__, mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_55d7970cf09e912a22057d69a27e1bf6 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___mul__, mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_3359cd3835bca14c3ba4275dcac9898b = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___ne__, mod_consts.const_str_digest_16f8430539740c64897df360d170a125, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_f8fab1ed56a5b53e4116d5a421f9fd66 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___neg__, mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_10fad262f48fdfe8e5daa3e894633071 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___or__, mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_3fe4542c7b014703a35d4bce8154d7e1 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___pos__, mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6eff9d7f2050c5e5bf2b0e5455f13e6c = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___pow__, mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_0708a4394f8b1cfcdc059de34c480ccc = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___radd__, mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_ec0ef148f75bd439aa7b82016230ef10 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rand__, mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_526e5df44bc241cc60c50f9d04eedcb3 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rmod__, mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_10916e6d0d5cc05480ca0f39343b258d = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rmul__, mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_73e0099f0d5eea5e21876dedac05f03e = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___ror__, mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_c98a7db471d293f904c95670956b3cf1 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rpow__, mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_033f6a906b0af48ee5277c68399999ed = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rshift__, mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_ba8a4241de9161c8a656a77b9f7ff376 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rsub__, mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_f219dd89b0e309d500b27d65d2e1b053 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rtruediv__, mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_dac5ba995e24ed39ba685a6e42d54cd7 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rxor__, mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_c0c748956b0b3381a00c21c736b44422 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___sub__, mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_40411d34e77cdcd95f05866f43e01202 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___truediv__, mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_639f7d7fafc23c7225f5818bc9c316af = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___xor__, mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_2be99abcf677d0c51c54e9f7c32f14e1 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_apply, mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6, mod_consts.const_tuple_02f6835d7b8036f3dbd38d42a4723348_tuple, NULL, 5, 0, 0);
code_objects_b9e4f6b3cbd70bf5e3de3e6defb2ea93 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_convert, mod_consts.const_str_plain_imagemath_convert, mod_consts.const_tuple_str_plain_self_str_plain_mode_tuple, NULL, 2, 0, 0);
code_objects_605a602bcd72318789dc380819ef4665 = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_equal, mod_consts.const_str_plain_imagemath_equal, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_bf615acf3698088e489cf0e679ecfd10 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_float, mod_consts.const_str_plain_imagemath_float, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1d27c0c12339ac887fcbd47d4e1f1a6c = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_int, mod_consts.const_str_plain_imagemath_int, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_9969bfd8cb82ac42b46dedee3c8e9e89 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_max, mod_consts.const_str_plain_imagemath_max, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_5d3b297222e1c0ac1b36255ea811964a = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_min, mod_consts.const_str_plain_imagemath_min, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_b4ac9d4f8ddd81e3c7d083ba5d23aaac = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_imagemath_notequal, mod_consts.const_str_plain_imagemath_notequal, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_cab285e422b4885e7a322c2a9561076d = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_lambda_eval, mod_consts.const_str_plain_lambda_eval, mod_consts.const_tuple_90597532a1abbb4687707433a820907a_tuple, NULL, 1, 0, 0);
code_objects_a2124fdfe23ab337d23834e09fa30f68 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_scan, mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07, mod_consts.const_tuple_2f91e821c0286245f95db5eda58cd537_tuple, mod_consts.const_tuple_str_plain_args_str_plain_compiled_code_str_plain_scan_tuple, 1, 0, 0);
code_objects_9fe2e2cd7b26acc7cf218ddfb84c276f = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unsafe_eval, mod_consts.const_str_plain_unsafe_eval, mod_consts.const_tuple_275540abed203252870b9ce81d618ea5_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__10___sub__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__11___rsub__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__12___mul__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__13___rmul__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__14___truediv__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__15___rtruediv__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__16___mod__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__17___rmod__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__18___pow__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__19___rpow__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__20___invert__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__21___and__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__22___rand__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__23___or__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__24___ror__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__25___xor__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__26___rxor__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__27___lshift__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__28___rshift__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__29___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__2___fixup(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__30___ne__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__31___lt__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__32___le__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__33___gt__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__34___ge__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__35_imagemath_int(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__36_imagemath_float(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__37_imagemath_equal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__38_imagemath_notequal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__39_imagemath_min(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__3_apply(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__40_imagemath_max(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__41_imagemath_convert(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__42_lambda_eval(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__4___bool__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__5___abs__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__6___pos__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__7___neg__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__8___add__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__9___radd__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageMath$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_08d45d938549ff8e6827d851a8204f83, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__1___init__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__1___init__ = cache_frame_frame_PIL$ImageMath$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__1___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_im);
tmp_ass_attr_value_1 = par_im;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_im, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__1___init__,
    type_description_1,
    par_self,
    par_im
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__1___init__ == cache_frame_frame_PIL$ImageMath$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__1___init__);
    cache_frame_frame_PIL$ImageMath$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__1___init__);

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


static PyObject *impl_PIL$ImageMath$$$function__2___fixup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im1 = python_pars[1];
PyObject *var_msg = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__2___fixup;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__2___fixup = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__2___fixup)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__2___fixup);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__2___fixup == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__2___fixup = MAKE_FUNCTION_FRAME(tstate, code_objects_0c727dc29eb35c2246568225963a55f2, module_PIL$ImageMath, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__2___fixup->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__2___fixup = cache_frame_frame_PIL$ImageMath$$$function__2___fixup;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__2___fixup);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__2___fixup) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_im1);
tmp_isinstance_inst_1 = par_im1;
tmp_isinstance_cls_1 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_im1);
tmp_expression_value_2 = par_im1;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_im);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_1_str_plain_L_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_im1);
tmp_expression_value_3 = par_im1;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__2___fixup->m_frame.f_lineno = 41;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_I_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_im1);
tmp_expression_value_5 = par_im1;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_im);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_I_str_plain_F_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooo";
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
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_im1);
tmp_expression_value_6 = par_im1;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_im);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_fffbb2c1b79dbaffa77e4d60d6ebf9e7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_im1);
tmp_expression_value_8 = par_im1;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_im);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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


exception_lineno = 45;
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
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$ImageMath$$$function__2___fixup->m_frame.f_lineno = 46;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 46;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_im1);
tmp_isinstance_inst_2 = par_im1;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_int_type_float_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_im);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_I_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_3;
tmp_expression_value_11 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_I;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_im);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im1);
tmp_args_element_value_3 = par_im1;
frame_frame_PIL$ImageMath$$$function__2___fixup->m_frame.f_lineno = 50;
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


exception_lineno = 50;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_6;
tmp_expression_value_14 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_new);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_plain_F;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_im);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_size);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_im1);
tmp_args_element_value_6 = par_im1;
frame_frame_PIL$ImageMath$$$function__2___fixup->m_frame.f_lineno = 52;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_4:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__2___fixup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__2___fixup->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__2___fixup, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__2___fixup,
    type_description_1,
    par_self,
    par_im1,
    var_msg
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__2___fixup == cache_frame_frame_PIL$ImageMath$$$function__2___fixup) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__2___fixup);
    cache_frame_frame_PIL$ImageMath$$$function__2___fixup = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__2___fixup);

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
CHECK_OBJECT(par_im1);
Py_DECREF(par_im1);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_im1);
Py_DECREF(par_im1);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__3_apply(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_op = python_pars[1];
PyObject *par_im1 = python_pars[2];
PyObject *par_im2 = python_pars[3];
PyObject *par_mode = python_pars[4];
PyObject *var_im_1 = NULL;
PyObject *var_out = NULL;
PyObject *var_e = NULL;
PyObject *var_msg = NULL;
PyObject *var_im_2 = NULL;
PyObject *var_size = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__3_apply;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__3_apply = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__3_apply)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__3_apply);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__3_apply == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__3_apply = MAKE_FUNCTION_FRAME(tstate, code_objects_2be99abcf677d0c51c54e9f7c32f14e1, module_PIL$ImageMath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__3_apply->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__3_apply = cache_frame_frame_PIL$ImageMath$$$function__3_apply;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__3_apply);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__3_apply) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_im1);
tmp_args_element_value_1 = par_im1;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 61;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__Operand__fixup, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_1;
    var_im_1 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_im2);
tmp_cmp_expr_left_1 = par_im2;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_or_left_value_1 = par_mode;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_im_1);
tmp_expression_value_2 = var_im_1;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_args_element_value_2 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(var_im_1);
tmp_expression_value_3 = var_im_1;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = Py_None;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
tmp_expression_value_4 = module_var_accessor_PIL$ImageMath$_imagingmath(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__imagingmath);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_op);
tmp_format_value_1 = par_op;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_underscore;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_im_1);
tmp_expression_value_5 = var_im_1;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mode);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_name_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_name_value_1 == NULL));
tmp_assign_source_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, NULL);
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_op;
    assert(old != NULL);
    par_op = tmp_assign_source_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__3_apply, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__3_apply, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_4;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_op);
tmp_format_value_3 = par_op;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_5 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 69;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 69;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooo";
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
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 65;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageMath$$$function__3_apply->m_frame)) {
        frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
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
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_3;
tmp_expression_value_6 = module_var_accessor_PIL$ImageMath$_imagingmath(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__imagingmath);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_unop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_op);
tmp_args_element_value_5 = par_op;
CHECK_OBJECT(var_out);
tmp_called_instance_2 = var_out;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 70;
tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_im_1);
tmp_called_instance_3 = var_im_1;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 70;
tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 70;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
CHECK_OBJECT(par_im2);
tmp_args_element_value_8 = par_im2;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 73;
tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain__Operand__fixup, tmp_args_element_value_8);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_2;
    var_im_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_im_1);
tmp_expression_value_7 = var_im_1;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_im_2);
tmp_expression_value_8 = var_im_2;
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 74;
type_description_1 = "ooooooooooo";
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


exception_lineno = 74;
type_description_1 = "ooooooooooo";
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
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_im_1);
tmp_expression_value_9 = var_im_1;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_F;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_im_1);
tmp_called_instance_5 = var_im_1;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 77;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_F_tuple, 0)
);

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_1;
    assert(old != NULL);
    var_im_1 = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_im_2);
tmp_expression_value_10 = var_im_2;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_F;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_im_2);
tmp_called_instance_6 = var_im_2;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 79;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_F_tuple, 0)
);

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_2;
    assert(old != NULL);
    var_im_2 = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_no_5:;
branch_no_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = var_im_1;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_im_2 == NULL) {
Py_DECREF(tmp_cmp_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = var_im_2;
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

exception_lineno = 80;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_tuple_element_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_2;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_3 != NULL);
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = var_im_1;
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_size);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_im_2 == NULL) {
Py_DECREF(tmp_args_element_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = var_im_2;
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_size);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_0;
tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_9);

exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_3;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_3);
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_4 != NULL);
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}

tmp_expression_value_18 = var_im_1;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_size);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
tmp_subscript_value_3 = const_int_pos_1;
tmp_args_element_value_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 1);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
if (var_im_2 == NULL) {
Py_DECREF(tmp_args_element_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}

tmp_expression_value_20 = var_im_2;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_size);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
tmp_subscript_value_4 = const_int_pos_1;
tmp_args_element_value_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 1);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_assign_source_9, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_21;
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = var_im_1;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_size);
tmp_cmp_expr_right_7 = var_size;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_13;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = var_im_1;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_crop);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(var_size);
tmp_add_expr_right_1 = var_size;
tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
assert(!(tmp_args_element_value_13 == NULL));
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 87;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_1;
    var_im_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_23;
if (var_im_2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = var_im_2;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_size);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_size);
tmp_cmp_expr_right_8 = var_size;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_14;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
if (var_im_2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_24 = var_im_2;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_crop);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = mod_consts.const_tuple_int_0_int_0_tuple;
CHECK_OBJECT(var_size);
tmp_add_expr_right_2 = var_size;
tmp_args_element_value_14 = BINARY_OPERATION_ADD_OBJECT_TUPLE_TUPLE(tmp_add_expr_left_2, tmp_add_expr_right_2);
assert(!(tmp_args_element_value_14 == NULL));
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 89;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im_2;
    var_im_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
branch_no_8:;
branch_no_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_element_value_15;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_element_value_17;
tmp_expression_value_25 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_new);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_or_left_value_2 = par_mode;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (var_im_1 == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_26 = var_im_1;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_mode);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_15 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_args_element_value_15 = tmp_or_left_value_2;
or_end_2:;
if (var_im_1 == NULL) {
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_15);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_im_1;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_size);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_args_element_value_15);

exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = Py_None;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 90;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_name_value_2;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
tmp_expression_value_28 = module_var_accessor_PIL$ImageMath$_imagingmath(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__imagingmath);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_op);
tmp_format_value_4 = par_op;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_29;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_str_underscore;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_4);
if (var_im_1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_4;
}

tmp_expression_value_29 = var_im_1;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_mode);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_4;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_3);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_name_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_name_value_2 == NULL));
tmp_assign_source_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_2, NULL);
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = par_op;
    assert(old != NULL);
    par_op = tmp_assign_source_13;
    Py_DECREF(old);
}

}
goto try_end_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__3_apply, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__3_apply, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_14); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_14;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_digest_431727d0a0da6fe3383048dfac1ef740;
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_5);
CHECK_OBJECT(par_op);
tmp_format_value_6 = par_op;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_39;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_15 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_15 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_raise_cause_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 95;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_2 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 95;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "ooooooooooo";
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

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageMath$$$function__3_apply->m_frame)) {
        frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_6;
branch_end_9:;
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
try_end_2:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_instance_9;
tmp_expression_value_30 = module_var_accessor_PIL$ImageMath$_imagingmath(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__imagingmath);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_binop);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_op);
tmp_args_element_value_18 = par_op;
CHECK_OBJECT(var_out);
tmp_called_instance_7 = var_out;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 96;
tmp_args_element_value_19 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_im_1 == NULL) {
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_8 = var_im_1;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 96;
tmp_args_element_value_20 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_im_2 == NULL) {
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_im_2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_9 = var_im_2;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 96;
tmp_args_element_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_22;
tmp_called_value_9 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_out == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_22 = var_out;
frame_frame_PIL$ImageMath$$$function__3_apply->m_frame.f_lineno = 97;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_22);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__3_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__3_apply->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__3_apply, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__3_apply,
    type_description_1,
    par_self,
    par_op,
    par_im1,
    par_im2,
    par_mode,
    var_im_1,
    var_out,
    var_e,
    var_msg,
    var_im_2,
    var_size
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__3_apply == cache_frame_frame_PIL$ImageMath$$$function__3_apply) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__3_apply);
    cache_frame_frame_PIL$ImageMath$$$function__3_apply = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__3_apply);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_op);
par_op = NULL;
Py_XDECREF(var_im_1);
var_im_1 = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_im_2);
var_im_2 = NULL;
Py_XDECREF(var_size);
var_size = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_op);
par_op = NULL;
Py_XDECREF(var_im_1);
var_im_1 = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_im_2);
var_im_2 = NULL;
Py_XDECREF(var_size);
var_size = NULL;
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
CHECK_OBJECT(par_im1);
Py_DECREF(par_im1);
CHECK_OBJECT(par_im2);
Py_DECREF(par_im2);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_im1);
Py_DECREF(par_im1);
CHECK_OBJECT(par_im2);
Py_DECREF(par_im2);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__4___bool__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__4___bool__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__4___bool__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__4___bool__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__4___bool__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__4___bool__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__4___bool__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6838ddab919f4fa65baee1be1a96d193, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__4___bool__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__4___bool__ = cache_frame_frame_PIL$ImageMath$$$function__4___bool__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__4___bool__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__4___bool__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__4___bool__->m_frame.f_lineno = 102;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getbbox);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__4___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__4___bool__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__4___bool__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__4___bool__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__4___bool__ == cache_frame_frame_PIL$ImageMath$$$function__4___bool__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__4___bool__);
    cache_frame_frame_PIL$ImageMath$$$function__4___bool__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__4___bool__);

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


static PyObject *impl_PIL$ImageMath$$$function__5___abs__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__5___abs__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__5___abs__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__5___abs__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__5___abs__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__5___abs__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__5___abs__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e16594791fa73c6a6d1733b42d0e84bb, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__5___abs__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__5___abs__ = cache_frame_frame_PIL$ImageMath$$$function__5___abs__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__5___abs__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__5___abs__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_abs;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_PIL$ImageMath$$$function__5___abs__->m_frame.f_lineno = 105;
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


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__5___abs__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__5___abs__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__5___abs__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__5___abs__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__5___abs__ == cache_frame_frame_PIL$ImageMath$$$function__5___abs__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__5___abs__);
    cache_frame_frame_PIL$ImageMath$$$function__5___abs__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__5___abs__);

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


static PyObject *impl_PIL$ImageMath$$$function__6___pos__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_PIL$ImageMath$$$function__7___neg__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__7___neg__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__7___neg__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__7___neg__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__7___neg__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__7___neg__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__7___neg__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f8fab1ed56a5b53e4116d5a421f9fd66, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__7___neg__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__7___neg__ = cache_frame_frame_PIL$ImageMath$$$function__7___neg__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__7___neg__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__7___neg__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_neg;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_PIL$ImageMath$$$function__7___neg__->m_frame.f_lineno = 111;
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


exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__7___neg__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__7___neg__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__7___neg__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__7___neg__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__7___neg__ == cache_frame_frame_PIL$ImageMath$$$function__7___neg__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__7___neg__);
    cache_frame_frame_PIL$ImageMath$$$function__7___neg__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__7___neg__);

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


static PyObject *impl_PIL$ImageMath$$$function__8___add__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__8___add__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__8___add__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__8___add__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__8___add__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__8___add__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__8___add__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8d18f8160d8d2043d9b31d4422df908e, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__8___add__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__8___add__ = cache_frame_frame_PIL$ImageMath$$$function__8___add__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__8___add__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__8___add__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_add;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__8___add__->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__8___add__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__8___add__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__8___add__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__8___add__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__8___add__ == cache_frame_frame_PIL$ImageMath$$$function__8___add__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__8___add__);
    cache_frame_frame_PIL$ImageMath$$$function__8___add__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__8___add__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__9___radd__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__9___radd__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__9___radd__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__9___radd__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__9___radd__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__9___radd__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__9___radd__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0708a4394f8b1cfcdc059de34c480ccc, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__9___radd__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__9___radd__ = cache_frame_frame_PIL$ImageMath$$$function__9___radd__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__9___radd__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__9___radd__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_add;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__9___radd__->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__9___radd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__9___radd__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__9___radd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__9___radd__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__9___radd__ == cache_frame_frame_PIL$ImageMath$$$function__9___radd__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__9___radd__);
    cache_frame_frame_PIL$ImageMath$$$function__9___radd__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__9___radd__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__10___sub__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__10___sub__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__10___sub__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__10___sub__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__10___sub__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__10___sub__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__10___sub__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c0c748956b0b3381a00c21c736b44422, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__10___sub__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__10___sub__ = cache_frame_frame_PIL$ImageMath$$$function__10___sub__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__10___sub__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__10___sub__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_sub;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__10___sub__->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__10___sub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__10___sub__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__10___sub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__10___sub__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__10___sub__ == cache_frame_frame_PIL$ImageMath$$$function__10___sub__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__10___sub__);
    cache_frame_frame_PIL$ImageMath$$$function__10___sub__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__10___sub__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__11___rsub__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__11___rsub__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__11___rsub__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__11___rsub__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__11___rsub__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__11___rsub__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__11___rsub__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ba8a4241de9161c8a656a77b9f7ff376, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__11___rsub__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__11___rsub__ = cache_frame_frame_PIL$ImageMath$$$function__11___rsub__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__11___rsub__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__11___rsub__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_sub;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__11___rsub__->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__11___rsub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__11___rsub__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__11___rsub__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__11___rsub__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__11___rsub__ == cache_frame_frame_PIL$ImageMath$$$function__11___rsub__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__11___rsub__);
    cache_frame_frame_PIL$ImageMath$$$function__11___rsub__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__11___rsub__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__12___mul__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__12___mul__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__12___mul__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__12___mul__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__12___mul__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__12___mul__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__12___mul__ = MAKE_FUNCTION_FRAME(tstate, code_objects_55d7970cf09e912a22057d69a27e1bf6, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__12___mul__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__12___mul__ = cache_frame_frame_PIL$ImageMath$$$function__12___mul__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__12___mul__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__12___mul__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_mul;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__12___mul__->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__12___mul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__12___mul__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__12___mul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__12___mul__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__12___mul__ == cache_frame_frame_PIL$ImageMath$$$function__12___mul__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__12___mul__);
    cache_frame_frame_PIL$ImageMath$$$function__12___mul__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__12___mul__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__13___rmul__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__13___rmul__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__13___rmul__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__13___rmul__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__13___rmul__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__13___rmul__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__13___rmul__ = MAKE_FUNCTION_FRAME(tstate, code_objects_10916e6d0d5cc05480ca0f39343b258d, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__13___rmul__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__13___rmul__ = cache_frame_frame_PIL$ImageMath$$$function__13___rmul__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__13___rmul__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__13___rmul__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_mul;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__13___rmul__->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__13___rmul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__13___rmul__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__13___rmul__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__13___rmul__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__13___rmul__ == cache_frame_frame_PIL$ImageMath$$$function__13___rmul__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__13___rmul__);
    cache_frame_frame_PIL$ImageMath$$$function__13___rmul__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__13___rmul__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__14___truediv__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__14___truediv__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__14___truediv__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__14___truediv__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__14___truediv__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__14___truediv__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__14___truediv__ = MAKE_FUNCTION_FRAME(tstate, code_objects_40411d34e77cdcd95f05866f43e01202, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__14___truediv__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__14___truediv__ = cache_frame_frame_PIL$ImageMath$$$function__14___truediv__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__14___truediv__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__14___truediv__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_div;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__14___truediv__->m_frame.f_lineno = 133;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__14___truediv__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__14___truediv__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__14___truediv__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__14___truediv__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__14___truediv__ == cache_frame_frame_PIL$ImageMath$$$function__14___truediv__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__14___truediv__);
    cache_frame_frame_PIL$ImageMath$$$function__14___truediv__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__14___truediv__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__15___rtruediv__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__15___rtruediv__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f219dd89b0e309d500b27d65d2e1b053, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__15___rtruediv__ = cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__15___rtruediv__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__15___rtruediv__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_div;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__15___rtruediv__->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__15___rtruediv__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__15___rtruediv__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__15___rtruediv__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__15___rtruediv__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__15___rtruediv__ == cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__);
    cache_frame_frame_PIL$ImageMath$$$function__15___rtruediv__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__15___rtruediv__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__16___mod__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__16___mod__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__16___mod__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__16___mod__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__16___mod__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__16___mod__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__16___mod__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b9c5839b1597af98911f561a942ae273, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__16___mod__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__16___mod__ = cache_frame_frame_PIL$ImageMath$$$function__16___mod__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__16___mod__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__16___mod__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_mod;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__16___mod__->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__16___mod__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__16___mod__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__16___mod__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__16___mod__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__16___mod__ == cache_frame_frame_PIL$ImageMath$$$function__16___mod__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__16___mod__);
    cache_frame_frame_PIL$ImageMath$$$function__16___mod__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__16___mod__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__17___rmod__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__17___rmod__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__17___rmod__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__17___rmod__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__17___rmod__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__17___rmod__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__17___rmod__ = MAKE_FUNCTION_FRAME(tstate, code_objects_526e5df44bc241cc60c50f9d04eedcb3, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__17___rmod__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__17___rmod__ = cache_frame_frame_PIL$ImageMath$$$function__17___rmod__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__17___rmod__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__17___rmod__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_mod;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__17___rmod__->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__17___rmod__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__17___rmod__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__17___rmod__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__17___rmod__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__17___rmod__ == cache_frame_frame_PIL$ImageMath$$$function__17___rmod__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__17___rmod__);
    cache_frame_frame_PIL$ImageMath$$$function__17___rmod__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__17___rmod__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__18___pow__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__18___pow__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__18___pow__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__18___pow__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__18___pow__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__18___pow__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__18___pow__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6eff9d7f2050c5e5bf2b0e5455f13e6c, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__18___pow__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__18___pow__ = cache_frame_frame_PIL$ImageMath$$$function__18___pow__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__18___pow__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__18___pow__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_pow;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__18___pow__->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__18___pow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__18___pow__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__18___pow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__18___pow__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__18___pow__ == cache_frame_frame_PIL$ImageMath$$$function__18___pow__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__18___pow__);
    cache_frame_frame_PIL$ImageMath$$$function__18___pow__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__18___pow__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__19___rpow__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__19___rpow__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__19___rpow__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__19___rpow__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__19___rpow__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__19___rpow__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__19___rpow__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c98a7db471d293f904c95670956b3cf1, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__19___rpow__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__19___rpow__ = cache_frame_frame_PIL$ImageMath$$$function__19___rpow__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__19___rpow__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__19___rpow__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_pow;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__19___rpow__->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__19___rpow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__19___rpow__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__19___rpow__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__19___rpow__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__19___rpow__ == cache_frame_frame_PIL$ImageMath$$$function__19___rpow__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__19___rpow__);
    cache_frame_frame_PIL$ImageMath$$$function__19___rpow__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__19___rpow__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__20___invert__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__20___invert__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__20___invert__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__20___invert__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__20___invert__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__20___invert__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__20___invert__ = MAKE_FUNCTION_FRAME(tstate, code_objects_de89e2d28ff12dc765c7e54cf2e94b9c, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__20___invert__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__20___invert__ = cache_frame_frame_PIL$ImageMath$$$function__20___invert__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__20___invert__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__20___invert__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_invert;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
frame_frame_PIL$ImageMath$$$function__20___invert__->m_frame.f_lineno = 152;
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


exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__20___invert__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__20___invert__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__20___invert__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__20___invert__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__20___invert__ == cache_frame_frame_PIL$ImageMath$$$function__20___invert__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__20___invert__);
    cache_frame_frame_PIL$ImageMath$$$function__20___invert__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__20___invert__);

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


static PyObject *impl_PIL$ImageMath$$$function__21___and__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__21___and__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__21___and__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__21___and__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__21___and__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__21___and__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__21___and__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8779ea8f303b2e6e528f44386f984622, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__21___and__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__21___and__ = cache_frame_frame_PIL$ImageMath$$$function__21___and__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__21___and__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__21___and__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_and;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__21___and__->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__21___and__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__21___and__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__21___and__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__21___and__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__21___and__ == cache_frame_frame_PIL$ImageMath$$$function__21___and__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__21___and__);
    cache_frame_frame_PIL$ImageMath$$$function__21___and__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__21___and__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__22___rand__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__22___rand__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__22___rand__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__22___rand__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__22___rand__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__22___rand__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__22___rand__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec0ef148f75bd439aa7b82016230ef10, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__22___rand__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__22___rand__ = cache_frame_frame_PIL$ImageMath$$$function__22___rand__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__22___rand__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__22___rand__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_and;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__22___rand__->m_frame.f_lineno = 158;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__22___rand__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__22___rand__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__22___rand__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__22___rand__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__22___rand__ == cache_frame_frame_PIL$ImageMath$$$function__22___rand__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__22___rand__);
    cache_frame_frame_PIL$ImageMath$$$function__22___rand__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__22___rand__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__23___or__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__23___or__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__23___or__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__23___or__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__23___or__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__23___or__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__23___or__ = MAKE_FUNCTION_FRAME(tstate, code_objects_10fad262f48fdfe8e5daa3e894633071, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__23___or__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__23___or__ = cache_frame_frame_PIL$ImageMath$$$function__23___or__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__23___or__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__23___or__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_or;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__23___or__->m_frame.f_lineno = 161;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__23___or__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__23___or__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__23___or__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__23___or__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__23___or__ == cache_frame_frame_PIL$ImageMath$$$function__23___or__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__23___or__);
    cache_frame_frame_PIL$ImageMath$$$function__23___or__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__23___or__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__24___ror__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__24___ror__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__24___ror__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__24___ror__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__24___ror__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__24___ror__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__24___ror__ = MAKE_FUNCTION_FRAME(tstate, code_objects_73e0099f0d5eea5e21876dedac05f03e, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__24___ror__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__24___ror__ = cache_frame_frame_PIL$ImageMath$$$function__24___ror__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__24___ror__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__24___ror__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_or;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__24___ror__->m_frame.f_lineno = 164;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__24___ror__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__24___ror__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__24___ror__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__24___ror__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__24___ror__ == cache_frame_frame_PIL$ImageMath$$$function__24___ror__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__24___ror__);
    cache_frame_frame_PIL$ImageMath$$$function__24___ror__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__24___ror__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__25___xor__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__25___xor__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__25___xor__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__25___xor__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__25___xor__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__25___xor__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__25___xor__ = MAKE_FUNCTION_FRAME(tstate, code_objects_639f7d7fafc23c7225f5818bc9c316af, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__25___xor__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__25___xor__ = cache_frame_frame_PIL$ImageMath$$$function__25___xor__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__25___xor__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__25___xor__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_xor;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__25___xor__->m_frame.f_lineno = 167;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__25___xor__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__25___xor__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__25___xor__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__25___xor__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__25___xor__ == cache_frame_frame_PIL$ImageMath$$$function__25___xor__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__25___xor__);
    cache_frame_frame_PIL$ImageMath$$$function__25___xor__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__25___xor__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__26___rxor__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__26___rxor__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__26___rxor__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__26___rxor__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__26___rxor__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__26___rxor__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__26___rxor__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dac5ba995e24ed39ba685a6e42d54cd7, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__26___rxor__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__26___rxor__ = cache_frame_frame_PIL$ImageMath$$$function__26___rxor__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__26___rxor__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__26___rxor__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_xor;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
CHECK_OBJECT(par_self);
tmp_args_element_value_3 = par_self;
frame_frame_PIL$ImageMath$$$function__26___rxor__->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__26___rxor__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__26___rxor__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__26___rxor__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__26___rxor__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__26___rxor__ == cache_frame_frame_PIL$ImageMath$$$function__26___rxor__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__26___rxor__);
    cache_frame_frame_PIL$ImageMath$$$function__26___rxor__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__26___rxor__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__27___lshift__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__27___lshift__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__27___lshift__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__27___lshift__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__27___lshift__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__27___lshift__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__27___lshift__ = MAKE_FUNCTION_FRAME(tstate, code_objects_264d792ed211ecdbd8e747746f9d6751, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__27___lshift__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__27___lshift__ = cache_frame_frame_PIL$ImageMath$$$function__27___lshift__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__27___lshift__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__27___lshift__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_lshift;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__27___lshift__->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__27___lshift__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__27___lshift__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__27___lshift__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__27___lshift__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__27___lshift__ == cache_frame_frame_PIL$ImageMath$$$function__27___lshift__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__27___lshift__);
    cache_frame_frame_PIL$ImageMath$$$function__27___lshift__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__27___lshift__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__28___rshift__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__28___rshift__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__28___rshift__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__28___rshift__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__28___rshift__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__28___rshift__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__28___rshift__ = MAKE_FUNCTION_FRAME(tstate, code_objects_033f6a906b0af48ee5277c68399999ed, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__28___rshift__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__28___rshift__ = cache_frame_frame_PIL$ImageMath$$$function__28___rshift__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__28___rshift__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__28___rshift__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_rshift;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__28___rshift__->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__28___rshift__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__28___rshift__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__28___rshift__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__28___rshift__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__28___rshift__ == cache_frame_frame_PIL$ImageMath$$$function__28___rshift__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__28___rshift__);
    cache_frame_frame_PIL$ImageMath$$$function__28___rshift__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__28___rshift__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__29___eq__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__29___eq__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__29___eq__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__29___eq__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__29___eq__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__29___eq__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__29___eq__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3883388cc0015cb1ec832410d923113b, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__29___eq__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__29___eq__ = cache_frame_frame_PIL$ImageMath$$$function__29___eq__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__29___eq__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__29___eq__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_eq;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__29___eq__->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__29___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__29___eq__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__29___eq__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__29___eq__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__29___eq__ == cache_frame_frame_PIL$ImageMath$$$function__29___eq__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__29___eq__);
    cache_frame_frame_PIL$ImageMath$$$function__29___eq__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__29___eq__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__30___ne__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__30___ne__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__30___ne__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__30___ne__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__30___ne__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__30___ne__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__30___ne__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3359cd3835bca14c3ba4275dcac9898b, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__30___ne__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__30___ne__ = cache_frame_frame_PIL$ImageMath$$$function__30___ne__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__30___ne__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__30___ne__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_ne;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__30___ne__->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__30___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__30___ne__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__30___ne__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__30___ne__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__30___ne__ == cache_frame_frame_PIL$ImageMath$$$function__30___ne__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__30___ne__);
    cache_frame_frame_PIL$ImageMath$$$function__30___ne__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__30___ne__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__31___lt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__31___lt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__31___lt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__31___lt__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__31___lt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__31___lt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__31___lt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_809aba6e24cf86e010a2e584c078276a, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__31___lt__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__31___lt__ = cache_frame_frame_PIL$ImageMath$$$function__31___lt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__31___lt__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__31___lt__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_lt;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__31___lt__->m_frame.f_lineno = 186;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__31___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__31___lt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__31___lt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__31___lt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__31___lt__ == cache_frame_frame_PIL$ImageMath$$$function__31___lt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__31___lt__);
    cache_frame_frame_PIL$ImageMath$$$function__31___lt__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__31___lt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__32___le__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__32___le__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__32___le__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__32___le__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__32___le__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__32___le__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__32___le__ = MAKE_FUNCTION_FRAME(tstate, code_objects_395d3e2f52511b2d43861a501af708df, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__32___le__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__32___le__ = cache_frame_frame_PIL$ImageMath$$$function__32___le__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__32___le__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__32___le__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_le;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__32___le__->m_frame.f_lineno = 189;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__32___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__32___le__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__32___le__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__32___le__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__32___le__ == cache_frame_frame_PIL$ImageMath$$$function__32___le__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__32___le__);
    cache_frame_frame_PIL$ImageMath$$$function__32___le__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__32___le__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__33___gt__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__33___gt__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__33___gt__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__33___gt__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__33___gt__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__33___gt__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__33___gt__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ff52b8655be2752aff576b608c22b091, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__33___gt__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__33___gt__ = cache_frame_frame_PIL$ImageMath$$$function__33___gt__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__33___gt__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__33___gt__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_gt;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__33___gt__->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__33___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__33___gt__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__33___gt__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__33___gt__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__33___gt__ == cache_frame_frame_PIL$ImageMath$$$function__33___gt__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__33___gt__);
    cache_frame_frame_PIL$ImageMath$$$function__33___gt__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__33___gt__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__34___ge__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__34___ge__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__34___ge__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__34___ge__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__34___ge__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__34___ge__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__34___ge__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7cf7127a2f05e7d4253e98e0cd657908, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__34___ge__->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__34___ge__ = cache_frame_frame_PIL$ImageMath$$$function__34___ge__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__34___ge__);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__34___ge__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_ge;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__34___ge__->m_frame.f_lineno = 195;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__34___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__34___ge__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__34___ge__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__34___ge__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__34___ge__ == cache_frame_frame_PIL$ImageMath$$$function__34___ge__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__34___ge__);
    cache_frame_frame_PIL$ImageMath$$$function__34___ge__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__34___ge__);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__35_imagemath_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__35_imagemath_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int = MAKE_FUNCTION_FRAME(tstate, code_objects_1d27c0c12339ac887fcbd47d4e1f1a6c, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__35_imagemath_int = cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__35_imagemath_int);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__35_imagemath_int) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__35_imagemath_int->m_frame.f_lineno = 200;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_I_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__35_imagemath_int->m_frame.f_lineno = 200;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__35_imagemath_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__35_imagemath_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__35_imagemath_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__35_imagemath_int,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__35_imagemath_int == cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int);
    cache_frame_frame_PIL$ImageMath$$$function__35_imagemath_int = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__35_imagemath_int);

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


static PyObject *impl_PIL$ImageMath$$$function__36_imagemath_float(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__36_imagemath_float;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float = MAKE_FUNCTION_FRAME(tstate, code_objects_bf615acf3698088e489cf0e679ecfd10, module_PIL$ImageMath, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__36_imagemath_float = cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__36_imagemath_float);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__36_imagemath_float) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__36_imagemath_float->m_frame.f_lineno = 204;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_convert,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_F_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__36_imagemath_float->m_frame.f_lineno = 204;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__36_imagemath_float, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__36_imagemath_float->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__36_imagemath_float, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__36_imagemath_float,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__36_imagemath_float == cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float);
    cache_frame_frame_PIL$ImageMath$$$function__36_imagemath_float = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__36_imagemath_float);

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


static PyObject *impl_PIL$ImageMath$$$function__37_imagemath_equal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__37_imagemath_equal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal = MAKE_FUNCTION_FRAME(tstate, code_objects_605a602bcd72318789dc380819ef4665, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__37_imagemath_equal = cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__37_imagemath_equal);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__37_imagemath_equal) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_apply);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_eq;
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_1_1 = par_self;
CHECK_OBJECT(par_other);
tmp_kw_call_arg_value_2_1 = par_other;
frame_frame_PIL$ImageMath$$$function__37_imagemath_equal->m_frame.f_lineno = 209;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(
        tstate,
        tmp_called_value_1,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_I_tuple, 0),
        mod_consts.const_tuple_str_plain_mode_tuple
    );
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__37_imagemath_equal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__37_imagemath_equal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__37_imagemath_equal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__37_imagemath_equal,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__37_imagemath_equal == cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal);
    cache_frame_frame_PIL$ImageMath$$$function__37_imagemath_equal = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__37_imagemath_equal);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__38_imagemath_notequal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal = MAKE_FUNCTION_FRAME(tstate, code_objects_b4ac9d4f8ddd81e3c7d083ba5d23aaac, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal = cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_apply);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_ne;
CHECK_OBJECT(par_self);
tmp_kw_call_arg_value_1_1 = par_self;
CHECK_OBJECT(par_other);
tmp_kw_call_arg_value_2_1 = par_other;
frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal->m_frame.f_lineno = 213;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(
        tstate,
        tmp_called_value_1,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_I_tuple, 0),
        mod_consts.const_tuple_str_plain_mode_tuple
    );
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal == cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal);
    cache_frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__38_imagemath_notequal);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__39_imagemath_min(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__39_imagemath_min;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min = MAKE_FUNCTION_FRAME(tstate, code_objects_5d3b297222e1c0ac1b36255ea811964a, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__39_imagemath_min = cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__39_imagemath_min);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__39_imagemath_min) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_min;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__39_imagemath_min->m_frame.f_lineno = 217;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__39_imagemath_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__39_imagemath_min->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__39_imagemath_min, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__39_imagemath_min,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__39_imagemath_min == cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min);
    cache_frame_frame_PIL$ImageMath$$$function__39_imagemath_min = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__39_imagemath_min);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__40_imagemath_max(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__40_imagemath_max;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max = MAKE_FUNCTION_FRAME(tstate, code_objects_9969bfd8cb82ac42b46dedee3c8e9e89, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__40_imagemath_max = cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__40_imagemath_max);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__40_imagemath_max) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
tmp_args_element_value_1 = mod_consts.const_str_plain_max;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_3 = par_other;
frame_frame_PIL$ImageMath$$$function__40_imagemath_max->m_frame.f_lineno = 221;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_apply,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__40_imagemath_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__40_imagemath_max->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__40_imagemath_max, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__40_imagemath_max,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__40_imagemath_max == cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max);
    cache_frame_frame_PIL$ImageMath$$$function__40_imagemath_max = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__40_imagemath_max);

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
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__41_imagemath_convert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mode = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__41_imagemath_convert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert = MAKE_FUNCTION_FRAME(tstate, code_objects_b9e4f6b3cbd70bf5e3de3e6defb2ea93, module_PIL$ImageMath, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__41_imagemath_convert = cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__41_imagemath_convert);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__41_imagemath_convert) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 225;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_args_element_value_2 = par_mode;
frame_frame_PIL$ImageMath$$$function__41_imagemath_convert->m_frame.f_lineno = 225;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_convert, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__41_imagemath_convert->m_frame.f_lineno = 225;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__41_imagemath_convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__41_imagemath_convert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__41_imagemath_convert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__41_imagemath_convert,
    type_description_1,
    par_self,
    par_mode
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__41_imagemath_convert == cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert);
    cache_frame_frame_PIL$ImageMath$$$function__41_imagemath_convert = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__41_imagemath_convert);

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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__42_lambda_eval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_expression = python_pars[0];
PyObject *par_kw = python_pars[1];
PyObject *var_args = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_out = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__42_lambda_eval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval = MAKE_FUNCTION_FRAME(tstate, code_objects_cab285e422b4885e7a322c2a9561076d, module_PIL$ImageMath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__42_lambda_eval = cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__42_lambda_eval);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__42_lambda_eval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageMath$ops(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ops);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = 254;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_args;
    var_args = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_args);
tmp_expression_value_2 = var_args;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_args_element_value_1 = par_kw;
frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = 255;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_args);
tmp_expression_value_3 = var_args;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = 256;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooo";
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
type_description_1 = "oooooo";
exception_lineno = 256;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooo";
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



exception_lineno = 256;
type_description_1 = "oooooo";
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



exception_lineno = 256;
type_description_1 = "oooooo";
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



exception_lineno = 256;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_7;
    Py_INCREF(var_k);
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
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_v);
tmp_isinstance_inst_1 = var_v;
tmp_expression_value_4 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Image);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_called_value_4 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = 258;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (var_args == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_ass_subscribed_1 = var_args;
CHECK_OBJECT(var_k);
tmp_ass_subscript_1 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
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
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_expression);
tmp_called_value_5 = par_expression;
if (var_args == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = var_args;
frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = 260;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_out);
tmp_expression_value_5 = var_out;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_im);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__42_lambda_eval, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__42_lambda_eval, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_6;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 261;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame)) {
        frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_6;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__42_lambda_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__42_lambda_eval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__42_lambda_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__42_lambda_eval,
    type_description_1,
    par_expression,
    par_kw,
    var_args,
    var_k,
    var_v,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__42_lambda_eval == cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval);
    cache_frame_frame_PIL$ImageMath$$$function__42_lambda_eval = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__42_lambda_eval);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_out);
var_out = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_expression);
Py_DECREF(par_expression);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_expression);
Py_DECREF(par_expression);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__43_unsafe_eval(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_expression = python_pars[0];
PyObject *par_kw = python_pars[1];
struct Nuitka_CellObject *var_args = Nuitka_Cell_NewEmpty();
PyObject *var_k = NULL;
PyObject *var_msg = NULL;
PyObject *var_v = NULL;
struct Nuitka_CellObject *var_compiled_code = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_scan = Nuitka_Cell_NewEmpty();
PyObject *var_out = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__43_unsafe_eval;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval = MAKE_FUNCTION_FRAME(tstate, code_objects_9fe2e2cd7b26acc7cf218ddfb84c276f, module_PIL$ImageMath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval = cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__43_unsafe_eval);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageMath$ops(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ops);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 286;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_args);
    Nuitka_Cell_SET(var_args, tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_kw);
tmp_iter_arg_1 = par_kw;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oocooocco";
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
tmp_assign_source_3 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oocooocco";
exception_lineno = 287;
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
    PyObject *old = var_k;
    var_k = tmp_assign_source_4;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain___;
CHECK_OBJECT(var_k);
tmp_cmp_expr_right_1 = var_k;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oocooocco";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_2 = IMPORT_HARD_BUILTINS();
assert(!(tmp_expression_value_2 == NULL));
CHECK_OBJECT(var_k);
tmp_name_value_1 = var_k;
tmp_res = BUILTIN_HASATTR_BOOL(tstate, tmp_expression_value_2, tmp_name_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oocooocco";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_k);
tmp_format_value_1 = var_k;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oocooocco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 290;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oocooocco";
goto try_except_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oocooocco";
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_args));
tmp_expression_value_3 = Nuitka_Cell_GET(var_args);
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_args_element_value_1 = par_kw;
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 292;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(var_args));
tmp_expression_value_4 = Nuitka_Cell_GET(var_args);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 293;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oocooocco";
exception_lineno = 293;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oocooocco";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oocooocco";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oocooocco";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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



exception_lineno = 293;
type_description_1 = "oocooocco";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_11;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_12;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_v);
tmp_isinstance_inst_1 = var_v;
tmp_expression_value_5 = module_var_accessor_PIL$ImageMath$Image(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Image);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_called_value_4 = module_var_accessor_PIL$ImageMath$_Operand(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Operand);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_v);
tmp_args_element_value_2 = var_v;
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 295;
tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(var_args) == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}

tmp_ass_subscribed_1 = Nuitka_Cell_GET(var_args);
CHECK_OBJECT(var_k);
tmp_ass_subscript_1 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oocooocco";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
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
{
PyObject *tmp_assign_source_13;
PyObject *tmp_compile_source_1;
PyObject *tmp_compile_filename_1;
PyObject *tmp_compile_mode_1;
CHECK_OBJECT(par_expression);
tmp_compile_source_1 = par_expression;
tmp_compile_filename_1 = mod_consts.const_str_angle_string;
tmp_compile_mode_1 = mod_consts.const_str_plain_eval;
tmp_assign_source_13 = COMPILE_CODE(tstate, tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_compiled_code);
    Nuitka_Cell_SET(var_compiled_code, tmp_assign_source_13);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_27c801e9aaaf0d296fbe5e056b5207a1);
tmp_closure_1[0] = var_args;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_compiled_code;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = var_scan;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan(tstate, tmp_annotations_1, tmp_closure_1);

{
    PyObject *old = Nuitka_Cell_GET(var_scan);
    Nuitka_Cell_SET(var_scan, tmp_assign_source_14);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(var_scan));
tmp_called_value_5 = Nuitka_Cell_GET(var_scan);
CHECK_OBJECT(Nuitka_Cell_GET(var_compiled_code));
tmp_args_element_value_3 = Nuitka_Cell_GET(var_compiled_code);
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 309;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_6 = IMPORT_HARD_BUILTINS();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_eval);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_expression);
tmp_args_element_value_4 = par_expression;
tmp_args_element_value_5 = Py_None;
if (Nuitka_Cell_GET(var_args) == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 310;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(var_args);
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oocooocco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_out;
    var_out = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_out);
tmp_expression_value_7 = var_out;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_im);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oocooocco";
    goto try_except_handler_6;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__43_unsafe_eval, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_7;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 311;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame)) {
        frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oocooocco";
goto try_except_handler_7;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__43_unsafe_eval->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__43_unsafe_eval, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__43_unsafe_eval,
    type_description_1,
    par_expression,
    par_kw,
    var_args,
    var_k,
    var_msg,
    var_v,
    var_compiled_code,
    var_scan,
    var_out
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__43_unsafe_eval == cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval);
    cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_args);
CHECK_OBJECT(var_args);
Py_DECREF(var_args);
var_args = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
CHECK_OBJECT(var_compiled_code);
CHECK_OBJECT(var_compiled_code);
Py_DECREF(var_compiled_code);
var_compiled_code = NULL;
CHECK_OBJECT(var_scan);
CHECK_OBJECT(var_scan);
Py_DECREF(var_scan);
var_scan = NULL;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_args);
CHECK_OBJECT(var_args);
Py_DECREF(var_args);
var_args = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_v);
var_v = NULL;
CHECK_OBJECT(var_compiled_code);
CHECK_OBJECT(var_compiled_code);
Py_DECREF(var_compiled_code);
var_compiled_code = NULL;
CHECK_OBJECT(var_scan);
CHECK_OBJECT(var_scan);
Py_DECREF(var_scan);
var_scan = NULL;
Py_XDECREF(var_out);
var_out = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_expression);
Py_DECREF(par_expression);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_expression);
Py_DECREF(par_expression);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_code = python_pars[0];
PyObject *var_const = NULL;
PyObject *var_name = NULL;
PyObject *var_msg = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan = MAKE_FUNCTION_FRAME(tstate, code_objects_a2124fdfe23ab337d23834e09fa30f68, module_PIL$ImageMath, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan->m_type_description == NULL);
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan = cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan);
assert(Py_REFCNT(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_code);
tmp_expression_value_1 = par_code;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_co_consts);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooccc";
exception_lineno = 300;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_const;
    var_const = tmp_assign_source_3;
    Py_INCREF(var_const);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_type_arg_2;
CHECK_OBJECT(var_const);
tmp_type_arg_1 = var_const;
tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_1 == NULL));
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_compiled_code);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 301;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}

tmp_type_arg_2 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_cmp_expr_right_1 = BUILTIN_TYPE1(tmp_type_arg_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 301;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
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
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scan);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 302;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
CHECK_OBJECT(var_const);
tmp_args_element_value_1 = var_const;
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan->m_frame.f_lineno = 302;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooccc";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_code);
tmp_expression_value_2 = par_code;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_co_names);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooccc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooccc";
exception_lineno = 304;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_6 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_6;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_2 = var_name;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}

tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_name);
tmp_cmp_expr_left_3 = var_name;
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_abs;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}
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
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_name);
tmp_format_value_1 = var_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_885cec5b45c0ed8e677959a50e77c586;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_3;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_1 = var_msg;
frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan->m_frame.f_lineno = 307;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 307;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooccc";
goto try_except_handler_3;
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooccc";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan,
    type_description_1,
    par_code,
    var_const,
    var_name,
    var_msg,
    self->m_closure[1],
    self->m_closure[2],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan == cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan);
    cache_frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan = NULL;
}

assertFrameObject(frame_frame_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_const);
var_const = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_const);
var_const = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_code);
Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__10___sub__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__10___sub__,
        mod_consts.const_str_plain___sub__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_34cbaf59158da721e9fa05b02b5ce0cc,
#endif
        code_objects_c0c748956b0b3381a00c21c736b44422,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__11___rsub__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__11___rsub__,
        mod_consts.const_str_plain___rsub__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_260c92069cc12430f4a38ddf9f978bc3,
#endif
        code_objects_ba8a4241de9161c8a656a77b9f7ff376,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__12___mul__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__12___mul__,
        mod_consts.const_str_plain___mul__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7f5ca83ecf68aeefe66a065983cc30d3,
#endif
        code_objects_55d7970cf09e912a22057d69a27e1bf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__13___rmul__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__13___rmul__,
        mod_consts.const_str_plain___rmul__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c88454aec10b9f1637feea31dd661ebd,
#endif
        code_objects_10916e6d0d5cc05480ca0f39343b258d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__14___truediv__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__14___truediv__,
        mod_consts.const_str_plain___truediv__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cc5bc042c3c02ba78217cac55329f88e,
#endif
        code_objects_40411d34e77cdcd95f05866f43e01202,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__15___rtruediv__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__15___rtruediv__,
        mod_consts.const_str_plain___rtruediv__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_213d9b45910ae370436c079b83fd570f,
#endif
        code_objects_f219dd89b0e309d500b27d65d2e1b053,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__16___mod__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__16___mod__,
        mod_consts.const_str_plain___mod__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7c1bb25ba986ae52c12f13c604c81c4,
#endif
        code_objects_b9c5839b1597af98911f561a942ae273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__17___rmod__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__17___rmod__,
        mod_consts.const_str_plain___rmod__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0796f140e9873a02072c424e450669ec,
#endif
        code_objects_526e5df44bc241cc60c50f9d04eedcb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__18___pow__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__18___pow__,
        mod_consts.const_str_plain___pow__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_21f2296af02a1b8c8948a7b6ce80ad53,
#endif
        code_objects_6eff9d7f2050c5e5bf2b0e5455f13e6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__19___rpow__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__19___rpow__,
        mod_consts.const_str_plain___rpow__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12cb8c8c819dc27388e79a75ffaa9334,
#endif
        code_objects_c98a7db471d293f904c95670956b3cf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d0c6649e7ffa978d7206b07359749d3b,
#endif
        code_objects_08d45d938549ff8e6827d851a8204f83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__20___invert__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__20___invert__,
        mod_consts.const_str_plain___invert__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_256728e5d9d549e303ccbf537542fbd8,
#endif
        code_objects_de89e2d28ff12dc765c7e54cf2e94b9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__21___and__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__21___and__,
        mod_consts.const_str_plain___and__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5eac02be304cd8f48063f17cfddd6c54,
#endif
        code_objects_8779ea8f303b2e6e528f44386f984622,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__22___rand__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__22___rand__,
        mod_consts.const_str_plain___rand__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_41b805bb10408e5918a0e65fcfe0d605,
#endif
        code_objects_ec0ef148f75bd439aa7b82016230ef10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__23___or__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__23___or__,
        mod_consts.const_str_plain___or__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_98a0583932cf8b719d971c34052b8de4,
#endif
        code_objects_10fad262f48fdfe8e5daa3e894633071,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__24___ror__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__24___ror__,
        mod_consts.const_str_plain___ror__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b247e1940d3ec91e3c1658a5d0133742,
#endif
        code_objects_73e0099f0d5eea5e21876dedac05f03e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__25___xor__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__25___xor__,
        mod_consts.const_str_plain___xor__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a9b094fbee0a1e2e121648c5a4b64a59,
#endif
        code_objects_639f7d7fafc23c7225f5818bc9c316af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__26___rxor__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__26___rxor__,
        mod_consts.const_str_plain___rxor__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c4630ad0b4c750ec7058d31bfe63132,
#endif
        code_objects_dac5ba995e24ed39ba685a6e42d54cd7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__27___lshift__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__27___lshift__,
        mod_consts.const_str_plain___lshift__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7a9fdc9893f0131a0a8e91202c01ba48,
#endif
        code_objects_264d792ed211ecdbd8e747746f9d6751,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__28___rshift__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__28___rshift__,
        mod_consts.const_str_plain___rshift__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c1945c390f83cb15be2d3199f045da05,
#endif
        code_objects_033f6a906b0af48ee5277c68399999ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__29___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__29___eq__,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e3bd3c029c53f6ef29ba46c1fd4a0363,
#endif
        code_objects_3883388cc0015cb1ec832410d923113b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__2___fixup(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__2___fixup,
        mod_consts.const_str_plain___fixup,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a88da80759691cfa6fd91c334aabb236,
#endif
        code_objects_0c727dc29eb35c2246568225963a55f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__30___ne__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__30___ne__,
        mod_consts.const_str_plain___ne__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_16f8430539740c64897df360d170a125,
#endif
        code_objects_3359cd3835bca14c3ba4275dcac9898b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__31___lt__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__31___lt__,
        mod_consts.const_str_plain___lt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_abfa8ada837a2d5054d1468ab2a8136b,
#endif
        code_objects_809aba6e24cf86e010a2e584c078276a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__32___le__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__32___le__,
        mod_consts.const_str_plain___le__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca7a3f79e21158410e7669f195ce709a,
#endif
        code_objects_395d3e2f52511b2d43861a501af708df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__33___gt__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__33___gt__,
        mod_consts.const_str_plain___gt__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f762807296e4e31d077b15ab03bf74ca,
#endif
        code_objects_ff52b8655be2752aff576b608c22b091,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__34___ge__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__34___ge__,
        mod_consts.const_str_plain___ge__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f45c7c9c8fb7be490a0f3fb31d3db027,
#endif
        code_objects_7cf7127a2f05e7d4253e98e0cd657908,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__35_imagemath_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__35_imagemath_int,
        mod_consts.const_str_plain_imagemath_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1d27c0c12339ac887fcbd47d4e1f1a6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__36_imagemath_float(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__36_imagemath_float,
        mod_consts.const_str_plain_imagemath_float,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bf615acf3698088e489cf0e679ecfd10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__37_imagemath_equal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__37_imagemath_equal,
        mod_consts.const_str_plain_imagemath_equal,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_605a602bcd72318789dc380819ef4665,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__38_imagemath_notequal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__38_imagemath_notequal,
        mod_consts.const_str_plain_imagemath_notequal,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b4ac9d4f8ddd81e3c7d083ba5d23aaac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__39_imagemath_min(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__39_imagemath_min,
        mod_consts.const_str_plain_imagemath_min,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5d3b297222e1c0ac1b36255ea811964a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__3_apply(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__3_apply,
        mod_consts.const_str_plain_apply,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39d3892d05e8bd876797d71f961bf7f6,
#endif
        code_objects_2be99abcf677d0c51c54e9f7c32f14e1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__40_imagemath_max(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__40_imagemath_max,
        mod_consts.const_str_plain_imagemath_max,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9969bfd8cb82ac42b46dedee3c8e9e89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__41_imagemath_convert(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__41_imagemath_convert,
        mod_consts.const_str_plain_imagemath_convert,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b9e4f6b3cbd70bf5e3de3e6defb2ea93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__42_lambda_eval(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__42_lambda_eval,
        mod_consts.const_str_plain_lambda_eval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cab285e422b4885e7a322c2a9561076d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        mod_consts.const_str_digest_faadcb0e3482ced30bd8e0e1bdd43528,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__43_unsafe_eval,
        mod_consts.const_str_plain_unsafe_eval,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9fe2e2cd7b26acc7cf218ddfb84c276f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        mod_consts.const_str_digest_b67d132bc54e2abf8d8caed7c5ee8a9a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan,
        mod_consts.const_str_plain_scan,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9989714cfa0cdc7a4030ad99b316c07,
#endif
        code_objects_a2124fdfe23ab337d23834e09fa30f68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        closure,
        3
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__4___bool__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__4___bool__,
        mod_consts.const_str_plain___bool__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ecc37ec48f79526a5f2c6e87710ed797,
#endif
        code_objects_6838ddab919f4fa65baee1be1a96d193,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__5___abs__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__5___abs__,
        mod_consts.const_str_plain___abs__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6c84c4cea282a25429ddfc95de36aa56,
#endif
        code_objects_e16594791fa73c6a6d1733b42d0e84bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__6___pos__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__6___pos__,
        mod_consts.const_str_plain___pos__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a46af9613795758d67c207fa1abbbe00,
#endif
        code_objects_3fe4542c7b014703a35d4bce8154d7e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__7___neg__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__7___neg__,
        mod_consts.const_str_plain___neg__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6e9615a47f6c480b8fc28a8dde6a1a7,
#endif
        code_objects_f8fab1ed56a5b53e4116d5a421f9fd66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__8___add__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__8___add__,
        mod_consts.const_str_plain___add__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27dc4ed9b99ce4b60205c17b0b61b9b3,
#endif
        code_objects_8d18f8160d8d2043d9b31d4422df908e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageMath$$$function__9___radd__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageMath$$$function__9___radd__,
        mod_consts.const_str_plain___radd__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_85c95978ffc29e5ce81016cccf0b563b,
#endif
        code_objects_0708a4394f8b1cfcdc059de34c480ccc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageMath,
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

static function_impl_code const function_table_PIL$ImageMath[] = {
impl_PIL$ImageMath$$$function__43_unsafe_eval$$$function__1_scan,
impl_PIL$ImageMath$$$function__1___init__,
impl_PIL$ImageMath$$$function__2___fixup,
impl_PIL$ImageMath$$$function__3_apply,
impl_PIL$ImageMath$$$function__4___bool__,
impl_PIL$ImageMath$$$function__5___abs__,
impl_PIL$ImageMath$$$function__6___pos__,
impl_PIL$ImageMath$$$function__7___neg__,
impl_PIL$ImageMath$$$function__8___add__,
impl_PIL$ImageMath$$$function__9___radd__,
impl_PIL$ImageMath$$$function__10___sub__,
impl_PIL$ImageMath$$$function__11___rsub__,
impl_PIL$ImageMath$$$function__12___mul__,
impl_PIL$ImageMath$$$function__13___rmul__,
impl_PIL$ImageMath$$$function__14___truediv__,
impl_PIL$ImageMath$$$function__15___rtruediv__,
impl_PIL$ImageMath$$$function__16___mod__,
impl_PIL$ImageMath$$$function__17___rmod__,
impl_PIL$ImageMath$$$function__18___pow__,
impl_PIL$ImageMath$$$function__19___rpow__,
impl_PIL$ImageMath$$$function__20___invert__,
impl_PIL$ImageMath$$$function__21___and__,
impl_PIL$ImageMath$$$function__22___rand__,
impl_PIL$ImageMath$$$function__23___or__,
impl_PIL$ImageMath$$$function__24___ror__,
impl_PIL$ImageMath$$$function__25___xor__,
impl_PIL$ImageMath$$$function__26___rxor__,
impl_PIL$ImageMath$$$function__27___lshift__,
impl_PIL$ImageMath$$$function__28___rshift__,
impl_PIL$ImageMath$$$function__29___eq__,
impl_PIL$ImageMath$$$function__30___ne__,
impl_PIL$ImageMath$$$function__31___lt__,
impl_PIL$ImageMath$$$function__32___le__,
impl_PIL$ImageMath$$$function__33___gt__,
impl_PIL$ImageMath$$$function__34___ge__,
impl_PIL$ImageMath$$$function__35_imagemath_int,
impl_PIL$ImageMath$$$function__36_imagemath_float,
impl_PIL$ImageMath$$$function__37_imagemath_equal,
impl_PIL$ImageMath$$$function__38_imagemath_notequal,
impl_PIL$ImageMath$$$function__39_imagemath_min,
impl_PIL$ImageMath$$$function__40_imagemath_max,
impl_PIL$ImageMath$$$function__41_imagemath_convert,
impl_PIL$ImageMath$$$function__42_lambda_eval,
impl_PIL$ImageMath$$$function__43_unsafe_eval,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageMath);
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
        module_PIL$ImageMath,
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
        function_table_PIL$ImageMath,
        sizeof(function_table_PIL$ImageMath) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageMath";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageMath(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageMath");

    // Store the module for future use.
    module_PIL$ImageMath = module;

    moduledict_PIL$ImageMath = MODULE_DICT(module_PIL$ImageMath);

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
        PRINT_STRING("PIL$ImageMath: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageMath: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageMath: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageMath" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageMath\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageMath,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageMath,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageMath,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageMath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageMath,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageMath);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageMath);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageMath;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$ImageMath$$$class__1__Operand_30 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageMath = MAKE_MODULE_FRAME(code_objects_dc9a1024faf0d4923f1191b0a3f20c82, module_PIL$ImageMath);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageMath);
assert(Py_REFCNT(frame_frame_PIL$ImageMath) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageMath$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageMath$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_BUILTINS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_builtins, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageMath;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Image_str_plain__imagingmath_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageMath->m_frame.f_lineno = 21;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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
        (PyObject *)moduledict_PIL$ImageMath,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Image);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_8);
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
        (PyObject *)moduledict_PIL$ImageMath,
        mod_consts.const_str_plain__imagingmath,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__imagingmath);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__imagingmath, tmp_assign_source_9);
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
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ImageMath$$$class__1__Operand_30 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_c104a32fc2ee1f53f1d763628ce9dc06;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_d4f69054ab748bd8325e331f45b2fc6c;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__Operand;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3e056183d504a567c0414c65e041c390);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c258654a5e3b128a4e13c2eba31ed46c);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__2___fixup(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain__Operand__fixup, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_303dd8c148367cad2f30287157a8008a);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__3_apply(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain_apply, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__4___bool__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___bool__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__5___abs__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___abs__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__6___pos__(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___pos__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__7___neg__(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___neg__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__8___add__(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___add__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__9___radd__(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___radd__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__10___sub__(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___sub__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__11___rsub__(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rsub__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__12___mul__(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___mul__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__13___rmul__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rmul__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__14___truediv__(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___truediv__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__15___rtruediv__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rtruediv__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__16___mod__(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___mod__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__17___rmod__(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rmod__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__18___pow__(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___pow__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__19___rpow__(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rpow__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9452993b5b4d620f3fb6e88f18e7b1c0);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__20___invert__(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___invert__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__21___and__(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___and__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__22___rand__(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rand__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__23___or__(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___or__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__24___ror__(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___ror__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__25___xor__(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___xor__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__26___rxor__(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rxor__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__27___lshift__(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___lshift__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__28___rshift__(tstate, tmp_annotations_28);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___rshift__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__29___eq__(tstate, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__30___ne__(tstate, tmp_annotations_30);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___ne__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__31___lt__(tstate, tmp_annotations_31);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___lt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_32;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__32___le__(tstate, tmp_annotations_32);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___le__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_33;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__33___gt__(tstate, tmp_annotations_33);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___gt__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_34;
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_66e1cb7faaaff7ddd013f4cf556b7e20);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageMath$$$function__34___ge__(tstate, tmp_annotations_34);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___ge__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_im_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageMath$$$class__1__Operand_30, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_2;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_2 = mod_consts.const_str_plain__Operand;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_PIL$ImageMath$$$class__1__Operand_30;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_2, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_13 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_PIL$ImageMath$$$class__1__Operand_30);
locals_PIL$ImageMath$$$class__1__Operand_30 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageMath$$$class__1__Operand_30);
locals_PIL$ImageMath$$$class__1__Operand_30 = NULL;
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
exception_lineno = 30;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain__Operand, tmp_assign_source_13);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageMath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageMath->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageMath, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageMath);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_35;
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4);

tmp_assign_source_15 = MAKE_FUNCTION_PIL$ImageMath$$$function__35_imagemath_int(tstate, tmp_annotations_35);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_int, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_36;
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_110175d860e562c4c3c717cdf027b6f4);

tmp_assign_source_16 = MAKE_FUNCTION_PIL$ImageMath$$$function__36_imagemath_float(tstate, tmp_annotations_36);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_float, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_37;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca);

tmp_assign_source_17 = MAKE_FUNCTION_PIL$ImageMath$$$function__37_imagemath_equal(tstate, tmp_annotations_37);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_equal, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_38;
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca);

tmp_assign_source_18 = MAKE_FUNCTION_PIL$ImageMath$$$function__38_imagemath_notequal(tstate, tmp_annotations_38);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_notequal, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_39;
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$ImageMath$$$function__39_imagemath_min(tstate, tmp_annotations_39);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_min, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_40;
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_5b10588a573438149692c302a98648ca);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$ImageMath$$$function__40_imagemath_max(tstate, tmp_annotations_40);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_max, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_41;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_79dcef769faf7a303cc46167eda2df1b);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$ImageMath$$$function__41_imagemath_convert(tstate, tmp_annotations_41);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_imagemath_convert, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_int;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_int(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_22 = _PyDict_NewPresized( 7 );
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_float;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_float(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_equal;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_equal(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_notequal;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_notequal(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_min;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_min(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_max(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_convert;
tmp_dict_value_1 = module_var_accessor_PIL$ImageMath$imagemath_convert(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_ops, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_42;
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_c64c3916a5a0ddc5305019ce523bb19d);

tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageMath$$$function__42_lambda_eval(tstate, tmp_annotations_42);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_lambda_eval, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_43;
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_6f30a1f8d3cb6f94dfd022f4a46f2141);

tmp_assign_source_24 = MAKE_FUNCTION_PIL$ImageMath$$$function__43_unsafe_eval(tstate, tmp_annotations_43);

UPDATE_STRING_DICT1(moduledict_PIL$ImageMath, (Nuitka_StringObject *)mod_consts.const_str_plain_unsafe_eval, tmp_assign_source_24);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageMath", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageMath" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageMath);
    return module_PIL$ImageMath;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageMath, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageMath", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
