/* Generated code for Python module 'PIL$ImageColor'
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



/* The "module_PIL$ImageColor" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageColor;
PyDictObject *moduledict_PIL$ImageColor;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6;
PyObject *const_str_plain_colormap;
PyObject *const_str_plain_getrgb;
PyObject *const_str_plain_re;
PyObject *const_str_plain_match;
PyObject *const_str_digest_6ff38720cae99be6b1d7b1eebfcff638;
PyObject *const_int_pos_2;
PyObject *const_int_pos_16;
PyObject *const_int_pos_3;
PyObject *const_str_digest_68e629b4c3541e0c7f7281c7843b3df3;
PyObject *const_int_pos_4;
PyObject *const_str_digest_5df5c39c543feacbc20f40cf4218069c;
PyObject *const_slice_int_pos_1_int_pos_3_none;
PyObject *const_slice_int_pos_3_int_pos_5_none;
PyObject *const_slice_int_pos_5_int_pos_7_none;
PyObject *const_str_digest_d509d230187696cf7e1c8418728500f6;
PyObject *const_slice_int_pos_7_int_pos_9_none;
PyObject *const_str_digest_1fca22b5a766d033771be0b341a72bb9;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_str_digest_07b4b3aac91b53df4ee72e370e02a279;
PyObject *const_int_pos_255;
PyObject *const_float_100_0;
PyObject *const_float_0_5;
PyObject *const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6;
PyObject *const_str_plain_colorsys;
PyObject *const_tuple_str_plain_hls_to_rgb_tuple;
PyObject *const_str_plain_hls_to_rgb;
PyObject *const_float_360_0;
PyObject *const_str_digest_1974e9c9378e907aa10e501e8280c12f;
PyObject *const_tuple_str_plain_hsv_to_rgb_tuple;
PyObject *const_str_plain_hsv_to_rgb;
PyObject *const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3;
PyObject *const_tuple_int_pos_4_tuple;
PyObject *const_str_digest_9a5451d22760052766acd3f4a45c5ef6;
PyObject *const_str_digest_4eff680662e5a60bbced25d862ce5a02;
PyObject *const_slice_none_int_pos_3_none;
PyObject *const_str_plain_HSV;
PyObject *const_tuple_str_plain_rgb_to_hsv_tuple;
PyObject *const_str_plain_rgb_to_hsv;
PyObject *const_str_plain_rgb;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_getmodebase;
PyObject *const_str_plain_L;
PyObject *const_int_pos_19595;
PyObject *const_int_pos_38470;
PyObject *const_int_pos_7471;
PyObject *const_int_pos_32768;
PyObject *const_str_plain_A;
PyObject *const_str_digest_5ae34b475963f9a60b55c9187a98410f;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_lru_cache;
PyObject *const_tuple_str_plain_Image_tuple;
PyObject *const_dict_459af22d33228b676c0c558c76fd43df;
PyObject *const_dict_164fba4cbd3f46ded157eb004507d2f2;
PyObject *const_str_plain_getcolor;
PyObject *const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00;
PyObject *const_str_digest_0f53200345f4ccf9fb0a99bf99913f03;
PyObject *const_str_digest_ea45e79450b1f4e95de9423fc114c839;
PyObject *const_str_digest_34232f160b3f5a9ac4ccc214888716a8;
PyObject *const_tuple_066738031f51adfcab8e4793f13cb136_tuple;
PyObject *const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageColor"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 66) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 66 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageColor"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6", mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colormap", mod_consts.const_str_plain_colormap);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_colormap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getrgb", mod_consts.const_str_plain_getrgb);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_getrgb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638", mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3", mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c", mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_pos_3_none", mod_consts.const_slice_int_pos_1_int_pos_3_none);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_3_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_3_int_pos_5_none", mod_consts.const_slice_int_pos_3_int_pos_5_none);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_3_int_pos_5_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_5_int_pos_7_none", mod_consts.const_slice_int_pos_5_int_pos_7_none);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_5_int_pos_7_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6", mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_7_int_pos_9_none", mod_consts.const_slice_int_pos_7_int_pos_9_none);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_7_int_pos_9_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9", mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group", mod_consts.const_str_plain_group);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279", mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_100_0", mod_consts.const_float_100_0);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_float_100_0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6", mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colorsys", mod_consts.const_str_plain_colorsys);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_colorsys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hls_to_rgb_tuple", mod_consts.const_tuple_str_plain_hls_to_rgb_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hls_to_rgb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hls_to_rgb", mod_consts.const_str_plain_hls_to_rgb);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_hls_to_rgb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_360_0", mod_consts.const_float_360_0);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_float_360_0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f", mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple", mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hsv_to_rgb", mod_consts.const_str_plain_hsv_to_rgb);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_hsv_to_rgb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3", mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6", mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02", mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_3_none", mod_consts.const_slice_none_int_pos_3_none);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_3_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HSV", mod_consts.const_str_plain_HSV);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_HSV);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple", mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb_to_hsv", mod_consts.const_str_plain_rgb_to_hsv);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgb_to_hsv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb", mod_consts.const_str_plain_rgb);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_rgb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmodebase", mod_consts.const_str_plain_getmodebase);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmodebase);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_L);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19595", mod_consts.const_int_pos_19595);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_19595);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38470", mod_consts.const_int_pos_38470);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_38470);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7471", mod_consts.const_int_pos_7471);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_7471);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_32768);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_A", mod_consts.const_str_plain_A);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_A);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f", mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_459af22d33228b676c0c558c76fd43df", mod_consts.const_dict_459af22d33228b676c0c558c76fd43df);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_459af22d33228b676c0c558c76fd43df);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2", mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcolor", mod_consts.const_str_plain_getcolor);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_getcolor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00", mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03", mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839", mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8", mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple", mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple", mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple);
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
void checkModuleConstants_PIL$ImageColor(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6", mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6) && "mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colormap", mod_consts.const_str_plain_colormap);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_colormap) && "mod_consts.const_str_plain_colormap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getrgb", mod_consts.const_str_plain_getrgb);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_getrgb) && "mod_consts.const_str_plain_getrgb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638", mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638) && "mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_3", mod_consts.const_int_pos_3);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_3) && "mod_consts.const_int_pos_3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3", mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3) && "mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c", mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c) && "mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_pos_3_none", mod_consts.const_slice_int_pos_1_int_pos_3_none);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_3_none) && "mod_consts.const_slice_int_pos_1_int_pos_3_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_3_int_pos_5_none", mod_consts.const_slice_int_pos_3_int_pos_5_none);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_3_int_pos_5_none) && "mod_consts.const_slice_int_pos_3_int_pos_5_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_5_int_pos_7_none", mod_consts.const_slice_int_pos_5_int_pos_7_none);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_5_int_pos_7_none) && "mod_consts.const_slice_int_pos_5_int_pos_7_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6", mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6) && "mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_7_int_pos_9_none", mod_consts.const_slice_int_pos_7_int_pos_9_none);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_7_int_pos_9_none) && "mod_consts.const_slice_int_pos_7_int_pos_9_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9", mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9) && "mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group", mod_consts.const_str_plain_group);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_group) && "mod_consts.const_str_plain_group");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple) && "mod_consts.const_tuple_int_pos_3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279", mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279) && "mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_100_0", mod_consts.const_float_100_0);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_float_100_0) && "mod_consts.const_float_100_0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_float_0_5) && "mod_consts.const_float_0_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6", mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6) && "mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_colorsys", mod_consts.const_str_plain_colorsys);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_colorsys) && "mod_consts.const_str_plain_colorsys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hls_to_rgb_tuple", mod_consts.const_tuple_str_plain_hls_to_rgb_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hls_to_rgb_tuple) && "mod_consts.const_tuple_str_plain_hls_to_rgb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hls_to_rgb", mod_consts.const_str_plain_hls_to_rgb);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_hls_to_rgb) && "mod_consts.const_str_plain_hls_to_rgb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_360_0", mod_consts.const_float_360_0);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_float_360_0) && "mod_consts.const_float_360_0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f", mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f) && "mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple", mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple) && "mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hsv_to_rgb", mod_consts.const_str_plain_hsv_to_rgb);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_hsv_to_rgb) && "mod_consts.const_str_plain_hsv_to_rgb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3", mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3) && "mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_4_tuple", mod_consts.const_tuple_int_pos_4_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6", mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6) && "mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02", mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02) && "mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_3_none", mod_consts.const_slice_none_int_pos_3_none);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_3_none) && "mod_consts.const_slice_none_int_pos_3_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HSV", mod_consts.const_str_plain_HSV);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_HSV) && "mod_consts.const_str_plain_HSV");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple", mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple) && "mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb_to_hsv", mod_consts.const_str_plain_rgb_to_hsv);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgb_to_hsv) && "mod_consts.const_str_plain_rgb_to_hsv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rgb", mod_consts.const_str_plain_rgb);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_rgb) && "mod_consts.const_str_plain_rgb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmodebase", mod_consts.const_str_plain_getmodebase);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmodebase) && "mod_consts.const_str_plain_getmodebase");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_L", mod_consts.const_str_plain_L);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_L) && "mod_consts.const_str_plain_L");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_19595", mod_consts.const_int_pos_19595);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_19595) && "mod_consts.const_int_pos_19595");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38470", mod_consts.const_int_pos_38470);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_38470) && "mod_consts.const_int_pos_38470");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7471", mod_consts.const_int_pos_7471);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_7471) && "mod_consts.const_int_pos_7471");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32768", mod_consts.const_int_pos_32768);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_32768) && "mod_consts.const_int_pos_32768");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_A", mod_consts.const_str_plain_A);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_A) && "mod_consts.const_str_plain_A");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f", mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f) && "mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache) && "mod_consts.const_str_plain_lru_cache");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_tuple", mod_consts.const_tuple_str_plain_Image_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_tuple) && "mod_consts.const_tuple_str_plain_Image_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_459af22d33228b676c0c558c76fd43df", mod_consts.const_dict_459af22d33228b676c0c558c76fd43df);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_459af22d33228b676c0c558c76fd43df) && "mod_consts.const_dict_459af22d33228b676c0c558c76fd43df");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2", mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2) && "mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcolor", mod_consts.const_str_plain_getcolor);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_getcolor) && "mod_consts.const_str_plain_getcolor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00", mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00) && "mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03", mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03) && "mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839", mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839) && "mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8", mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8) && "mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple", mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple) && "mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple", mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple) && "mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_PIL$ImageColor$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$colormap(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_colormap);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_colormap);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_colormap, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_colormap);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_colormap, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_colormap);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_colormap);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_colormap);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$getrgb(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_getrgb);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getrgb);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getrgb, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getrgb);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getrgb, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_getrgb);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_getrgb);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getrgb);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageColor$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageColor->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageColor->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageColor->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_72e44ce5ae091cc2a76a66eeaa0741e3;
static PyCodeObject *code_objects_2a3f9e9775a608fab1bd7aa137e3db91;
static PyCodeObject *code_objects_c228bf99e6e9647fbf22f6463e176105;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ea45e79450b1f4e95de9423fc114c839); CHECK_OBJECT(module_filename_obj);
code_objects_72e44ce5ae091cc2a76a66eeaa0741e3 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8, mod_consts.const_str_digest_34232f160b3f5a9ac4ccc214888716a8, NULL, NULL, 0, 0, 0);
code_objects_2a3f9e9775a608fab1bd7aa137e3db91 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getcolor, mod_consts.const_str_plain_getcolor, mod_consts.const_tuple_066738031f51adfcab8e4793f13cb136_tuple, NULL, 2, 0, 0);
code_objects_c228bf99e6e9647fbf22f6463e176105 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getrgb, mod_consts.const_str_plain_getrgb, mod_consts.const_tuple_3f9fa5df65273f9f09bc8aa239f0126f_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function__1_getrgb(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function__2_getcolor(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageColor$$$function__1_getrgb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_color = python_pars[0];
PyObject *var_msg = NULL;
PyObject *var_rgb = NULL;
PyObject *var_rgb_tuple = NULL;
PyObject *var_m = NULL;
PyObject *var_hls_to_rgb = NULL;
PyObject *var_rgb_floats = NULL;
PyObject *var_hsv_to_rgb = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageColor$$$function__1_getrgb;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageColor$$$function__1_getrgb = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageColor$$$function__1_getrgb)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageColor$$$function__1_getrgb);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageColor$$$function__1_getrgb == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageColor$$$function__1_getrgb = MAKE_FUNCTION_FRAME(tstate, code_objects_c228bf99e6e9647fbf22f6463e176105, module_PIL$ImageColor, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageColor$$$function__1_getrgb->m_type_description == NULL);
frame_frame_PIL$ImageColor$$$function__1_getrgb = cache_frame_frame_PIL$ImageColor$$$function__1_getrgb;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageColor$$$function__1_getrgb);
assert(Py_REFCNT(frame_frame_PIL$ImageColor$$$function__1_getrgb) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_color);
tmp_len_arg_1 = par_color;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 100;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_5d6bc7e4130ff9ed5366d139ea917ae6;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 40;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 40;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_color);
tmp_expression_value_1 = par_color;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 41;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_color;
    assert(old != NULL);
    par_color = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_PIL$ImageColor$colormap(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_colormap);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_color);
tmp_args_element_value_1 = par_color;
tmp_args_element_value_2 = Py_None;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 43;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb;
    var_rgb = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_rgb);
tmp_truth_name_1 = CHECK_IF_TRUE(var_rgb);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooooooo";
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_rgb);
tmp_isinstance_inst_1 = var_rgb;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(var_rgb);
tmp_return_value = var_rgb;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_PIL$ImageColor$getrgb(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getrgb);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rgb);
tmp_args_element_value_3 = var_rgb;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 47;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_tuple;
    var_rgb_tuple = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_rgb_tuple);
tmp_len_arg_2 = var_rgb_tuple;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 3;
tmp_condition_result_4 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 48;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 48;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_rgb_tuple);
tmp_ass_subvalue_1 = var_rgb_tuple;
tmp_ass_subscribed_1 = module_var_accessor_PIL$ImageColor$colormap(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_colormap);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_color);
tmp_ass_subscript_1 = par_color;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_rgb_tuple);
tmp_return_value = var_rgb_tuple;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_2;
tmp_called_instance_1 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_str_digest_6ff38720cae99be6b1d7b1eebfcff638;
CHECK_OBJECT(par_color);
tmp_args_element_value_5 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 53;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 53;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_value_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_base_value_1;
CHECK_OBJECT(par_color);
tmp_expression_value_3 = par_color;
tmp_subscript_value_1 = const_int_pos_1;
tmp_mult_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_value_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_1 = mod_consts.const_int_pos_16;
tmp_tuple_element_1 = BUILTIN_INT2(tstate, tmp_value_value_1, tmp_base_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_value_value_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_base_value_2;
PyObject *tmp_value_value_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_base_value_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_color);
tmp_expression_value_4 = par_color;
tmp_subscript_value_2 = mod_consts.const_int_pos_2;
tmp_mult_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 2);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_mult_expr_right_2 = mod_consts.const_int_pos_2;
tmp_value_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_base_value_2 = mod_consts.const_int_pos_16;
tmp_tuple_element_1 = BUILTIN_INT2(tstate, tmp_value_value_2, tmp_base_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_color);
tmp_expression_value_5 = par_color;
tmp_subscript_value_3 = mod_consts.const_int_pos_3;
tmp_mult_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 3);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_mult_expr_right_3 = mod_consts.const_int_pos_2;
tmp_value_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
tmp_base_value_3 = mod_consts.const_int_pos_16;
tmp_tuple_element_1 = BUILTIN_INT2(tstate, tmp_value_value_3, tmp_base_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto frame_return_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
int tmp_truth_name_3;
tmp_called_instance_2 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_68e629b4c3541e0c7f7281c7843b3df3;
CHECK_OBJECT(par_color);
tmp_args_element_value_7 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 56;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 56;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_value_value_4;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_base_value_4;
CHECK_OBJECT(par_color);
tmp_expression_value_6 = par_color;
tmp_subscript_value_4 = const_int_pos_1;
tmp_mult_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 1);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_4 = mod_consts.const_int_pos_2;
tmp_value_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
if (tmp_value_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_4 = mod_consts.const_int_pos_16;
tmp_tuple_element_2 = BUILTIN_INT2(tstate, tmp_value_value_4, tmp_base_value_4);
CHECK_OBJECT(tmp_value_value_4);
Py_DECREF(tmp_value_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_value_value_5;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
PyObject *tmp_base_value_5;
PyObject *tmp_value_value_6;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
PyObject *tmp_base_value_6;
PyObject *tmp_value_value_7;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
PyObject *tmp_base_value_7;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_color);
tmp_expression_value_7 = par_color;
tmp_subscript_value_5 = mod_consts.const_int_pos_2;
tmp_mult_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_5, 2);
if (tmp_mult_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_mult_expr_right_5 = mod_consts.const_int_pos_2;
tmp_value_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_left_5);
Py_DECREF(tmp_mult_expr_left_5);
if (tmp_value_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_base_value_5 = mod_consts.const_int_pos_16;
tmp_tuple_element_2 = BUILTIN_INT2(tstate, tmp_value_value_5, tmp_base_value_5);
CHECK_OBJECT(tmp_value_value_5);
Py_DECREF(tmp_value_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_color);
tmp_expression_value_8 = par_color;
tmp_subscript_value_6 = mod_consts.const_int_pos_3;
tmp_mult_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_6, 3);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_mult_expr_right_6 = mod_consts.const_int_pos_2;
tmp_value_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_value_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_base_value_6 = mod_consts.const_int_pos_16;
tmp_tuple_element_2 = BUILTIN_INT2(tstate, tmp_value_value_6, tmp_base_value_6);
CHECK_OBJECT(tmp_value_value_6);
Py_DECREF(tmp_value_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_2);
CHECK_OBJECT(par_color);
tmp_expression_value_9 = par_color;
tmp_subscript_value_7 = mod_consts.const_int_pos_4;
tmp_mult_expr_left_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_7, 4);
if (tmp_mult_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_mult_expr_right_7 = mod_consts.const_int_pos_2;
tmp_value_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_left_7);
Py_DECREF(tmp_mult_expr_left_7);
if (tmp_value_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
tmp_base_value_7 = mod_consts.const_int_pos_16;
tmp_tuple_element_2 = BUILTIN_INT2(tstate, tmp_value_value_7, tmp_base_value_7);
CHECK_OBJECT(tmp_value_value_7);
Py_DECREF(tmp_value_value_7);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
goto frame_return_exit_1;
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
int tmp_truth_name_4;
tmp_called_instance_3 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = mod_consts.const_str_digest_5df5c39c543feacbc20f40cf4218069c;
CHECK_OBJECT(par_color);
tmp_args_element_value_9 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 64;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_value_value_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_8;
PyObject *tmp_base_value_8;
CHECK_OBJECT(par_color);
tmp_expression_value_10 = par_color;
tmp_subscript_value_8 = mod_consts.const_slice_int_pos_1_int_pos_3_none;
tmp_value_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
if (tmp_value_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_8 = mod_consts.const_int_pos_16;
tmp_tuple_element_3 = BUILTIN_INT2(tstate, tmp_value_value_8, tmp_base_value_8);
CHECK_OBJECT(tmp_value_value_8);
Py_DECREF(tmp_value_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_value_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_9;
PyObject *tmp_base_value_9;
PyObject *tmp_value_value_10;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_10;
PyObject *tmp_base_value_10;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_color);
tmp_expression_value_11 = par_color;
tmp_subscript_value_9 = mod_consts.const_slice_int_pos_3_int_pos_5_none;
tmp_value_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_9);
if (tmp_value_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_base_value_9 = mod_consts.const_int_pos_16;
tmp_tuple_element_3 = BUILTIN_INT2(tstate, tmp_value_value_9, tmp_base_value_9);
CHECK_OBJECT(tmp_value_value_9);
Py_DECREF(tmp_value_value_9);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_3);
CHECK_OBJECT(par_color);
tmp_expression_value_12 = par_color;
tmp_subscript_value_10 = mod_consts.const_slice_int_pos_5_int_pos_7_none;
tmp_value_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_10);
if (tmp_value_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
tmp_base_value_10 = mod_consts.const_int_pos_16;
tmp_tuple_element_3 = BUILTIN_INT2(tstate, tmp_value_value_10, tmp_base_value_10);
CHECK_OBJECT(tmp_value_value_10);
Py_DECREF(tmp_value_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
goto frame_return_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
int tmp_truth_name_5;
tmp_called_instance_4 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = mod_consts.const_str_digest_d509d230187696cf7e1c8418728500f6;
CHECK_OBJECT(par_color);
tmp_args_element_value_11 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 67;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_value_value_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_11;
PyObject *tmp_base_value_11;
CHECK_OBJECT(par_color);
tmp_expression_value_13 = par_color;
tmp_subscript_value_11 = mod_consts.const_slice_int_pos_1_int_pos_3_none;
tmp_value_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
if (tmp_value_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_base_value_11 = mod_consts.const_int_pos_16;
tmp_tuple_element_4 = BUILTIN_INT2(tstate, tmp_value_value_11, tmp_base_value_11);
CHECK_OBJECT(tmp_value_value_11);
Py_DECREF(tmp_value_value_11);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_value_value_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_12;
PyObject *tmp_base_value_12;
PyObject *tmp_value_value_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_13;
PyObject *tmp_base_value_13;
PyObject *tmp_value_value_14;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_14;
PyObject *tmp_base_value_14;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(par_color);
tmp_expression_value_14 = par_color;
tmp_subscript_value_12 = mod_consts.const_slice_int_pos_3_int_pos_5_none;
tmp_value_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_12);
if (tmp_value_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_base_value_12 = mod_consts.const_int_pos_16;
tmp_tuple_element_4 = BUILTIN_INT2(tstate, tmp_value_value_12, tmp_base_value_12);
CHECK_OBJECT(tmp_value_value_12);
Py_DECREF(tmp_value_value_12);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_4);
CHECK_OBJECT(par_color);
tmp_expression_value_15 = par_color;
tmp_subscript_value_13 = mod_consts.const_slice_int_pos_5_int_pos_7_none;
tmp_value_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_13);
if (tmp_value_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_base_value_13 = mod_consts.const_int_pos_16;
tmp_tuple_element_4 = BUILTIN_INT2(tstate, tmp_value_value_13, tmp_base_value_13);
CHECK_OBJECT(tmp_value_value_13);
Py_DECREF(tmp_value_value_13);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_4);
CHECK_OBJECT(par_color);
tmp_expression_value_16 = par_color;
tmp_subscript_value_14 = mod_consts.const_slice_int_pos_7_int_pos_9_none;
tmp_value_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_14);
if (tmp_value_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
tmp_base_value_14 = mod_consts.const_int_pos_16;
tmp_tuple_element_4 = BUILTIN_INT2(tstate, tmp_value_value_14, tmp_base_value_14);
CHECK_OBJECT(tmp_value_value_14);
Py_DECREF(tmp_value_value_14);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
goto frame_return_exit_1;
}
branch_no_8:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_instance_5 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = mod_consts.const_str_digest_1fca22b5a766d033771be0b341a72bb9;
CHECK_OBJECT(par_color);
tmp_args_element_value_13 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 75;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_m;
    var_m = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_6;
CHECK_OBJECT(var_m);
tmp_truth_name_6 = CHECK_IF_TRUE(var_m);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_tuple_element_5;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_m);
tmp_called_instance_6 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 77;
tmp_int_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_2;
PyObject *tmp_called_instance_7;
PyObject *tmp_int_arg_3;
PyObject *tmp_called_instance_8;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_5);
CHECK_OBJECT(var_m);
tmp_called_instance_7 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 77;
tmp_int_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_m);
tmp_called_instance_8 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 77;
tmp_int_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0)
);

if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
goto frame_return_exit_1;
}
branch_no_9:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_instance_9 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = mod_consts.const_str_digest_07b4b3aac91b53df4ee72e370e02a279;
CHECK_OBJECT(par_color);
tmp_args_element_value_15 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 79;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_9,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_m;
    assert(old != NULL);
    var_m = tmp_assign_source_5;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_7;
CHECK_OBJECT(var_m);
tmp_truth_name_7 = CHECK_IF_TRUE(var_m);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_tuple_element_6;
PyObject *tmp_int_arg_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_mult_expr_left_8;
PyObject *tmp_mult_expr_right_8;
PyObject *tmp_int_arg_5;
PyObject *tmp_called_instance_10;
CHECK_OBJECT(var_m);
tmp_called_instance_10 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 82;
tmp_int_arg_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_int_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_8 = PyNumber_Int(tmp_int_arg_5);
CHECK_OBJECT(tmp_int_arg_5);
Py_DECREF(tmp_int_arg_5);
if (tmp_mult_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_8 = mod_consts.const_int_pos_255;
tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
CHECK_OBJECT(tmp_mult_expr_left_8);
Py_DECREF(tmp_mult_expr_left_8);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_float_100_0;
tmp_add_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_float_0_5;
tmp_int_arg_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_int_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_6 = PyNumber_Int(tmp_int_arg_4);
CHECK_OBJECT(tmp_int_arg_4);
Py_DECREF(tmp_int_arg_4);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_6;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_mult_expr_left_9;
PyObject *tmp_mult_expr_right_9;
PyObject *tmp_int_arg_7;
PyObject *tmp_called_instance_11;
PyObject *tmp_int_arg_8;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
PyObject *tmp_mult_expr_left_10;
PyObject *tmp_mult_expr_right_10;
PyObject *tmp_int_arg_9;
PyObject *tmp_called_instance_12;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_6);
CHECK_OBJECT(var_m);
tmp_called_instance_11 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 83;
tmp_int_arg_7 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_11,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_int_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_mult_expr_left_9 = PyNumber_Int(tmp_int_arg_7);
CHECK_OBJECT(tmp_int_arg_7);
Py_DECREF(tmp_int_arg_7);
if (tmp_mult_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_mult_expr_right_9 = mod_consts.const_int_pos_255;
tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
CHECK_OBJECT(tmp_mult_expr_left_9);
Py_DECREF(tmp_mult_expr_left_9);
if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_truediv_expr_right_2 = mod_consts.const_float_100_0;
tmp_add_expr_left_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
CHECK_OBJECT(tmp_truediv_expr_left_2);
Py_DECREF(tmp_truediv_expr_left_2);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_add_expr_right_2 = mod_consts.const_float_0_5;
tmp_int_arg_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_int_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_tuple_element_6 = PyNumber_Int(tmp_int_arg_6);
CHECK_OBJECT(tmp_int_arg_6);
Py_DECREF(tmp_int_arg_6);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_6);
CHECK_OBJECT(var_m);
tmp_called_instance_12 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 84;
tmp_int_arg_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_12,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0)
);

if (tmp_int_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_mult_expr_left_10 = PyNumber_Int(tmp_int_arg_9);
CHECK_OBJECT(tmp_int_arg_9);
Py_DECREF(tmp_int_arg_9);
if (tmp_mult_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_mult_expr_right_10 = mod_consts.const_int_pos_255;
tmp_truediv_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
CHECK_OBJECT(tmp_mult_expr_left_10);
Py_DECREF(tmp_mult_expr_left_10);
if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_truediv_expr_right_3 = mod_consts.const_float_100_0;
tmp_add_expr_left_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
CHECK_OBJECT(tmp_truediv_expr_left_3);
Py_DECREF(tmp_truediv_expr_left_3);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_add_expr_right_3 = mod_consts.const_float_0_5;
tmp_int_arg_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_int_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
tmp_tuple_element_6 = PyNumber_Int(tmp_int_arg_8);
CHECK_OBJECT(tmp_int_arg_8);
Py_DECREF(tmp_int_arg_8);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
goto frame_return_exit_1;
}
branch_no_10:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_instance_13;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_instance_13 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = mod_consts.const_str_digest_38a54d3ed4a62855b6f80e9ae4722ae6;
CHECK_OBJECT(par_color);
tmp_args_element_value_17 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 87;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_13,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_m;
    assert(old != NULL);
    var_m = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_8;
CHECK_OBJECT(var_m);
tmp_truth_name_8 = CHECK_IF_TRUE(var_m);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_colorsys;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageColor;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_hls_to_rgb_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 91;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageColor,
        mod_consts.const_str_plain_hls_to_rgb,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_hls_to_rgb);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hls_to_rgb;
    var_hls_to_rgb = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_18;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_float_arg_1;
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_19;
PyObject *tmp_truediv_expr_left_5;
PyObject *tmp_truediv_expr_right_5;
PyObject *tmp_float_arg_2;
PyObject *tmp_called_instance_15;
PyObject *tmp_args_element_value_20;
PyObject *tmp_truediv_expr_left_6;
PyObject *tmp_truediv_expr_right_6;
PyObject *tmp_float_arg_3;
PyObject *tmp_called_instance_16;
CHECK_OBJECT(var_hls_to_rgb);
tmp_called_value_4 = var_hls_to_rgb;
CHECK_OBJECT(var_m);
tmp_called_instance_14 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 94;
tmp_float_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_14,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_4 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_4 = mod_consts.const_float_360_0;
tmp_args_element_value_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_called_instance_15 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 95;
tmp_float_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_15,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0)
);

if (tmp_float_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 95;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_5 = TO_FLOAT(tmp_float_arg_2);
CHECK_OBJECT(tmp_float_arg_2);
Py_DECREF(tmp_float_arg_2);
if (tmp_truediv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 95;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_5 = mod_consts.const_float_100_0;
tmp_args_element_value_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
CHECK_OBJECT(tmp_truediv_expr_left_5);
Py_DECREF(tmp_truediv_expr_left_5);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 95;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_called_instance_16 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 96;
tmp_float_arg_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_16,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_float_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 96;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_6 = TO_FLOAT(tmp_float_arg_3);
CHECK_OBJECT(tmp_float_arg_3);
Py_DECREF(tmp_float_arg_3);
if (tmp_truediv_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 96;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_6 = mod_consts.const_float_100_0;
tmp_args_element_value_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
CHECK_OBJECT(tmp_truediv_expr_left_6);
Py_DECREF(tmp_truediv_expr_left_6);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_19);

exception_lineno = 96;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_floats;
    var_rgb_floats = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_tuple_element_7;
PyObject *tmp_int_arg_10;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_mult_expr_left_11;
PyObject *tmp_mult_expr_right_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_15;
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_17 = var_rgb_floats;
tmp_subscript_value_15 = const_int_0;
tmp_mult_expr_left_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_15, 0);
if (tmp_mult_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_11 = mod_consts.const_int_pos_255;
tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
CHECK_OBJECT(tmp_mult_expr_left_11);
Py_DECREF(tmp_mult_expr_left_11);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = mod_consts.const_float_0_5;
tmp_int_arg_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_int_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_7 = PyNumber_Int(tmp_int_arg_10);
CHECK_OBJECT(tmp_int_arg_10);
Py_DECREF(tmp_int_arg_10);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_11;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_mult_expr_left_12;
PyObject *tmp_mult_expr_right_12;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_16;
PyObject *tmp_int_arg_12;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_mult_expr_left_13;
PyObject *tmp_mult_expr_right_13;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_17;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_7);
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_18 = var_rgb_floats;
tmp_subscript_value_16 = const_int_pos_1;
tmp_mult_expr_left_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_18, tmp_subscript_value_16, 1);
if (tmp_mult_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_mult_expr_right_12 = mod_consts.const_int_pos_255;
tmp_add_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
CHECK_OBJECT(tmp_mult_expr_left_12);
Py_DECREF(tmp_mult_expr_left_12);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_add_expr_right_5 = mod_consts.const_float_0_5;
tmp_int_arg_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_int_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = PyNumber_Int(tmp_int_arg_11);
CHECK_OBJECT(tmp_int_arg_11);
Py_DECREF(tmp_int_arg_11);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_7);
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_19 = var_rgb_floats;
tmp_subscript_value_17 = mod_consts.const_int_pos_2;
tmp_mult_expr_left_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_17, 2);
if (tmp_mult_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_mult_expr_right_13 = mod_consts.const_int_pos_255;
tmp_add_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
CHECK_OBJECT(tmp_mult_expr_left_13);
Py_DECREF(tmp_mult_expr_left_13);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_add_expr_right_6 = mod_consts.const_float_0_5;
tmp_int_arg_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_int_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = PyNumber_Int(tmp_int_arg_12);
CHECK_OBJECT(tmp_int_arg_12);
Py_DECREF(tmp_int_arg_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooo";
    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_7);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
goto frame_return_exit_1;
}
branch_no_11:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_17;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
tmp_called_instance_17 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = mod_consts.const_str_digest_1974e9c9378e907aa10e501e8280c12f;
CHECK_OBJECT(par_color);
tmp_args_element_value_22 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 104;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_17,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_m;
    assert(old != NULL);
    var_m = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_12;
int tmp_truth_name_9;
CHECK_OBJECT(var_m);
tmp_truth_name_9 = CHECK_IF_TRUE(var_m);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_colorsys;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageColor;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_hsv_to_rgb_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 108;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$ImageColor,
        mod_consts.const_str_plain_hsv_to_rgb,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_hsv_to_rgb);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hsv_to_rgb;
    var_hsv_to_rgb = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_23;
PyObject *tmp_truediv_expr_left_7;
PyObject *tmp_truediv_expr_right_7;
PyObject *tmp_float_arg_4;
PyObject *tmp_called_instance_18;
PyObject *tmp_args_element_value_24;
PyObject *tmp_truediv_expr_left_8;
PyObject *tmp_truediv_expr_right_8;
PyObject *tmp_float_arg_5;
PyObject *tmp_called_instance_19;
PyObject *tmp_args_element_value_25;
PyObject *tmp_truediv_expr_left_9;
PyObject *tmp_truediv_expr_right_9;
PyObject *tmp_float_arg_6;
PyObject *tmp_called_instance_20;
CHECK_OBJECT(var_hsv_to_rgb);
tmp_called_value_5 = var_hsv_to_rgb;
CHECK_OBJECT(var_m);
tmp_called_instance_18 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 111;
tmp_float_arg_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_18,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_float_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_7 = TO_FLOAT(tmp_float_arg_4);
CHECK_OBJECT(tmp_float_arg_4);
Py_DECREF(tmp_float_arg_4);
if (tmp_truediv_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_7 = mod_consts.const_float_360_0;
tmp_args_element_value_23 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_7, tmp_truediv_expr_right_7);
CHECK_OBJECT(tmp_truediv_expr_left_7);
Py_DECREF(tmp_truediv_expr_left_7);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_called_instance_19 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 112;
tmp_float_arg_5 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_19,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_float_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);

exception_lineno = 112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_8 = TO_FLOAT(tmp_float_arg_5);
CHECK_OBJECT(tmp_float_arg_5);
Py_DECREF(tmp_float_arg_5);
if (tmp_truediv_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);

exception_lineno = 112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_8 = mod_consts.const_float_100_0;
tmp_args_element_value_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_8, tmp_truediv_expr_right_8);
CHECK_OBJECT(tmp_truediv_expr_left_8);
Py_DECREF(tmp_truediv_expr_left_8);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);

exception_lineno = 112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_called_instance_20 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 113;
tmp_float_arg_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_20,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0)
);

if (tmp_float_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_24);

exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_9 = TO_FLOAT(tmp_float_arg_6);
CHECK_OBJECT(tmp_float_arg_6);
Py_DECREF(tmp_float_arg_6);
if (tmp_truediv_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_24);

exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_9 = mod_consts.const_float_100_0;
tmp_args_element_value_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_9, tmp_truediv_expr_right_9);
CHECK_OBJECT(tmp_truediv_expr_left_9);
Py_DECREF(tmp_truediv_expr_left_9);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_24);

exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_floats;
    var_rgb_floats = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_tuple_element_8;
PyObject *tmp_int_arg_13;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_mult_expr_left_14;
PyObject *tmp_mult_expr_right_14;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_18;
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_20 = var_rgb_floats;
tmp_subscript_value_18 = const_int_0;
tmp_mult_expr_left_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_18, 0);
if (tmp_mult_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_14 = mod_consts.const_int_pos_255;
tmp_add_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
CHECK_OBJECT(tmp_mult_expr_left_14);
Py_DECREF(tmp_mult_expr_left_14);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = mod_consts.const_float_0_5;
tmp_int_arg_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_int_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_8 = PyNumber_Int(tmp_int_arg_13);
CHECK_OBJECT(tmp_int_arg_13);
Py_DECREF(tmp_int_arg_13);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_14;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
PyObject *tmp_mult_expr_left_15;
PyObject *tmp_mult_expr_right_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_19;
PyObject *tmp_int_arg_15;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_mult_expr_left_16;
PyObject *tmp_mult_expr_right_16;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_20;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_8);
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_21 = var_rgb_floats;
tmp_subscript_value_19 = const_int_pos_1;
tmp_mult_expr_left_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_19, 1);
if (tmp_mult_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_mult_expr_right_15 = mod_consts.const_int_pos_255;
tmp_add_expr_left_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
CHECK_OBJECT(tmp_mult_expr_left_15);
Py_DECREF(tmp_mult_expr_left_15);
if (tmp_add_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_add_expr_right_8 = mod_consts.const_float_0_5;
tmp_int_arg_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_8, tmp_add_expr_right_8);
CHECK_OBJECT(tmp_add_expr_left_8);
Py_DECREF(tmp_add_expr_left_8);
if (tmp_int_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_tuple_element_8 = PyNumber_Int(tmp_int_arg_14);
CHECK_OBJECT(tmp_int_arg_14);
Py_DECREF(tmp_int_arg_14);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_8);
CHECK_OBJECT(var_rgb_floats);
tmp_expression_value_22 = var_rgb_floats;
tmp_subscript_value_20 = mod_consts.const_int_pos_2;
tmp_mult_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_20, 2);
if (tmp_mult_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_mult_expr_right_16 = mod_consts.const_int_pos_255;
tmp_add_expr_left_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
CHECK_OBJECT(tmp_mult_expr_left_16);
Py_DECREF(tmp_mult_expr_left_16);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_add_expr_right_9 = mod_consts.const_float_0_5;
tmp_int_arg_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_int_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
tmp_tuple_element_8 = PyNumber_Int(tmp_int_arg_15);
CHECK_OBJECT(tmp_int_arg_15);
Py_DECREF(tmp_int_arg_15);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_8);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
goto frame_return_exit_1;
}
branch_no_12:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_21;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_instance_21 = module_var_accessor_PIL$ImageColor$re(tstate);
if (unlikely(tmp_called_instance_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_26 = mod_consts.const_str_digest_3aa1143faafe0ad59c695b7a9e0f3cc3;
CHECK_OBJECT(par_color);
tmp_args_element_value_27 = par_color;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 121;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_21,
        mod_consts.const_str_plain_match,
        call_args
    );
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_m;
    assert(old != NULL);
    var_m = tmp_assign_source_12;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_10;
CHECK_OBJECT(var_m);
tmp_truth_name_10 = CHECK_IF_TRUE(var_m);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_tuple_element_9;
PyObject *tmp_int_arg_16;
PyObject *tmp_called_instance_22;
CHECK_OBJECT(var_m);
tmp_called_instance_22 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 123;
tmp_int_arg_16 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_22,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_int_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_16);
CHECK_OBJECT(tmp_int_arg_16);
Py_DECREF(tmp_int_arg_16);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_int_arg_17;
PyObject *tmp_called_instance_23;
PyObject *tmp_int_arg_18;
PyObject *tmp_called_instance_24;
PyObject *tmp_int_arg_19;
PyObject *tmp_called_instance_25;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_9);
CHECK_OBJECT(var_m);
tmp_called_instance_23 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 123;
tmp_int_arg_17 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_23,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0)
);

if (tmp_int_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_17);
CHECK_OBJECT(tmp_int_arg_17);
Py_DECREF(tmp_int_arg_17);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_9);
CHECK_OBJECT(var_m);
tmp_called_instance_24 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 123;
tmp_int_arg_18 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_24,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0)
);

if (tmp_int_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_18);
CHECK_OBJECT(tmp_int_arg_18);
Py_DECREF(tmp_int_arg_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_9);
CHECK_OBJECT(var_m);
tmp_called_instance_25 = var_m;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 123;
tmp_int_arg_19 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_25,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_4_tuple, 0)
);

if (tmp_int_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
tmp_tuple_element_9 = PyNumber_Int(tmp_int_arg_19);
CHECK_OBJECT(tmp_int_arg_19);
Py_DECREF(tmp_int_arg_19);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_return_value, 3, tmp_tuple_element_9);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
goto frame_return_exit_1;
}
branch_no_13:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = mod_consts.const_str_digest_9a5451d22760052766acd3f4a45c5ef6;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_10);
CHECK_OBJECT(par_color);
tmp_operand_value_1 = par_color;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto tuple_build_exception_10;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assign_source_13 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_13 == NULL));
{
    PyObject *old = var_msg;
    var_msg = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_2 = var_msg;
frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame.f_lineno = 125;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 125;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageColor$$$function__1_getrgb, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageColor$$$function__1_getrgb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageColor$$$function__1_getrgb, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageColor$$$function__1_getrgb,
    type_description_1,
    par_color,
    var_msg,
    var_rgb,
    var_rgb_tuple,
    var_m,
    var_hls_to_rgb,
    var_rgb_floats,
    var_hsv_to_rgb
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageColor$$$function__1_getrgb == cache_frame_frame_PIL$ImageColor$$$function__1_getrgb) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageColor$$$function__1_getrgb);
    cache_frame_frame_PIL$ImageColor$$$function__1_getrgb = NULL;
}

assertFrameObject(frame_frame_PIL$ImageColor$$$function__1_getrgb);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
CHECK_OBJECT(var_rgb);
CHECK_OBJECT(var_rgb);
Py_DECREF(var_rgb);
var_rgb = NULL;
Py_XDECREF(var_rgb_tuple);
var_rgb_tuple = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_hls_to_rgb);
var_hls_to_rgb = NULL;
Py_XDECREF(var_rgb_floats);
var_rgb_floats = NULL;
Py_XDECREF(var_hsv_to_rgb);
var_hsv_to_rgb = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_color);
par_color = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var_rgb);
var_rgb = NULL;
Py_XDECREF(var_rgb_tuple);
var_rgb_tuple = NULL;
Py_XDECREF(var_m);
var_m = NULL;
Py_XDECREF(var_hls_to_rgb);
var_hls_to_rgb = NULL;
Py_XDECREF(var_rgb_floats);
var_rgb_floats = NULL;
Py_XDECREF(var_hsv_to_rgb);
var_hsv_to_rgb = NULL;
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


static PyObject *impl_PIL$ImageColor$$$function__2_getcolor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_color = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *var_rgb = NULL;
PyObject *var_alpha = NULL;
PyObject *var_rgb_to_hsv = NULL;
PyObject *var_r = NULL;
PyObject *var_g = NULL;
PyObject *var_b = NULL;
PyObject *var_h = NULL;
PyObject *var_s = NULL;
PyObject *var_v = NULL;
PyObject *var_graylevel = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__element_3 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageColor$$$function__2_getcolor;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageColor$$$function__2_getcolor = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageColor$$$function__2_getcolor)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageColor$$$function__2_getcolor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageColor$$$function__2_getcolor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageColor$$$function__2_getcolor = MAKE_FUNCTION_FRAME(tstate, code_objects_2a3f9e9775a608fab1bd7aa137e3db91, module_PIL$ImageColor, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageColor$$$function__2_getcolor->m_type_description == NULL);
frame_frame_PIL$ImageColor$$$function__2_getcolor = cache_frame_frame_PIL$ImageColor$$$function__2_getcolor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageColor$$$function__2_getcolor);
assert(Py_REFCNT(frame_frame_PIL$ImageColor$$$function__2_getcolor) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageColor$getrgb(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getrgb);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_color);
tmp_args_element_value_1 = par_color;
frame_frame_PIL$ImageColor$$$function__2_getcolor->m_frame.f_lineno = 144;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooo";
    goto try_except_handler_2;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_int_pos_255;
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
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



exception_lineno = 144;
type_description_1 = "oooooooooooo";
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



exception_lineno = 144;
type_description_1 = "oooooooooooo";
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



exception_lineno = 144;
type_description_1 = "oooooooooooo";
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
    PyObject *old = var_rgb;
    var_rgb = tmp_assign_source_4;
    Py_INCREF(var_rgb);
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
    PyObject *old = var_alpha;
    var_alpha = tmp_assign_source_5;
    Py_INCREF(var_alpha);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_rgb);
tmp_len_arg_1 = var_rgb;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 4;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_rgb);
tmp_expression_value_1 = var_rgb;
tmp_subscript_value_1 = mod_consts.const_int_pos_3;
tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_alpha;
    assert(old != NULL);
    var_alpha = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_rgb);
tmp_expression_value_2 = var_rgb;
tmp_subscript_value_2 = mod_consts.const_slice_none_int_pos_3_none;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb;
    assert(old != NULL);
    var_rgb = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_left_2 = par_mode;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_HSV;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_colorsys;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageColor;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_rgb_to_hsv_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageColor$$$function__2_getcolor->m_frame.f_lineno = 150;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageColor,
        mod_consts.const_str_plain_rgb_to_hsv,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_rgb_to_hsv);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_rgb_to_hsv;
    var_rgb_to_hsv = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
if (var_rgb == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}

tmp_iter_arg_2 = var_rgb;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "oooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_13;
    Py_INCREF(var_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_g;
    var_g = tmp_assign_source_14;
    Py_INCREF(var_g);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_15;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
CHECK_OBJECT(var_rgb_to_hsv);
tmp_called_value_2 = var_rgb_to_hsv;
CHECK_OBJECT(var_r);
tmp_truediv_expr_left_1 = var_r;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_255;
tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_g);
tmp_truediv_expr_left_2 = var_g;
tmp_truediv_expr_right_2 = mod_consts.const_int_pos_255;
tmp_args_element_value_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_b);
tmp_truediv_expr_left_3 = var_b;
tmp_truediv_expr_right_3 = mod_consts.const_int_pos_255;
tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
frame_frame_PIL$ImageColor$$$function__2_getcolor->m_frame.f_lineno = 153;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 2, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_3;
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_h;
    var_h = tmp_assign_source_20;
    Py_INCREF(var_h);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_s;
    var_s = tmp_assign_source_21;
    Py_INCREF(var_s);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
tmp_assign_source_22 = tmp_tuple_unpack_3__element_3;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_22;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_3);
tmp_tuple_unpack_3__element_3 = NULL;

{
PyObject *tmp_tuple_element_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(var_h);
tmp_mult_expr_left_1 = var_h;
tmp_mult_expr_right_1 = mod_consts.const_int_pos_255;
tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_int_arg_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_int_arg_3;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_s);
tmp_mult_expr_left_2 = var_s;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_255;
tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_v);
tmp_mult_expr_left_3 = var_v;
tmp_mult_expr_right_3 = mod_consts.const_int_pos_255;
tmp_int_arg_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "oooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_called_instance_1 = module_var_accessor_PIL$ImageColor$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_args_element_value_5 = par_mode;
frame_frame_PIL$ImageColor$$$function__2_getcolor->m_frame.f_lineno = 155;
tmp_cmp_expr_left_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getmodebase, tmp_args_element_value_5);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_L;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_4;
if (var_rgb == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_8;
}

tmp_iter_arg_4 = var_rgb;
tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 2, 3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "oooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_27 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_27;
    Py_INCREF(var_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_28 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_g;
    var_g = tmp_assign_source_28;
    Py_INCREF(var_g);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_29 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_29;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_assign_source_30;
PyObject *tmp_rshift_expr_left_1;
PyObject *tmp_rshift_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
CHECK_OBJECT(var_r);
tmp_mult_expr_left_4 = var_r;
tmp_mult_expr_right_4 = mod_consts.const_int_pos_19595;
tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_g);
tmp_mult_expr_left_5 = var_g;
tmp_mult_expr_right_5 = mod_consts.const_int_pos_38470;
tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 159;
type_description_1 = "oooooooooooo";
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


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_b);
tmp_mult_expr_left_6 = var_b;
tmp_mult_expr_right_6 = mod_consts.const_int_pos_7471;
tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_int_pos_32768;
tmp_rshift_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_rshift_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_rshift_expr_right_1 = mod_consts.const_int_pos_16;
tmp_assign_source_30 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_rshift_expr_left_1, tmp_rshift_expr_right_1);
CHECK_OBJECT(tmp_rshift_expr_left_1);
Py_DECREF(tmp_rshift_expr_left_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_graylevel;
    var_graylevel = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_mode);
tmp_expression_value_3 = par_mode;
tmp_subscript_value_3 = const_int_neg_1;
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, -1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_A;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_graylevel);
tmp_tuple_element_3 = var_graylevel;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_alpha);
tmp_tuple_element_3 = var_alpha;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
goto frame_return_exit_1;
}
branch_no_4:;
CHECK_OBJECT(var_graylevel);
tmp_return_value = var_graylevel;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_mode);
tmp_expression_value_4 = par_mode;
tmp_subscript_value_4 = const_int_neg_1;
tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, -1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_A;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooo";
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
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_tuple_element_4;
if (var_rgb == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}

tmp_add_expr_left_4 = var_rgb;
CHECK_OBJECT(var_alpha);
tmp_tuple_element_4 = var_alpha;
tmp_add_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_add_expr_right_4, 0, tmp_tuple_element_4);
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
branch_end_3:;
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageColor$$$function__2_getcolor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageColor$$$function__2_getcolor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageColor$$$function__2_getcolor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageColor$$$function__2_getcolor,
    type_description_1,
    par_color,
    par_mode,
    var_rgb,
    var_alpha,
    var_rgb_to_hsv,
    var_r,
    var_g,
    var_b,
    var_h,
    var_s,
    var_v,
    var_graylevel
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageColor$$$function__2_getcolor == cache_frame_frame_PIL$ImageColor$$$function__2_getcolor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageColor$$$function__2_getcolor);
    cache_frame_frame_PIL$ImageColor$$$function__2_getcolor = NULL;
}

assertFrameObject(frame_frame_PIL$ImageColor$$$function__2_getcolor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
if (var_rgb == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rgb);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);



    goto try_except_handler_1;
}

tmp_return_value = var_rgb;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_rgb);
var_rgb = NULL;
CHECK_OBJECT(var_alpha);
CHECK_OBJECT(var_alpha);
Py_DECREF(var_alpha);
var_alpha = NULL;
Py_XDECREF(var_rgb_to_hsv);
var_rgb_to_hsv = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_graylevel);
var_graylevel = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rgb);
var_rgb = NULL;
Py_XDECREF(var_alpha);
var_alpha = NULL;
Py_XDECREF(var_rgb_to_hsv);
var_rgb_to_hsv = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_s);
var_s = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_graylevel);
var_graylevel = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function__1_getrgb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageColor$$$function__1_getrgb,
        mod_consts.const_str_plain_getrgb,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c228bf99e6e9647fbf22f6463e176105,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageColor,
        mod_consts.const_str_digest_4eff680662e5a60bbced25d862ce5a02,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageColor$$$function__2_getcolor(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageColor$$$function__2_getcolor,
        mod_consts.const_str_plain_getcolor,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2a3f9e9775a608fab1bd7aa137e3db91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageColor,
        mod_consts.const_str_digest_5ae34b475963f9a60b55c9187a98410f,
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

static function_impl_code const function_table_PIL$ImageColor[] = {
impl_PIL$ImageColor$$$function__1_getrgb,
impl_PIL$ImageColor$$$function__2_getcolor,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageColor);
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
        module_PIL$ImageColor,
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
        function_table_PIL$ImageColor,
        sizeof(function_table_PIL$ImageColor) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageColor";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageColor(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageColor");

    // Store the module for future use.
    module_PIL$ImageColor = module;

    moduledict_PIL$ImageColor = MODULE_DICT(module_PIL$ImageColor);

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
        PRINT_STRING("PIL$ImageColor: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageColor: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageColor: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageColor" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageColor\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageColor,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageColor,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageColor,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageColor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageColor,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageColor);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageColor);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_PIL$ImageColor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageColor = MAKE_MODULE_FRAME(code_objects_72e44ce5ae091cc2a76a66eeaa0741e3, module_PIL$ImageColor);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageColor);
assert(Py_REFCNT(frame_frame_PIL$ImageColor) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageColor$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageColor$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageColor;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageColor->m_frame.f_lineno = 21;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageColor,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageColor;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Image_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$ImageColor->m_frame.f_lineno = 24;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$ImageColor,
        mod_consts.const_str_plain_Image,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Image);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageColor$lru_cache(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_459af22d33228b676c0c558c76fd43df);

tmp_args_element_value_1 = MAKE_FUNCTION_PIL$ImageColor$$$function__1_getrgb(tstate, tmp_annotations_1);

frame_frame_PIL$ImageColor->m_frame.f_lineno = 27;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_getrgb, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_2 = module_var_accessor_PIL$ImageColor$lru_cache(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_164fba4cbd3f46ded157eb004507d2f2);

tmp_args_element_value_2 = MAKE_FUNCTION_PIL$ImageColor$$$function__2_getcolor(tstate, tmp_annotations_2);

frame_frame_PIL$ImageColor->m_frame.f_lineno = 128;
tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_getcolor, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = DICT_COPY(tstate, mod_consts.const_dict_e7fb8f8c26ddcadbaad1d5a688f3cc00);
UPDATE_STRING_DICT1(moduledict_PIL$ImageColor, (Nuitka_StringObject *)mod_consts.const_str_plain_colormap, tmp_assign_source_12);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_0f53200345f4ccf9fb0a99bf99913f03;
tmp_ass_subscribed_1 = module_var_accessor_PIL$ImageColor$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_colormap;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageColor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageColor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageColor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageColor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageColor", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageColor" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageColor);
    return module_PIL$ImageColor;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageColor, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageColor", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
