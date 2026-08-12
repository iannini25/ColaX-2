/* Generated code for Python module 'PIL$ImageTk'
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



/* The "module_PIL$ImageTk" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$ImageTk;
PyDictObject *moduledict_PIL$ImageTk;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_file_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_plain_BytesIO;
PyObject *const_tuple_str_plain_data_tuple;
PyObject *const_str_plain_Image;
PyObject *const_str_plain_tk;
PyObject *const_str_plain_call;
PyObject *const_str_plain_tkinter;
PyObject *const_str_plain_TclError;
PyObject *const_tuple_str_plain__imagingtk_tuple;
PyObject *const_str_plain__imagingtk;
PyObject *const_str_plain_tkinit;
PyObject *const_str_plain_interpaddr;
PyObject *const_str_plain__get_image_from_kw;
PyObject *const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37;
PyObject *const_str_digest_be2eed8df2f9c6876816452fe4c375bd;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_P;
PyObject *const_str_plain_apply_transparency;
PyObject *const_str_plain_load;
PyObject *const_str_plain_palette;
PyObject *const_str_plain_RGB;
PyObject *const_str_plain_size;
PyObject *const_str_plain_width;
PyObject *const_str_plain_height;
PyObject *const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple;
PyObject *const_str_plain_getmodebase;
PyObject *const_str_plain__PhotoImage__mode;
PyObject *const_str_plain__PhotoImage__size;
PyObject *const_str_plain_PhotoImage;
PyObject *const_str_plain__PhotoImage__photo;
PyObject *const_str_plain_image;
PyObject *const_str_plain_paste;
PyObject *const_str_plain_delete;
PyObject *const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8;
PyObject *const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec;
PyObject *const_str_digest_1abfc66457d3747b3fcbb02a232340db;
PyObject *const_str_plain_getim;
PyObject *const_str_plain_im;
PyObject *const_str_plain_isblock;
PyObject *const_str_plain_core;
PyObject *const_str_plain_new_block;
PyObject *const_str_plain_convert2;
PyObject *const_str_plain_ptr;
PyObject *const_str_plain__pyimagingtkcall;
PyObject *const_str_plain_PyImagingPhoto;
PyObject *const_str_digest_b412722f5d85f9a07def83350f86eb43;
PyObject *const_str_plain__BitmapImage__mode;
PyObject *const_str_plain__BitmapImage__size;
PyObject *const_str_plain_BitmapImage;
PyObject *const_str_plain_tobitmap;
PyObject *const_str_plain__BitmapImage__photo;
PyObject *const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea;
PyObject *const_str_plain_new;
PyObject *const_str_plain_RGBA;
PyObject *const_str_plain_PyImagingPhotoGet;
PyObject *const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Any;
PyObject *const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
PyObject *const_str_plain_ImageFile;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_dict_7514e31b72f87891a5f0ac05bb436ea3;
PyObject *const_dict_e9ad2702bdefb7875096ae8ac1e5ca88;
PyObject *const_str_digest_838a29dc561fc2a6574ed3f246040a8c;
PyObject *const_str_digest_c0f415c8feab191e02bd4d47f512df14;
PyObject *const_int_pos_73;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_f7795320c3bda3dff1e8483f444b0c4b;
PyObject *const_str_digest_b267f77a5a0148bb6d22e5e753d6c023;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain___del__;
PyObject *const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_8f782fd184016010966dca68db60ca51;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_eafc28c3d8a1decea6229a25decfa4ae;
PyObject *const_str_digest_5d0068b9f848aa3216a37406d4e640e6;
PyObject *const_dict_2d79bb1196e0f4c20b263b2408e5c18f;
PyObject *const_str_digest_49b75161b0627340117a6ef50d0b48d2;
PyObject *const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_47ffa35dd5970060e7ee48dccd17f079;
PyObject *const_int_pos_195;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_9d2765c0e6accaad4b2723a09992f37a;
PyObject *const_str_digest_0fb125c9ad6196e59f2880f51a25d647;
PyObject *const_str_digest_3363107645c2e351168327c8453451db;
PyObject *const_str_digest_98e1044ed82e2700a95f07fb961579cc;
PyObject *const_str_digest_4d9f5a5f100de407c495ecf459590f51;
PyObject *const_str_digest_22ef506ca2fd289844088dd21b1ad6ba;
PyObject *const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple;
PyObject *const_dict_0e8d1ec6a2e2fe2e489827ab89d57839;
PyObject *const_str_plain_getimage;
PyObject *const_str_digest_89b022d51544d4d23cbefe539d0c9eb0;
PyObject *const_str_digest_e262b110a9f91e6a6393f79aa56d64a9;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple;
PyObject *const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_kw_str_plain_source_tuple;
PyObject *const_tuple_942e93111e3172432beccf3e07a761db_tuple;
PyObject *const_tuple_str_plain_photo_str_plain_im_tuple;
PyObject *const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[109];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL.ImageTk"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 109) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 109 values, got %d\n",
                    UN_TRANSLATE("PIL.ImageTk"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_file_tuple", mod_consts.const_tuple_str_plain_file_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_data_tuple", mod_consts.const_tuple_str_plain_data_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tk", mod_consts.const_str_plain_tk);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_tk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_call", mod_consts.const_str_plain_call);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_call);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tkinter", mod_consts.const_str_plain_tkinter);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_tkinter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TclError", mod_consts.const_str_plain_TclError);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_TclError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__imagingtk_tuple", mod_consts.const_tuple_str_plain__imagingtk_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__imagingtk_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingtk", mod_consts.const_str_plain__imagingtk);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__imagingtk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tkinit", mod_consts.const_str_plain_tkinit);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_tkinit);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_interpaddr", mod_consts.const_str_plain_interpaddr);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_interpaddr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_image_from_kw", mod_consts.const_str_plain__get_image_from_kw);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_image_from_kw);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37", mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd", mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply_transparency", mod_consts.const_str_plain_apply_transparency);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_apply_transparency);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_load);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_palette);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGB);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_height);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmodebase", mod_consts.const_str_plain_getmodebase);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmodebase);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__mode", mod_consts.const_str_plain__PhotoImage__mode);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__size", mod_consts.const_str_plain__PhotoImage__size);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotoImage", mod_consts.const_str_plain_PhotoImage);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PhotoImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__photo", mod_consts.const_str_plain__PhotoImage__photo);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__photo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image", mod_consts.const_str_plain_image);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_image);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paste", mod_consts.const_str_plain_paste);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_paste);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8", mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec", mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db", mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_getim);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_im);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isblock", mod_consts.const_str_plain_isblock);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_isblock);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_core);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_block", mod_consts.const_str_plain_new_block);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_block);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert2", mod_consts.const_str_plain_convert2);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ptr", mod_consts.const_str_plain_ptr);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_ptr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pyimagingtkcall", mod_consts.const_str_plain__pyimagingtkcall);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__pyimagingtkcall);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyImagingPhoto", mod_consts.const_str_plain_PyImagingPhoto);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyImagingPhoto);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43", mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__mode", mod_consts.const_str_plain__BitmapImage__mode);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__size", mod_consts.const_str_plain__BitmapImage__size);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitmapImage", mod_consts.const_str_plain_BitmapImage);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_BitmapImage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobitmap", mod_consts.const_str_plain_tobitmap);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_tobitmap);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__photo", mod_consts.const_str_plain__BitmapImage__photo);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__photo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea", mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyImagingPhotoGet", mod_consts.const_str_plain_PyImagingPhotoGet);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyImagingPhotoGet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161", mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3", mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88", mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c", mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14", mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_73", mod_consts.const_int_pos_73);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_73);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b", mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023", mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___del__", mod_consts.const_str_plain___del__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___del__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e", mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51", mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae", mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6", mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f", mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2", mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple", mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079", mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_195", mod_consts.const_int_pos_195);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_195);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a", mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647", mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3363107645c2e351168327c8453451db", mod_consts.const_str_digest_3363107645c2e351168327c8453451db);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_3363107645c2e351168327c8453451db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc", mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51", mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba", mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple", mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839", mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getimage", mod_consts.const_str_plain_getimage);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_getimage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0", mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9", mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple", mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple", mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple", mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple", mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple", mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple);
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
void checkModuleConstants_PIL$ImageTk(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_file_tuple", mod_consts.const_tuple_str_plain_file_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_tuple) && "mod_consts.const_tuple_str_plain_file_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BytesIO", mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO) && "mod_consts.const_str_plain_BytesIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_data_tuple", mod_consts.const_tuple_str_plain_data_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Image", mod_consts.const_str_plain_Image);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Image) && "mod_consts.const_str_plain_Image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tk", mod_consts.const_str_plain_tk);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_tk) && "mod_consts.const_str_plain_tk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_call", mod_consts.const_str_plain_call);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_call) && "mod_consts.const_str_plain_call");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tkinter", mod_consts.const_str_plain_tkinter);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_tkinter) && "mod_consts.const_str_plain_tkinter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TclError", mod_consts.const_str_plain_TclError);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_TclError) && "mod_consts.const_str_plain_TclError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__imagingtk_tuple", mod_consts.const_tuple_str_plain__imagingtk_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__imagingtk_tuple) && "mod_consts.const_tuple_str_plain__imagingtk_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__imagingtk", mod_consts.const_str_plain__imagingtk);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__imagingtk) && "mod_consts.const_str_plain__imagingtk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tkinit", mod_consts.const_str_plain_tkinit);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_tkinit) && "mod_consts.const_str_plain_tkinit");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_interpaddr", mod_consts.const_str_plain_interpaddr);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_interpaddr) && "mod_consts.const_str_plain_interpaddr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_image_from_kw", mod_consts.const_str_plain__get_image_from_kw);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_image_from_kw) && "mod_consts.const_str_plain__get_image_from_kw");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37", mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37) && "mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd", mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd) && "mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mode", mod_consts.const_str_plain_mode);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode) && "mod_consts.const_str_plain_mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_apply_transparency", mod_consts.const_str_plain_apply_transparency);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_apply_transparency) && "mod_consts.const_str_plain_apply_transparency");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load", mod_consts.const_str_plain_load);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_load) && "mod_consts.const_str_plain_load");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_palette", mod_consts.const_str_plain_palette);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_palette) && "mod_consts.const_str_plain_palette");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGB", mod_consts.const_str_plain_RGB);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGB) && "mod_consts.const_str_plain_RGB");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_size", mod_consts.const_str_plain_size);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_size) && "mod_consts.const_str_plain_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_width", mod_consts.const_str_plain_width);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_width) && "mod_consts.const_str_plain_width");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_height", mod_consts.const_str_plain_height);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_height) && "mod_consts.const_str_plain_height");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple", mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple) && "mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getmodebase", mod_consts.const_str_plain_getmodebase);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmodebase) && "mod_consts.const_str_plain_getmodebase");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__mode", mod_consts.const_str_plain__PhotoImage__mode);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__mode) && "mod_consts.const_str_plain__PhotoImage__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__size", mod_consts.const_str_plain__PhotoImage__size);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__size) && "mod_consts.const_str_plain__PhotoImage__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PhotoImage", mod_consts.const_str_plain_PhotoImage);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PhotoImage) && "mod_consts.const_str_plain_PhotoImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PhotoImage__photo", mod_consts.const_str_plain__PhotoImage__photo);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__PhotoImage__photo) && "mod_consts.const_str_plain__PhotoImage__photo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_image", mod_consts.const_str_plain_image);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_image) && "mod_consts.const_str_plain_image");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_paste", mod_consts.const_str_plain_paste);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_paste) && "mod_consts.const_str_plain_paste");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_delete", mod_consts.const_str_plain_delete);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete) && "mod_consts.const_str_plain_delete");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8", mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8) && "mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec", mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec) && "mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db", mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db) && "mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getim", mod_consts.const_str_plain_getim);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_getim) && "mod_consts.const_str_plain_getim");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_im", mod_consts.const_str_plain_im);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_im) && "mod_consts.const_str_plain_im");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isblock", mod_consts.const_str_plain_isblock);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_isblock) && "mod_consts.const_str_plain_isblock");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_core", mod_consts.const_str_plain_core);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_core) && "mod_consts.const_str_plain_core");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new_block", mod_consts.const_str_plain_new_block);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_block) && "mod_consts.const_str_plain_new_block");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_convert2", mod_consts.const_str_plain_convert2);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert2) && "mod_consts.const_str_plain_convert2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ptr", mod_consts.const_str_plain_ptr);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_ptr) && "mod_consts.const_str_plain_ptr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__pyimagingtkcall", mod_consts.const_str_plain__pyimagingtkcall);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__pyimagingtkcall) && "mod_consts.const_str_plain__pyimagingtkcall");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyImagingPhoto", mod_consts.const_str_plain_PyImagingPhoto);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyImagingPhoto) && "mod_consts.const_str_plain_PyImagingPhoto");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43", mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43) && "mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__mode", mod_consts.const_str_plain__BitmapImage__mode);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__mode) && "mod_consts.const_str_plain__BitmapImage__mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__size", mod_consts.const_str_plain__BitmapImage__size);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__size) && "mod_consts.const_str_plain__BitmapImage__size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BitmapImage", mod_consts.const_str_plain_BitmapImage);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_BitmapImage) && "mod_consts.const_str_plain_BitmapImage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tobitmap", mod_consts.const_str_plain_tobitmap);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_tobitmap) && "mod_consts.const_str_plain_tobitmap");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BitmapImage__photo", mod_consts.const_str_plain__BitmapImage__photo);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__BitmapImage__photo) && "mod_consts.const_str_plain__BitmapImage__photo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea", mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea) && "mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RGBA", mod_consts.const_str_plain_RGBA);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_RGBA) && "mod_consts.const_str_plain_RGBA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PyImagingPhotoGet", mod_consts.const_str_plain_PyImagingPhotoGet);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyImagingPhotoGet) && "mod_consts.const_str_plain_PyImagingPhotoGet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161", mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161) && "mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple", mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple) && "mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ImageFile", mod_consts.const_str_plain_ImageFile);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImageFile) && "mod_consts.const_str_plain_ImageFile");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3", mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3) && "mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88", mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88) && "mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c", mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c) && "mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14", mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14) && "mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_73", mod_consts.const_int_pos_73);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_73) && "mod_consts.const_int_pos_73");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b", mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b) && "mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023", mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023) && "mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___del__", mod_consts.const_str_plain___del__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___del__) && "mod_consts.const_str_plain___del__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e", mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e) && "mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__) && "mod_consts.const_str_plain___str__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51", mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51) && "mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae", mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae) && "mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6", mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6) && "mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f", mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f) && "mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2", mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2) && "mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple", mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple) && "mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079", mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079) && "mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_195", mod_consts.const_int_pos_195);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_195) && "mod_consts.const_int_pos_195");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a", mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a) && "mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647", mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647) && "mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3363107645c2e351168327c8453451db", mod_consts.const_str_digest_3363107645c2e351168327c8453451db);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_3363107645c2e351168327c8453451db) && "mod_consts.const_str_digest_3363107645c2e351168327c8453451db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc", mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc) && "mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51", mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51) && "mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba", mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba) && "mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple", mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple) && "mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839", mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839) && "mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getimage", mod_consts.const_str_plain_getimage);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_getimage) && "mod_consts.const_str_plain_getimage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0", mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0) && "mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9", mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9) && "mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_name_tuple", mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_name_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple", mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple) && "mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple", mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple) && "mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple", mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple) && "mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple", mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple) && "mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple", mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple) && "mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_PIL$ImageTk$Image(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageTk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageTk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageTk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Image);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageTk$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageTk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageTk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageTk->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageTk$_get_image_from_kw(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageTk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageTk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__get_image_from_kw);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageTk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_image_from_kw);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_image_from_kw, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_image_from_kw);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_image_from_kw, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__get_image_from_kw);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__get_image_from_kw);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_image_from_kw);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageTk$_pyimagingtkcall(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageTk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageTk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__pyimagingtkcall);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageTk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pyimagingtkcall);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pyimagingtkcall, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pyimagingtkcall);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pyimagingtkcall, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__pyimagingtkcall);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__pyimagingtkcall);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pyimagingtkcall);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$ImageTk$tkinter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$ImageTk->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$ImageTk->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_tkinter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$ImageTk->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tkinter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tkinter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tkinter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tkinter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_tkinter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_tkinter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tkinter);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_96a943eee0530e9f3a6720a61861caa5;
static PyCodeObject *code_objects_645b76f2078ede563227325bb40eac21;
static PyCodeObject *code_objects_ccf7c49807c1e05c16e00fd8fe08a266;
static PyCodeObject *code_objects_b205db9063a6b9e1f935e68b3b3139e6;
static PyCodeObject *code_objects_cb65abb49a4b9186eeaef51a26ae0b71;
static PyCodeObject *code_objects_80eb16c019dafbb324b8d68c903efd45;
static PyCodeObject *code_objects_dfce4b958eb6ca48bb2404c1f08f48f4;
static PyCodeObject *code_objects_b4ac8588d2909fea2c0208d6fe0c7bdf;
static PyCodeObject *code_objects_0c44db2c37a0cfeaa83299b0a0f720ed;
static PyCodeObject *code_objects_99435ff7b0607c5593851f196064d7d9;
static PyCodeObject *code_objects_2635c4f44b379076ab1b92bce2f17954;
static PyCodeObject *code_objects_cd1b6b1d15904bfba9efa9ffb990f40d;
static PyCodeObject *code_objects_53245b9e5bbdb2ad53cce6e778566dfe;
static PyCodeObject *code_objects_8f7a112976379ed005198ff4c231b070;
static PyCodeObject *code_objects_cea4244b673e798f7cf790a4afe42b6f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_89b022d51544d4d23cbefe539d0c9eb0); CHECK_OBJECT(module_filename_obj);
code_objects_96a943eee0530e9f3a6720a61861caa5 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9, mod_consts.const_str_digest_e262b110a9f91e6a6393f79aa56d64a9, NULL, NULL, 0, 0, 0);
code_objects_645b76f2078ede563227325bb40eac21 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___del__, mod_consts.const_str_digest_3363107645c2e351168327c8453451db, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 1, 0, 0);
code_objects_ccf7c49807c1e05c16e00fd8fe08a266 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___del__, mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 1, 0, 0);
code_objects_b205db9063a6b9e1f935e68b3b3139e6 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647, mod_consts.const_tuple_str_plain_self_str_plain_image_str_plain_kw_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_cb65abb49a4b9186eeaef51a26ae0b71 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023, mod_consts.const_tuple_c59d1b1ac7a896cdaa76d4a41a3e87a3_tuple, NULL, 3, 0, 0);
code_objects_80eb16c019dafbb324b8d68c903efd45 = MAKE_CODE_OBJECT(module_filename_obj, 249, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_dfce4b958eb6ca48bb2404c1f08f48f4 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b4ac8588d2909fea2c0208d6fe0c7bdf = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_image_from_kw, mod_consts.const_str_plain__get_image_from_kw, mod_consts.const_tuple_str_plain_kw_str_plain_source_tuple, NULL, 1, 0, 0);
code_objects_0c44db2c37a0cfeaa83299b0a0f720ed = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__pyimagingtkcall, mod_consts.const_str_plain__pyimagingtkcall, mod_consts.const_tuple_942e93111e3172432beccf3e07a761db_tuple, NULL, 3, 0, 0);
code_objects_99435ff7b0607c5593851f196064d7d9 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getimage, mod_consts.const_str_plain_getimage, mod_consts.const_tuple_str_plain_photo_str_plain_im_tuple, NULL, 1, 0, 0);
code_objects_2635c4f44b379076ab1b92bce2f17954 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_height, mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cd1b6b1d15904bfba9efa9ffb990f40d = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_height, mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_53245b9e5bbdb2ad53cce6e778566dfe = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_paste, mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2, mod_consts.const_tuple_8c6068707385d50c2a04f8e606363ea1_tuple, NULL, 2, 0, 0);
code_objects_8f7a112976379ed005198ff4c231b070 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_width, mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cea4244b673e798f7cf790a4afe42b6f = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_width, mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__10___del__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__11_width(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__12_height(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__13___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__14_getimage(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__1__get_image_from_kw(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__2__pyimagingtkcall(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__4___del__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__5___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__6_width(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__7_height(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__8_paste(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__9___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$ImageTk$$$function__1__get_image_from_kw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_kw = python_pars[0];
PyObject *var_source = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_source;
    var_source = tmp_assign_source_1;
    Py_INCREF(var_source);
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw = MAKE_FUNCTION_FRAME(tstate, code_objects_b4ac8588d2909fea2c0208d6fe0c7bdf, module_PIL$ImageTk, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw = cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_str_plain_file;
CHECK_OBJECT(par_kw);
tmp_cmp_expr_right_1 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_kw);
tmp_expression_value_1 = par_kw;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_frame.f_lineno = 46;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_file_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_source;
    assert(old != NULL);
    var_source = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_kw);
tmp_cmp_expr_right_2 = par_kw;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(par_kw);
tmp_expression_value_2 = par_kw;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_frame.f_lineno = 48;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_data_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_frame.f_lineno = 48;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_source;
    assert(old != NULL);
    var_source = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_source);
tmp_operand_value_1 = var_source;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_PIL$ImageTk$Image(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_source);
tmp_args_element_value_2 = var_source;
frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_frame.f_lineno = 51;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_open, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw,
    type_description_1,
    par_kw,
    var_source
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw == cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw);
    cache_frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__1__get_image_from_kw);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_source);
CHECK_OBJECT(var_source);
Py_DECREF(var_source);
var_source = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_source);
var_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageTk$$$function__2__pyimagingtkcall(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_command = python_pars[0];
PyObject *par_photo = python_pars[1];
PyObject *par_ptr = python_pars[2];
PyObject *var_tk = NULL;
PyObject *var__imagingtk = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall = MAKE_FUNCTION_FRAME(tstate, code_objects_0c44db2c37a0cfeaa83299b0a0f720ed, module_PIL$ImageTk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall = cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_photo);
tmp_expression_value_1 = par_photo;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tk);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_tk;
    var_tk = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_tk);
tmp_expression_value_2 = var_tk;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_call);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_command);
tmp_args_element_value_1 = par_command;
CHECK_OBJECT(par_photo);
tmp_args_element_value_2 = par_photo;
CHECK_OBJECT(par_ptr);
tmp_operand_value_1 = par_ptr;
tmp_args_element_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 59;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = 59;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooo";
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

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_3 = module_var_accessor_PIL$ImageTk$tkinter(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tkinter);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_TclError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageTk;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__imagingtk_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = 63;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$ImageTk,
        mod_consts.const_str_plain__imagingtk,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__imagingtk);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var__imagingtk;
    var__imagingtk = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var__imagingtk);
tmp_expression_value_4 = var__imagingtk;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tkinit);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_tk);
tmp_called_instance_1 = var_tk;
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = 65;
tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_interpaddr);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 65;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = 65;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_tk);
tmp_expression_value_5 = var_tk;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_call);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_command);
tmp_args_element_value_5 = par_command;
CHECK_OBJECT(par_photo);
tmp_args_element_value_6 = par_photo;
CHECK_OBJECT(par_ptr);
tmp_operand_value_2 = par_ptr;
tmp_args_element_value_7 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 66;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 58;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame)) {
        frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall,
    type_description_1,
    par_command,
    par_photo,
    par_ptr,
    var_tk,
    var__imagingtk
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall == cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall);
    cache_frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__2__pyimagingtkcall);

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
CHECK_OBJECT(var_tk);
CHECK_OBJECT(var_tk);
Py_DECREF(var_tk);
var_tk = NULL;
Py_XDECREF(var__imagingtk);
var__imagingtk = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tk);
var_tk = NULL;
Py_XDECREF(var__imagingtk);
var__imagingtk = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
CHECK_OBJECT(par_photo);
Py_DECREF(par_photo);
CHECK_OBJECT(par_ptr);
Py_DECREF(par_ptr);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
CHECK_OBJECT(par_photo);
Py_DECREF(par_photo);
CHECK_OBJECT(par_ptr);
Py_DECREF(par_ptr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageTk$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_image = python_pars[1];
PyObject *par_size = python_pars[2];
PyObject *par_kw = python_pars[3];
PyObject *var_mode = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cb65abb49a4b9186eeaef51a26ae0b71, module_PIL$ImageTk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__3___init__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__3___init__ = cache_frame_frame_PIL$ImageTk$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__3___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__3___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_image);
tmp_cmp_expr_left_1 = par_image;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageTk$_get_image_from_kw(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_image_from_kw);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_args_element_value_1 = par_kw;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 101;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooNo";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_image);
tmp_cmp_expr_left_2 = par_image;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 105;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 105;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooNo";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_image);
tmp_isinstance_inst_1 = par_image;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooNo";
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
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_image);
tmp_assign_source_2 = par_image;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_2;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
{
    PyObject *old = par_image;
    assert(old != NULL);
    par_image = tmp_assign_source_3;
    Py_INCREF(par_image);
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_size);
tmp_cmp_expr_left_3 = par_size;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_be2eed8df2f9c6876816452fe4c375bd;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 112;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 112;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooNo";
goto frame_exception_exit_1;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_mode);
tmp_cmp_expr_left_4 = var_mode;
tmp_cmp_expr_right_4 = mod_consts.const_str_plain_P;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooNo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 118;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_apply_transparency);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_image);
tmp_called_instance_2 = par_image;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 119;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_load);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_5;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_palette);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 120;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_image);
tmp_expression_value_4 = par_image;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_palette);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_mode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_5 = mod_consts.const_str_plain_RGB;
Py_INCREF(tmp_assign_source_5);
condexpr_end_1:;
{
    PyObject *old = var_mode;
    assert(old != NULL);
    var_mode = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_image);
tmp_expression_value_5 = par_image;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_size);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_size;
    assert(old != NULL);
    par_size = tmp_assign_source_6;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_size);
tmp_iter_arg_1 = par_size;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooNo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooNo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooooNo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 122;
type_description_1 = "ooooNo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_ass_subvalue_1 = tmp_tuple_unpack_1__element_1;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_1 = par_kw;
tmp_ass_subscript_1 = mod_consts.const_str_plain_width;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooNo";
    goto try_except_handler_2;
}
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_ass_subvalue_2 = tmp_tuple_unpack_1__element_2;
CHECK_OBJECT(par_kw);
tmp_ass_subscribed_2 = par_kw;
tmp_ass_subscript_2 = mod_consts.const_str_plain_height;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooooNo";
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
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

branch_end_3:;
branch_end_2:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_mode);
tmp_cmp_expr_left_5 = var_mode;
tmp_cmp_expr_right_5 = mod_consts.const_tuple_str_plain_1_str_plain_L_str_plain_RGB_str_plain_RGBA_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
tmp_called_instance_3 = module_var_accessor_PIL$ImageTk$Image(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_mode);
tmp_args_element_value_2 = var_mode;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 125;
tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getmodebase, tmp_args_element_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mode;
    assert(old != NULL);
    var_mode = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(var_mode);
tmp_ass_attr_value_1 = var_mode;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__PhotoImage__mode, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
if (par_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}

tmp_ass_attr_value_2 = par_size;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__PhotoImage__size, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_6 = module_var_accessor_PIL$ImageTk$tkinter(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tkinter);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PhotoImage);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_direct_call_arg2_1 = par_kw;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_ass_attr_value_3 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__PhotoImage__photo, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_attr_target_4;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_tk);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain_tk, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_2;
if (par_image == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 131;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_image);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_paste);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
if (par_image == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_image);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_image;
frame_frame_PIL$ImageTk$$$function__3___init__->m_frame.f_lineno = 132;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__3___init__,
    type_description_1,
    par_self,
    par_image,
    par_size,
    par_kw,
    NULL,
    var_mode
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__3___init__ == cache_frame_frame_PIL$ImageTk$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__3___init__);
    cache_frame_frame_PIL$ImageTk$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__3___init__);

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
Py_XDECREF(par_image);
par_image = NULL;
Py_XDECREF(par_size);
par_size = NULL;
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_image);
par_image = NULL;
Py_XDECREF(par_size);
par_size = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
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
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageTk$$$function__4___del__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_name = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__4___del__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__4___del__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__4___del__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__4___del__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__4___del__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__4___del__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ccf7c49807c1e05c16e00fd8fe08a266, module_PIL$ImageTk, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__4___del__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__4___del__ = cache_frame_frame_PIL$ImageTk$$$function__4___del__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__4___del__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__4___del__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_1;
    Py_XDECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__4___del__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__4___del__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 135;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageTk$$$function__4___del__->m_frame)) {
        frame_frame_PIL$ImageTk$$$function__4___del__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_3;
tmp_ass_attr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, const_str_plain_name, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tk);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_image;
tmp_args_element_value_2 = mod_consts.const_str_plain_delete;
CHECK_OBJECT(var_name);
tmp_args_element_value_3 = var_name;
frame_frame_PIL$ImageTk$$$function__4___del__->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_call,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__4___del__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__4___del__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 140;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageTk$$$function__4___del__->m_frame)) {
        frame_frame_PIL$ImageTk$$$function__4___del__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__4___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__4___del__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__4___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__4___del__,
    type_description_1,
    par_self,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__4___del__ == cache_frame_frame_PIL$ImageTk$$$function__4___del__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__4___del__);
    cache_frame_frame_PIL$ImageTk$$$function__4___del__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__4___del__);

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
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_name);
var_name = NULL;
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


static PyObject *impl_PIL$ImageTk$$$function__5___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__5___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__5___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__5___str__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__5___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__5___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__5___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dfce4b958eb6ca48bb2404c1f08f48f4, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__5___str__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__5___str__ = cache_frame_frame_PIL$ImageTk$$$function__5___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__5___str__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__5___str__) == 2);

// Framed code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__5___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__5___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__5___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__5___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__5___str__ == cache_frame_frame_PIL$ImageTk$$$function__5___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__5___str__);
    cache_frame_frame_PIL$ImageTk$$$function__5___str__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__5___str__);

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


static PyObject *impl_PIL$ImageTk$$$function__6_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__6_width;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__6_width = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__6_width)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__6_width);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__6_width == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__6_width = MAKE_FUNCTION_FRAME(tstate, code_objects_cea4244b673e798f7cf790a4afe42b6f, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__6_width->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__6_width = cache_frame_frame_PIL$ImageTk$$$function__6_width;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__6_width);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__6_width) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__PhotoImage__size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__6_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__6_width->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__6_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__6_width,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__6_width == cache_frame_frame_PIL$ImageTk$$$function__6_width) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__6_width);
    cache_frame_frame_PIL$ImageTk$$$function__6_width = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__6_width);

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


static PyObject *impl_PIL$ImageTk$$$function__7_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__7_height;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__7_height = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__7_height)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__7_height);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__7_height == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__7_height = MAKE_FUNCTION_FRAME(tstate, code_objects_cd1b6b1d15904bfba9efa9ffb990f40d, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__7_height->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__7_height = cache_frame_frame_PIL$ImageTk$$$function__7_height;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__7_height);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__7_height) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__PhotoImage__size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__7_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__7_height->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__7_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__7_height,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__7_height == cache_frame_frame_PIL$ImageTk$$$function__7_height) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__7_height);
    cache_frame_frame_PIL$ImageTk$$$function__7_height = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__7_height);

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


static PyObject *impl_PIL$ImageTk$$$function__8_paste(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_im = python_pars[1];
PyObject *var_ptr = NULL;
PyObject *var_image = NULL;
PyObject *var_block = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__8_paste;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__8_paste = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__8_paste)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__8_paste);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__8_paste == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__8_paste = MAKE_FUNCTION_FRAME(tstate, code_objects_53245b9e5bbdb2ad53cce6e778566dfe, module_PIL$ImageTk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__8_paste->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__8_paste = cache_frame_frame_PIL$ImageTk$$$function__8_paste;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__8_paste);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__8_paste) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_im);
tmp_called_instance_1 = par_im;
frame_frame_PIL$ImageTk$$$function__8_paste->m_frame.f_lineno = 181;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getim);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ptr;
    var_ptr = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_im);
tmp_expression_value_1 = par_im;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_im);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_image;
    var_image = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_image);
tmp_called_instance_2 = var_image;
frame_frame_PIL$ImageTk$$$function__8_paste->m_frame.f_lineno = 183;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_isblock);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
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
CHECK_OBJECT(par_im);
tmp_expression_value_2 = par_im;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__PhotoImage__mode);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 183;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
tmp_expression_value_5 = module_var_accessor_PIL$ImageTk$Image(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_core);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_new_block);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__PhotoImage__mode);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 184;
type_description_1 = "ooooo";
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

exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageTk$$$function__8_paste->m_frame.f_lineno = 184;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_block;
    var_block = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_image);
tmp_called_instance_3 = var_image;
CHECK_OBJECT(var_block);
tmp_args_element_value_3 = var_block;
CHECK_OBJECT(var_image);
tmp_args_element_value_4 = var_image;
frame_frame_PIL$ImageTk$$$function__8_paste->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_convert2,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_block);
tmp_expression_value_8 = var_block;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ptr);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ptr;
    assert(old != NULL);
    var_ptr = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_PIL$ImageTk$_pyimagingtkcall(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pyimagingtkcall);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_PyImagingPhoto;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__PhotoImage__photo);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ptr);
tmp_args_element_value_7 = var_ptr;
frame_frame_PIL$ImageTk$$$function__8_paste->m_frame.f_lineno = 188;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__8_paste, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__8_paste->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__8_paste, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__8_paste,
    type_description_1,
    par_self,
    par_im,
    var_ptr,
    var_image,
    var_block
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__8_paste == cache_frame_frame_PIL$ImageTk$$$function__8_paste) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__8_paste);
    cache_frame_frame_PIL$ImageTk$$$function__8_paste = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__8_paste);

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
CHECK_OBJECT(var_ptr);
CHECK_OBJECT(var_ptr);
Py_DECREF(var_ptr);
var_ptr = NULL;
CHECK_OBJECT(var_image);
CHECK_OBJECT(var_image);
Py_DECREF(var_image);
var_image = NULL;
Py_XDECREF(var_block);
var_block = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ptr);
var_ptr = NULL;
Py_XDECREF(var_image);
var_image = NULL;
Py_XDECREF(var_block);
var_block = NULL;
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


static PyObject *impl_PIL$ImageTk$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_image = python_pars[1];
PyObject *par_kw = python_pars[2];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b205db9063a6b9e1f935e68b3b3139e6, module_PIL$ImageTk, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__9___init__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__9___init__ = cache_frame_frame_PIL$ImageTk$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__9___init__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__9___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_image);
tmp_cmp_expr_left_1 = par_image;
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_PIL$ImageTk$_get_image_from_kw(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_image_from_kw);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kw);
tmp_args_element_value_1 = par_kw;
frame_frame_PIL$ImageTk$$$function__9___init__->m_frame.f_lineno = 212;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooN";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_image);
tmp_cmp_expr_left_2 = par_image;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_de5cc3acad4a077421cc4af2ffe0bc37;
frame_frame_PIL$ImageTk$$$function__9___init__->m_frame.f_lineno = 216;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 216;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooN";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_image);
tmp_expression_value_1 = par_image;
tmp_ass_attr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_mode);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__BitmapImage__mode, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_image);
tmp_expression_value_2 = par_image;
tmp_ass_attr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_size);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__BitmapImage__size, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_3 = module_var_accessor_PIL$ImageTk$tkinter(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tkinter);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_BitmapImage);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_image);
tmp_called_instance_1 = par_image;
frame_frame_PIL$ImageTk$$$function__9___init__->m_frame.f_lineno = 220;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tobitmap);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 220;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_kw);
tmp_direct_call_arg3_1 = par_kw;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_ass_attr_value_3 = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__BitmapImage__photo, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__9___init__,
    type_description_1,
    par_self,
    par_image,
    par_kw,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__9___init__ == cache_frame_frame_PIL$ImageTk$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__9___init__);
    cache_frame_frame_PIL$ImageTk$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__9___init__);

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
CHECK_OBJECT(par_image);
CHECK_OBJECT(par_image);
Py_DECREF(par_image);
par_image = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_image);
par_image = NULL;
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
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$ImageTk$$$function__10___del__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_name = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__10___del__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__10___del__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__10___del__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__10___del__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__10___del__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__10___del__ = MAKE_FUNCTION_FRAME(tstate, code_objects_645b76f2078ede563227325bb40eac21, module_PIL$ImageTk, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__10___del__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__10___del__ = cache_frame_frame_PIL$ImageTk$$$function__10___del__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__10___del__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__10___del__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__BitmapImage__photo);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_1;
    Py_XDECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__10___del__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__10___del__, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 223;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageTk$$$function__10___del__->m_frame)) {
        frame_frame_PIL$ImageTk$$$function__10___del__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
PyObject *tmp_expression_value_3;
tmp_ass_attr_value_1 = Py_None;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_ass_attr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__BitmapImage__photo);
if (tmp_ass_attr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, const_str_plain_name, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_target_1);
Py_DECREF(tmp_ass_attr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__BitmapImage__photo);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_tk);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_image;
tmp_args_element_value_2 = mod_consts.const_str_plain_delete;
CHECK_OBJECT(var_name);
tmp_args_element_value_3 = var_name;
frame_frame_PIL$ImageTk$$$function__10___del__->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_call,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__10___del__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__10___del__, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 228;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_PIL$ImageTk$$$function__10___del__->m_frame)) {
        frame_frame_PIL$ImageTk$$$function__10___del__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__10___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__10___del__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__10___del__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__10___del__,
    type_description_1,
    par_self,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__10___del__ == cache_frame_frame_PIL$ImageTk$$$function__10___del__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__10___del__);
    cache_frame_frame_PIL$ImageTk$$$function__10___del__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__10___del__);

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
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_name);
var_name = NULL;
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


static PyObject *impl_PIL$ImageTk$$$function__11_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__11_width;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__11_width = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__11_width)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__11_width);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__11_width == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__11_width = MAKE_FUNCTION_FRAME(tstate, code_objects_8f7a112976379ed005198ff4c231b070, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__11_width->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__11_width = cache_frame_frame_PIL$ImageTk$$$function__11_width;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__11_width);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__11_width) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__BitmapImage__size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__11_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__11_width->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__11_width, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__11_width,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__11_width == cache_frame_frame_PIL$ImageTk$$$function__11_width) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__11_width);
    cache_frame_frame_PIL$ImageTk$$$function__11_width = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__11_width);

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


static PyObject *impl_PIL$ImageTk$$$function__12_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__12_height;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__12_height = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__12_height)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__12_height);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__12_height == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__12_height = MAKE_FUNCTION_FRAME(tstate, code_objects_2635c4f44b379076ab1b92bce2f17954, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__12_height->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__12_height = cache_frame_frame_PIL$ImageTk$$$function__12_height;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__12_height);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__12_height) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__BitmapImage__size);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__12_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__12_height->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__12_height, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__12_height,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__12_height == cache_frame_frame_PIL$ImageTk$$$function__12_height) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__12_height);
    cache_frame_frame_PIL$ImageTk$$$function__12_height = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__12_height);

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


static PyObject *impl_PIL$ImageTk$$$function__13___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__13___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__13___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__13___str__)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__13___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__13___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__13___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_80eb16c019dafbb324b8d68c903efd45, module_PIL$ImageTk, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__13___str__->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__13___str__ = cache_frame_frame_PIL$ImageTk$$$function__13___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__13___str__);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__13___str__) == 2);

// Framed code:
{
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__BitmapImage__photo);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__13___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__13___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__13___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__13___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__13___str__ == cache_frame_frame_PIL$ImageTk$$$function__13___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__13___str__);
    cache_frame_frame_PIL$ImageTk$$$function__13___str__ = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__13___str__);

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


static PyObject *impl_PIL$ImageTk$$$function__14_getimage(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_photo = python_pars[0];
PyObject *var_im = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk$$$function__14_getimage;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$ImageTk$$$function__14_getimage = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_PIL$ImageTk$$$function__14_getimage)) {
    Py_XDECREF(cache_frame_frame_PIL$ImageTk$$$function__14_getimage);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$ImageTk$$$function__14_getimage == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$ImageTk$$$function__14_getimage = MAKE_FUNCTION_FRAME(tstate, code_objects_99435ff7b0607c5593851f196064d7d9, module_PIL$ImageTk, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$ImageTk$$$function__14_getimage->m_type_description == NULL);
frame_frame_PIL$ImageTk$$$function__14_getimage = cache_frame_frame_PIL$ImageTk$$$function__14_getimage;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk$$$function__14_getimage);
assert(Py_REFCNT(frame_frame_PIL$ImageTk$$$function__14_getimage) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_PIL$ImageTk$Image(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Image);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_RGBA;
CHECK_OBJECT(par_photo);
tmp_called_instance_1 = par_photo;
frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame.f_lineno = 262;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_width);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_instance_2;
PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_photo);
tmp_called_instance_2 = par_photo;
frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame.f_lineno = 262;
tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_height);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oo";
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
frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame.f_lineno = 262;
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


exception_lineno = 262;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_im;
    var_im = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_3;
tmp_called_value_2 = module_var_accessor_PIL$ImageTk$_pyimagingtkcall(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pyimagingtkcall);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_PyImagingPhotoGet;
CHECK_OBJECT(par_photo);
tmp_args_element_value_4 = par_photo;
CHECK_OBJECT(var_im);
tmp_called_instance_3 = var_im;
frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame.f_lineno = 264;
tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getim);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame.f_lineno = 264;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk$$$function__14_getimage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk$$$function__14_getimage->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk$$$function__14_getimage, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$ImageTk$$$function__14_getimage,
    type_description_1,
    par_photo,
    var_im
);


// Release cached frame if used for exception.
if (frame_frame_PIL$ImageTk$$$function__14_getimage == cache_frame_frame_PIL$ImageTk$$$function__14_getimage) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$ImageTk$$$function__14_getimage);
    cache_frame_frame_PIL$ImageTk$$$function__14_getimage = NULL;
}

assertFrameObject(frame_frame_PIL$ImageTk$$$function__14_getimage);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_im);
tmp_return_value = var_im;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_im);
CHECK_OBJECT(var_im);
Py_DECREF(var_im);
var_im = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_im);
var_im = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_photo);
Py_DECREF(par_photo);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_photo);
Py_DECREF(par_photo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__10___del__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__10___del__,
        mod_consts.const_str_plain___del__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3363107645c2e351168327c8453451db,
#endif
        code_objects_645b76f2078ede563227325bb40eac21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__11_width(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__11_width,
        mod_consts.const_str_plain_width,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_98e1044ed82e2700a95f07fb961579cc,
#endif
        code_objects_8f7a112976379ed005198ff4c231b070,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__12_height(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__12_height,
        mod_consts.const_str_plain_height,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4d9f5a5f100de407c495ecf459590f51,
#endif
        code_objects_2635c4f44b379076ab1b92bce2f17954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__13___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__13___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_22ef506ca2fd289844088dd21b1ad6ba,
#endif
        code_objects_80eb16c019dafbb324b8d68c903efd45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_1d2ff69651f3512ba6c8f16ef40463ea,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__14_getimage(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__14_getimage,
        mod_consts.const_str_plain_getimage,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_99435ff7b0607c5593851f196064d7d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_8f7eb36fe0c5a565f57bdf1dc6a01161,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__1__get_image_from_kw(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__1__get_image_from_kw,
        mod_consts.const_str_plain__get_image_from_kw,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b4ac8588d2909fea2c0208d6fe0c7bdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__2__pyimagingtkcall(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__2__pyimagingtkcall,
        mod_consts.const_str_plain__pyimagingtkcall,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0c44db2c37a0cfeaa83299b0a0f720ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b267f77a5a0148bb6d22e5e753d6c023,
#endif
        code_objects_cb65abb49a4b9186eeaef51a26ae0b71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__4___del__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__4___del__,
        mod_consts.const_str_plain___del__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d80edddbd3f990bb5cb81304cc2fcc5e,
#endif
        code_objects_ccf7c49807c1e05c16e00fd8fe08a266,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__5___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__5___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f782fd184016010966dca68db60ca51,
#endif
        code_objects_dfce4b958eb6ca48bb2404c1f08f48f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_dd972ab4a61b6bf4e091c44919ac9aa8,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__6_width(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__6_width,
        mod_consts.const_str_plain_width,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eafc28c3d8a1decea6229a25decfa4ae,
#endif
        code_objects_cea4244b673e798f7cf790a4afe42b6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_bec77349ef12e753d4cd5b1c4b5f25ec,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__7_height(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__7_height,
        mod_consts.const_str_plain_height,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5d0068b9f848aa3216a37406d4e640e6,
#endif
        code_objects_cd1b6b1d15904bfba9efa9ffb990f40d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_1abfc66457d3747b3fcbb02a232340db,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__8_paste(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__8_paste,
        mod_consts.const_str_plain_paste,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_49b75161b0627340117a6ef50d0b48d2,
#endif
        code_objects_53245b9e5bbdb2ad53cce6e778566dfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
        mod_consts.const_str_digest_b412722f5d85f9a07def83350f86eb43,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$ImageTk$$$function__9___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$ImageTk$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0fb125c9ad6196e59f2880f51a25d647,
#endif
        code_objects_b205db9063a6b9e1f935e68b3b3139e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$ImageTk,
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

static function_impl_code const function_table_PIL$ImageTk[] = {
impl_PIL$ImageTk$$$function__1__get_image_from_kw,
impl_PIL$ImageTk$$$function__2__pyimagingtkcall,
impl_PIL$ImageTk$$$function__3___init__,
impl_PIL$ImageTk$$$function__4___del__,
impl_PIL$ImageTk$$$function__5___str__,
impl_PIL$ImageTk$$$function__6_width,
impl_PIL$ImageTk$$$function__7_height,
impl_PIL$ImageTk$$$function__8_paste,
impl_PIL$ImageTk$$$function__9___init__,
impl_PIL$ImageTk$$$function__10___del__,
impl_PIL$ImageTk$$$function__11_width,
impl_PIL$ImageTk$$$function__12_height,
impl_PIL$ImageTk$$$function__13___str__,
impl_PIL$ImageTk$$$function__14_getimage,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$ImageTk);
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
        module_PIL$ImageTk,
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
        function_table_PIL$ImageTk,
        sizeof(function_table_PIL$ImageTk) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL.ImageTk";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$ImageTk(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$ImageTk");

    // Store the module for future use.
    module_PIL$ImageTk = module;

    moduledict_PIL$ImageTk = MODULE_DICT(module_PIL$ImageTk);

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
        PRINT_STRING("PIL$ImageTk: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$ImageTk: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$ImageTk: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageTk" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$ImageTk\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$ImageTk,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageTk,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$ImageTk,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageTk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$ImageTk,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$ImageTk);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$ImageTk);
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

        UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$ImageTk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_PIL$ImageTk$$$class__1_PhotoImage_73 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_PIL$ImageTk$$$class__2_BitmapImage_195 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$ImageTk = MAKE_MODULE_FRAME(code_objects_96a943eee0530e9f3a6720a61861caa5, module_PIL$ImageTk);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$ImageTk);
assert(Py_REFCNT(frame_frame_PIL$ImageTk) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$ImageTk$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$ImageTk$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tkinter;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$ImageTk;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$ImageTk->m_frame.f_lineno = 29;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_tkinter, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_7);
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
        (PyObject *)moduledict_PIL$ImageTk,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_PIL$ImageTk;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Image_str_plain_ImageFile_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_PIL$ImageTk->m_frame.f_lineno = 33;
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
        (PyObject *)moduledict_PIL$ImageTk,
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
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_Image, tmp_assign_source_10);
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
        (PyObject *)moduledict_PIL$ImageTk,
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
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_ImageFile, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = Py_False;
UPDATE_STRING_DICT0(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7514e31b72f87891a5f0ac05bb436ea3);

tmp_assign_source_13 = MAKE_FUNCTION_PIL$ImageTk$$$function__1__get_image_from_kw(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__get_image_from_kw, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e9ad2702bdefb7875096ae8ac1e5ca88);

tmp_assign_source_14 = MAKE_FUNCTION_PIL$ImageTk$$$function__2__pyimagingtkcall(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain__pyimagingtkcall, tmp_assign_source_14);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_PIL$ImageTk$$$class__1_PhotoImage_73 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c0f415c8feab191e02bd4d47f512df14;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_PhotoImage;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_73;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f7795320c3bda3dff1e8483f444b0c4b);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__3___init__(tstate, tmp_defaults_1, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__4___del__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain___del__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__5___str__(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__6_width(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain_width, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__7_height(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain_height, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_2d79bb1196e0f4c20b263b2408e5c18f);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__8_paste(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain_paste, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_ae91aa9bf9ae46b1167a4bbba8423704_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__1_PhotoImage_73, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_3;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_3 = mod_consts.const_str_plain_PhotoImage;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_PIL$ImageTk$$$class__1_PhotoImage_73;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_3, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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
Py_DECREF(locals_PIL$ImageTk$$$class__1_PhotoImage_73);
locals_PIL$ImageTk$$$class__1_PhotoImage_73 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageTk$$$class__1_PhotoImage_73);
locals_PIL$ImageTk$$$class__1_PhotoImage_73 = NULL;
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
exception_lineno = 73;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_PhotoImage, tmp_assign_source_17);
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
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_PIL$ImageTk$$$class__2_BitmapImage_195 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_838a29dc561fc2a6574ed3f246040a8c;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_47ffa35dd5970060e7ee48dccd17f079;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_BitmapImage;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_195;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_9;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_9d2765c0e6accaad4b2723a09992f37a);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__9___init__(tstate, tmp_defaults_2, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__10___del__(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain___del__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__11_width(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain_width, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__12_height(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain_height, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_PIL$ImageTk$$$function__13___str__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain___mode_str_plain___size_str_plain___photo_tuple;
tmp_result = DICT_SET_ITEM(locals_PIL$ImageTk$$$class__2_BitmapImage_195, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
tmp_name_value_4 = mod_consts.const_str_plain_BitmapImage;
tmp_bases_value_2 = const_tuple_empty;
tmp_dict_arg_value_2 = locals_PIL$ImageTk$$$class__2_BitmapImage_195;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_2);
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_21 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_PIL$ImageTk$$$class__2_BitmapImage_195);
locals_PIL$ImageTk$$$class__2_BitmapImage_195 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_PIL$ImageTk$$$class__2_BitmapImage_195);
locals_PIL$ImageTk$$$class__2_BitmapImage_195 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 195;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_BitmapImage, tmp_assign_source_21);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$ImageTk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$ImageTk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$ImageTk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$ImageTk);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0e8d1ec6a2e2fe2e489827ab89d57839);

tmp_assign_source_23 = MAKE_FUNCTION_PIL$ImageTk$$$function__14_getimage(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_PIL$ImageTk, (Nuitka_StringObject *)mod_consts.const_str_plain_getimage, tmp_assign_source_23);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$ImageTk", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL.ImageTk" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$ImageTk);
    return module_PIL$ImageTk;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$ImageTk, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$ImageTk", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
